#include "HtmlTools.h"

namespace Upp {

TidyHtmlParser::TidyHtmlParser(const String& html)
: doc {0}
, errors {0}
, htmlsource(html)
{
	doc = tidyCreate();
	tidyBufInit(&errors);
	tidySetErrorBuffer(doc, &errors);
}

TidyHtmlParser::~TidyHtmlParser()
{
	tidyBufFree(&errors);
	tidyRelease(doc);
}

TidyHtmlParser& TidyHtmlParser::SetOption(const TidyOptionId id, const Value& value)
{
	bool success = false;
	TidyOption opt = tidyGetOption(doc, id);

	switch(tidyOptGetType(opt)) {
	case TidyBoolean:
		success = value.Is<bool>()
				&& tidyOptSetBool(doc, id, value.To<bool>() ? yes : no);
		break;
	case TidyInteger:
		success = value.Is<int>()
				&& tidyOptSetInt(doc, id, value.To<int>());
		break;
	case TidyString:
		success = value.Is<String>()
				&& tidyOptSetValue(doc, id, ~value.To<String>());
		break;
	default:
		RLOG("Warning: Unrecognized option type");
		break;
	}
	if(!success)
		RLOG("Warning: Unable to set option \"" << tidyOptGetName(opt) << "\" to " << value);

	return *this;
}

TidyHtmlParser& TidyHtmlParser::SetOption(const String& id, const Value& value)
{
	TidyOptionId optid = tidyOptGetIdForName(~id);
	if(optid)
		return SetOption(optid, value);
	RLOG("Warning: Unrecognized option string: " << id);
	return *this;
}

TidyHtmlParser::Node::Node(TidyDoc doc_, TidyNode node)
: doc(doc_)
, self(node)
{
}

TidyHtmlParser::Node::Attr::Attr(TidyNode node_, TidyAttr attr)
: node(node_)
, self(attr)
{
}

String TidyHtmlParser::Node::GetText() const
{
	TidyBuffer buf;
	tidyBufInit(&buf);
	tidyNodeGetText(doc, self, &buf);
	String s((const char*) buf.bp, buf.size);
	tidyBufFree(&buf);
    return s;
}

String TidyHtmlParser::Node::GetValue() const
{
	TidyBuffer buf;
	tidyBufInit(&buf);
	tidyNodeGetValue(doc, self, &buf);
	String s((const char*) buf.bp, buf.size);
	tidyBufFree(&buf);
    return s;
}

static void sParseHtml(HtmlNode& tree, const TidyHtmlParser::Node& node)
{
	for(auto q = node.GetChild(); q; q = q.GetNext()) {
		TidyNodeType t = q.GetType();
		if(t == TidyNode_End)
			continue;
		HtmlNode& n = tree.Add();
	
		auto CreateText = [&n, &node](TidyHtmlParser::Node& q)
		{
			n.CreateText(
				node.GetId() == TidyTag_SCRIPT
					? q.GetValue() // Don't escape the script...
					: q.GetText());
		};
		
		String s = q.GetName();
		
		switch(t) {
	    case TidyNode_Root:
			n.CreateRoot();
			break;
	    case TidyNode_DocType:
			n.CreateDocType(s);
			break;
	    case TidyNode_Comment:
			n.CreateComment(q.GetText());
			break;
	    case TidyNode_ProcIns:
			n.CreatePI(q.GetText());
			break;
	    case TidyNode_Section:
			n.CreateXMLSect(q.GetText());
			break;
	    case TidyNode_XmlDecl:
			n.CreateXMLDecl(q.GetText());
			break;
	    case TidyNode_Asp:
			n.CreateASP(q.GetText());
			break;
	    case TidyNode_Jste:
			n.CreateJSTE(q.GetText());
			break;
	    case TidyNode_Php:
			n.CreatePHP(q.GetText());
			break;
	    case TidyNode_Start:
			n.CreateTag(s);
			break;
		case TidyNode_StartEnd:
			n.CreateTag(s);
			break;
	    case TidyNode_Text:
			CreateText(q);
			break;
	    case TidyNode_CDATA:
			n.CreateCDATA(q.GetValue());
			break;
		default:
			continue;
		}

		if(q.HasAttrs()) {
			for(auto a = q.GetFirstAttr(); a; a = a.GetNext()) {
				n.SetAttr(a.GetKey(), a.GetValue());
			}
		}

		sParseHtml(n, q);
	}
}

HtmlNode ParseHtml(const String& html, const VectorMap<String, Value>& options)
{
	TidyHtmlParser p(html);
	HtmlNode n;

	for(const auto& q : ~options)
		p.SetOption(q.key, q.value);

	p.Parse();
	sParseHtml(n, p.GetRoot());
	return pick(n);
}

static bool sRepairHtml(String& out, TidyDoc& doc)
{
	int rc = tidyCleanAndRepair(doc);
	if(rc > 0) {
		TidyBuffer buf;
		tidyBufInit(&buf);
		tidySaveBuffer(doc, &buf);
		out.Set((const char*) buf.bp, buf.size);
		tidyBufFree(&buf);
	}
	return rc == 0;
}

String RepairHtml(const String& html, const VectorMap<String, Value>& options)
{
	TidyHtmlParser p(html);

	for(const auto& q : ~options)
		p.SetOption(q.key, q.value);
	
	String out;
	return p.Parse() > 0 && sRepairHtml(out, p.doc) ? out : String::GetVoid();
}

}