topic "HtmlNode ";
[i448;a25;kKO9;2 $$1,0#37138531426314131252341829483380:class]
[l288;2 $$2,2#27521748481378242620020725143825:desc]
[0 $$3,0#96390100711032703541132217272105:end]
[H6;0 $$4,0#05600065144404261032431302351956:begin]
[i448;a25;kKO9;2 $$5,0#37138531426314131252341829483370:item]
[l288;a4;*@5;1 $$6,6#70004532496200323422659154056402:requirement]
[l288;i1121;b17;O9;~~~.1408;2 $$7,0#10431211400427159095818037425705:param]
[i448;b42;O9;2 $$8,8#61672508125594000341940100500538:tparam]
[b42;2 $$9,9#13035079074754324216151401829390:normal]
[2 $$0,0#00000000000000000000000000000000:Default]
[{_}%EN-US 
[ {{10000@(113.42.0) [s0; [*@7;4 Hierarchical representation of HTML document]]}}&]
[s3;%- &]
[s1;:Upp`:`:HtmlNode:%- [@(0.0.255)3 class ][*3 HtmlNode]&]
[s0; This class represent the whole HTML document as recursive hierarchic 
structure `- each HtmlNode can contain any number of child HtmlNodes. 
HtmlNode is mutable and U`+`+ provides function to parse HTML 
and store it to HtmlNode.&]
[s0; &]
[s0; HtmlNode is [*/^topic`:`/`/Core`/srcdoc`/Moveable`$en`-us^ moveable][*/  
]type with [*/^topic`:`/`/Core`/srcdoc`/pick`_`$en`-us^ pick and 
optional deep copy] transfer semantics&]
[s3; &]
[ {{10000F(128)G(128)@1 [s0; [* Constructor detail]]}}&]
[s3;%- &]
[s5;:Upp`:`:HtmlNode`:`:HtmlNode`(`):%- [* HtmlNode]()&]
[s2;  Default constructor.&]
[s3; &]
[s5;:Upp`:`:HtmlNode`:`:HtmlNode`(const Upp`:`:HtmlNode`&`,int`):%- [* HtmlNode]([@(0.0.255) c
onst] [* HtmlNode][@(0.0.255) `&] n, [@(0.0.255) int])&]
[s2; Deep copy constructor.&]
[s3; &]
[ {{10000F(128)G(128)@1 [s0; [* Public Method List]]}}&]
[s3;%- &]
[s5;:Upp`:`:HtmlNode`:`:Void`(`):%- [@(0.0.255) static] [@(0.0.255) const] 
HtmlNode[@(0.0.255) `&] [* Void]()&]
[s2; Returns a constant reference to HtmlNode representing `"nothing`". 
This reference is used as return value in cases where there are 
missing requested elements.&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:IsVoid`(`)const:%- [@(0.0.255) bool] [* IsVoid]() 
[@(0.0.255) const]&]
[s2; Returns true if HtmlNode is Void.&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:GetType`(`)const:%- [@(0.0.255) enum] Type 
[* GetType]() [@(0.0.255) const]&]
[s2; Returns the type of node.&]
[s2; Constants used for identifying the type of a given node are 
as follows:&]
[s2; [*C@3 Type`::Root]&]
[s2; [*C@3 Type`::DocType]&]
[s2; [*C@3 Type`::Tag]&]
[s2; [*C@3 Type`::Text]&]
[s2; [*C@3 Type`::Decl]&]
[s2; [*C@3 Type`::PI]&]
[s2; [*C@3 Type`::Comment]&]
[s2; [*C@3 Type`::CData]&]
[s2; [*C@3 Type`::Asp]&]
[s2; [*C@3 Type`::Php]&]
[s2; [*C@3 Type`::Jste]&]
[s2; [*C@3 Type`::XmlSect]&]
[s2; [*C@3 Type`::XmlDecl]&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:GetText`(`)const:%- String [* GetText]() [@(0.0.255) const]&]
[s5;:Upp`:`:HtmlNode`:`:GetTag`(`)const:%- String [* GetTag]() [@(0.0.255) const]&]
[s2; Returns the text associated with node. If the node is [*C@3 Type`::Tag], 
the text is tag`-id. If the node is [*C@3 Type`::Text], the text 
is ... the text. In other cases, like [*C@3 Type`::PI], the text 
is the copy of element content.&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:IsTag`(`)const:%- [@(0.0.255) bool] [* IsTag]() 
[@(0.0.255) const]&]
[s2; Returns true if node is [*C@3 Type`::Tag].&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:IsTag`(const char`*`)const:%- [@(0.0.255) bool] 
[* IsTag]([@(0.0.255) const] [@(0.0.255) char] [@(0.0.255) `*][*@3 tag]) 
[@(0.0.255) const]&]
[s2; Returns true if node is [*C@3 Type`::Tag ]and is equal to [%-*@3 tag]..&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:IsText`(`)const:%- [@(0.0.255) bool] [* IsText]() 
[@(0.0.255) const]&]
[s2; Returns true if node is a text node.&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:Clear`(`):%- [@(0.0.255) void] [* Clear]()&]
[s2; Clears all content.&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:CreateTag`(const char`*`):%- [@(0.0.255) void] 
[* CreateTag]([@(0.0.255) const] [@(0.0.255) char] [@(0.0.255) `*][*@3 tag])&]
[s2; Sets this HtmlNode to represent html tag with id [%-*@3 tag].&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:CreateEmtpyTag`(const char`*`):%- [@(0.0.255) void] 
[* CreateEmtpyTag]([@(0.0.255) const] [@(0.0.255) char] [@(0.0.255) `*][*@3 tag])&]
[s2; Sets this HtmlNode to represent html empty tag with id [%-*@3 tag].&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:CreateText`(const Upp`:`:String`&`):%- [@(0.0.255) void] 
[* CreateText]([@(0.0.255) const] String[@(0.0.255) `&] [*@3 txt])&]
[s2; Sets this HtmlNode to represent text with content [%-*@3 txt].&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:CreatePI`(const Upp`:`:String`&`):%- [@(0.0.255) void] 
[* CreatePI]([@(0.0.255) const] String[@(0.0.255) `&] [*@3 pi])&]
[s2; Sets this HtmlNode to represent processing info [%-*@3 pi].&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:CreateDecl`(const Upp`:`:String`&`):%- [@(0.0.255) void] 
[* CreateDecl]([@(0.0.255) const] String[@(0.0.255) `&] [*@3 decl])&]
[s2; Sets this HtmlNode to represent html declaration [%-*@3 decl].&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:CreateComment`(const Upp`:`:String`&`):%- [@(0.0.255) void] 
[* CreateComment]([@(0.0.255) const] String[@(0.0.255) `&] [*@3 comment])&]
[s2; Sets this HtmlNode to represent html [%-*@3 comment].&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:CreateCDATA`(const Upp`:`:String`&`):%- [@(0.0.255) void] 
[* CreateCDATA]([@(0.0.255) const] String[@(0.0.255) `&] [*@3 cdata])&]
[s2; Sets this HtmlNode to represent [%-*@3 cdata] .&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:CreateASP`(const Upp`:`:String`&`):%- [@(0.0.255) void] 
[* CreateASP]([@(0.0.255) const] String[@(0.0.255) `&] [*@3 asp])&]
[s2; Sets this HtmlNode to represent [%-*@3 asp] source.&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:CreateJSTE`(const Upp`:`:String`&`):%- [@(0.0.255) void] 
[* CreateJSTE]([@(0.0.255) const] String[@(0.0.255) `&] [*@3 jste])&]
[s2; Sets this HtmlNode to represent  [%-*@3 jste] .&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:CreatePHP`(const Upp`:`:String`&`):%- [@(0.0.255) void] 
[* CreatePHP]([@(0.0.255) const] String[@(0.0.255) `&] [*@3 php])&]
[s2; Sets this HtmlNode to represent  [%-*@3 php] .&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:CreateXMLDecl`(const Upp`:`:String`&`):%- [@(0.0.255) void] 
[* CreateXMLDecl]([@(0.0.255) const] String[@(0.0.255) `&] [*@3 xmldeclaration])&]
[s2; Sets this HtmlNode to represent [%-*@3 xmldeclaration] .&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:CreateXMLSect`(const Upp`:`:String`&`):%- [@(0.0.255) void] 
[* CreateXMLSect]([@(0.0.255) const] String[@(0.0.255) `&] [*@3 xmlsection])&]
[s2; Sets this HtmlNode to represent [%-*@3 xmlsection] .&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:CreateDocType`(const Upp`:`:String`&`):%- [@(0.0.255) void] 
[* CreateDocType]([@(0.0.255) const] String[@(0.0.255) `&] [*@3 doctype])&]
[s2; Sets this HtmlNode to represent html [%-*@3 doctype] .&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:CreateRoot`(`):%- [@(0.0.255) void] [* CreateRoot]()&]
[s2;  Creates a root node. Same as Clear()&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:IsEmpty`(`)const:%- [@(0.0.255) bool] [* IsEmpty]() 
[@(0.0.255) const]&]
[s2; Returns true if this HtmlNode represents [*C@3 Type`::Root] and 
contains no content.&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:operator bool`(`)const:%- operator [@(0.0.255) bool]() 
[@(0.0.255) const]&]
[s2; Same as !IsEmpty().&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:GetCount`(`)const:%- [@(0.0.255) int] [* GetCount]() 
[@(0.0.255) const]&]
[s2; Returns a number of contained HtmlNode sub`-nodes.&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:At`(int`):%- HtmlNode[@(0.0.255) `&] [* At]([@(0.0.255) int] 
[*@3 i])&]
[s2; Returns sub`-node at index [%-*@3 i]. If there is no such node 
(number of sub`-nodes is less than i `+ 1), number of nodes is 
extended to i `+ 1 with empty nodes.&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:Node`(int`)const:%- [@(0.0.255) const] HtmlNode[@(0.0.255) `&] 
[* Node]([@(0.0.255) int] [*@3 i]) [@(0.0.255) const]&]
[s2; Returns node at index [%-*@3 i]. If there is none, behavior is 
undefined. This function is possibly slightly faster than either 
At or operator`[`].&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:operator`[`]`(int`)const:%- [@(0.0.255) const] 
HtmlNode[@(0.0.255) `&] operator[@(0.0.255) `[`]]([@(0.0.255) int] 
i) [@(0.0.255) const]&]
[s2; Returns node at index [%-*@3 i].&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:operator`[`]`(const char`*`)const:%- [@(0.0.255) const] 
HtmlNode[@(0.0.255) `&] operator[@(0.0.255) `[`]]([@(0.0.255) const] 
[@(0.0.255) char] [@(0.0.255) `*][@3 tag]) [@(0.0.255) const]&]
[s2; Finds a [*C@3 Type`::Tag ]subnode with id [%-*@3 tag] and returns 
it. If no such node is found, returns Void().&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:Add`(`):%- HtmlNode[@(0.0.255) `&] [* Add]()&]
[s2;  Adds a new subnode.&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:Remove`(int`):%- [@(0.0.255) void] [* Remove]([@(0.0.255) int] 
[*@3 i])&]
[s2; Removes subnode at [%-*@3 i].&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:AddText`(const Upp`:`:String`&`):%- [@(0.0.255) void] 
[* AddText]([@(0.0.255) const] String[@(0.0.255) `&] [*@3 txt])&]
[s2; Adds a new text sub`-node ([*C@3 Type`::Text]) and assigns it a 
text [%-*@3 txt].&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:FindTag`(const char`*`)const:%- [@(0.0.255) int] 
[* FindTag]([@(0.0.255) const] [@(0.0.255) char] [@(0.0.255) `*][*@3 tag]) 
[@(0.0.255) const]&]
[s2; Finds a [*C@3 Type`::Tag ]sub`-node with id [%-*@3 tag] and returns 
its index. If no such sub`-node exists, returns negative number.&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:Add`(const char`*`):%- HtmlNode[@(0.0.255) `&] 
[* Add]([@(0.0.255) const] [@(0.0.255) char] [@(0.0.255) `*][*@3 tag])&]
[s2; Adds a new [*C@3 Type`::Tag] node with id [%-*@3 tag] and returns 
a reference to it.&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:GetAdd`(const char`*`):%- HtmlNode[@(0.0.255) `&] 
[* GetAdd]([@(0.0.255) const] [@(0.0.255) char] [@(0.0.255) `*][*@3 tag])&]
[s5;:Upp`:`:HtmlNode`:`:operator`(`)`(const char`*`):%- HtmlNode[@(0.0.255) `&] 
operator()([@(0.0.255) const] [@(0.0.255) char] [@(0.0.255) `*]tag)&]
[s2; Returns a reference to [*C@3 Type`::Tag] subnode with id [%-*@3 tag]. 
If no such node exists, adds it.&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:Remove`(const char`*`):%- [@(0.0.255) void] 
[* Remove]([@(0.0.255) const] [@(0.0.255) char] [@(0.0.255) `*][*@3 tag])&]
[s2; Removes [*C@3 Type`::Tag] subnode with [%-*@3 tag ]id. If there is 
no such sub`-node, nothing happens.&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:GatherText`(`)const:%- String [* GatherText]() 
[@(0.0.255) const]&]
[s5;:Upp`:`:HtmlNode`:`:operator`~`(`)const:%- String operator[@(0.0.255) `~]() 
[@(0.0.255) const]&]
[s2; Concatenates all [*C@3 Type`::Text] subnodes in order of increasing 
indicies.&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:HasTags`(`)const:%- [@(0.0.255) bool] [* HasTags]() 
[@(0.0.255) const]&]
[s2; Returns true if the node has subtags.&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:GetAttrCount`(`)const:%- [@(0.0.255) int] [* GetAttrCount]() 
[@(0.0.255) const]&]
[s2; Returns the number of attributes of current node.&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:AttrId`(int`)const:%- String [* AttrId]([@(0.0.255) int] 
[*@3 i]) [@(0.0.255) const]&]
[s2; Returns id of attribute [%-*@3 i].&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:Attr`(int`)const:%- String [* Attr]([@(0.0.255) int] 
[*@3 i]) [@(0.0.255) const]&]
[s2; Returns the value of attribute [%-*@3 i].&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:Attr`(const char`*`)const:%- String [* Attr]([@(0.0.255) const] 
[@(0.0.255) char] [@(0.0.255) `*][*@3 id]) [@(0.0.255) const]&]
[s2; Returns the value of attribute [%-*@3 id]. If no such attribute 
exists, returns empty String.&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:SetAttr`(const char`*`,const Upp`:`:String`&`):%- HtmlNode[@(0.0.255) `&
] [* SetAttr]([@(0.0.255) const] [@(0.0.255) char] [@(0.0.255) `*][*@3 id], 
[@(0.0.255) const] String[@(0.0.255) `&] [*@3 val])&]
[s2; Sets the attribute [%-*@3 id] to have value [%-*@3 val]. Attribute 
does not have exist yet.&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:AttrInt`(const char`*`,int`)const:%- [@(0.0.255) int] 
[* AttrInt]([@(0.0.255) const] [@(0.0.255) char] [@(0.0.255) `*][*@3 id], 
[@(0.0.255) int] def [@(0.0.255) `=] [*@3 Null]) [@(0.0.255) const]&]
[s2; Returns the value of attribute [%-*@3 id] converted to integer. 
If no such attribute exists, returns [%-*@3 def].&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:SetAttr`(const char`*`,int`):%- HtmlNode[@(0.0.255) `&] 
[* SetAttr]([@(0.0.255) const] [@(0.0.255) char] [@(0.0.255) `*][*@3 id], 
[@(0.0.255) int] [*@3 val])&]
[s2; Sets the attribute [%-*@3 id] to have integer value [%-*@3 val].&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:HasAttrs`(`)const:%- [@(0.0.255) bool] [* HasAttrs]() 
[@(0.0.255) const]&]
[s2; Returns true if the node has attributes.&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:SetAttrs`(VectorMap`&`&`):%- [@(0.0.255) void] 
[* SetAttrs](VectorMap<String, String>[@(0.0.255) `&`&] [*@3 a])&]
[s2; Replaces all attributes with picked [%-*@3 a].&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:HtmlNode`:`:Shrink`(`):%- [@(0.0.255) void] [* Shrink]()&]
[s2; Attempts to minimize memory footprint.&]
[s3;%- &]
[ {{10000F(128)G(128)@1 [s0; [* Function List]]}}&]
[s4;%- &]
[s5;:Upp`:`:ParseHtml`(const Upp`:`:String`&`,const VectorMap`&`):%- HtmlNode 
[* ParseHtml]([@(0.0.255) const] String[@(0.0.255) `&] [*@3 html], [@(0.0.255) const] 
VectorMap<String, Value>[@(0.0.255) `&] [*@3 options])&]
[s2; Parses an [%-*@3 html] document into an HtmlNode tree. Parser`'s 
behavior can be set using the [%-*@3 options]. Options are key`-value 
pairs, representing libtidy options and  their possible values. 
See the [^https`:`/`/api`.html`-tidy`.org`/tidy`/tidylib`_api`_5`.6`.0`/tidy`_quickref`.html^ q
uick reference] page for possible libtidy option strings. Values 
can be int, bool, or String.&]
[s3;%- &]
[s4;%- &]
[s5;:Upp`:`:RepairHtml`(const Upp`:`:String`&`,const VectorMap`&`):%- String 
[* RepairHtml]([@(0.0.255) const] String[@(0.0.255) `&] [*@3 html], [@(0.0.255) const] 
VectorMap<String, Value>[@(0.0.255) `&] [*@3 options])&]
[s2; Attemps to repair the [%-*@3 html] document. If the source document 
contains any defects or problems, this function returns the repaired 
document or String`::GetVoid() if the source has no errors or 
warning. This function can both repair and prettify the html 
documents, depending on the [%-*@3 options]. Options are key`-value 
pairs, representing libtidy options and  their possible values. 
See the [^https`:`/`/api`.html`-tidy`.org`/tidy`/tidylib`_api`_5`.6`.0`/tidy`_quickref`.html^ q
uick reference] page for possible libtidy option strings. Values 
can be int, bool, or String.&]
[s3;%- &]
[s3;%- ]]