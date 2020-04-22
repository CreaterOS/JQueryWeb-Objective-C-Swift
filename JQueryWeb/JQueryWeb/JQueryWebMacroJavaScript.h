//
//  JQueryWebMacroJavaScript.h
//  JQueryWeb
//
//  Created by Bryant Reyn on 2020/4/15.
//  Copyright © 2020 Bryant Reyn. All rights reserved.
//

#ifndef JQueryWebMacroJavaScript_h
#define JQueryWebMacroJavaScript_h

/* 防止Block循环引用 */
#define JQUERY_BLOCK_WEAK __weak typeof(self) weakself = self;
#define JQUERY_BLOCK_STRONG __strong typeof(weakself) self = weakself;

/* JavaScript标签文本内容 */
#define JQUERY_JS_TAG_TEXT_VAL(TAGNAME,COUNT,CONTEXT) [NSString stringWithFormat:@"document.getElementsByTagName('%@')[%@].innerText = '%@';",TAGNAME,COUNT,CONTEXT];
/* JavaScript标签文本HTML格式 */
#define JQUERY_JS_TAG_HTML(TAGNAME,COUNT,CONTEXT) [NSString stringWithFormat:@"document.getElementsByTagName('%@')[%@].innerHTML = '%@';",TAGNAME,COUNT,CONTEXT];
/* JavaScript标签ON操作 */
#define JQUERY_JS_TAG_ON(TAGNAME,COUNT,OPTION,FUNCTION) [NSString stringWithFormat:@"document.getElementsByTagName('%@')[%@].on%@ = %@;",TAGNAME,COUNT,OPTION,FUNCTION];
/* JavaScript标签CSS操作 */
#define JQUERY_JS_TAG_CSS(TAGNAME,COUNT,KEY,VALUE) [NSString stringWithFormat:@"document.getElementsByTagName('%@')[%@].style.%@ = '%@';",TAGNAME,COUNT,KEY,VALUE];
/* JavaScript标签SHOW操作 */
#define JQUERY_JS_TAG_SHOW(TAGNAME,COUNT) [NSString stringWithFormat:@"document.getElementsByTagName('%@')[%@].show = true;",TAGNAME,COUNT];
#define JQUERY_JS_TAG_SHOWF(TAGNAME,COUNT,ANIMATION,FUNCTION) [NSString stringWithFormat:@"document.getElementsByTagName('%@')[%@].show('%@') = %@;",TAGNAME,COUNT,ANIMATION,FUNCTION];
#define JQUERY_JS_TAG_SHOWA(TAGNAME,COUNT,CONTEXT) [NSString stringWithFormat:@"document.getElementsByTagName('%@')[%@].show('%@');",TAGNAME,COUNT,CONTEXT];
/* JavaScript标签Hidden操作 */
#define JQUERY_JS_TAG_HIDDEN(TAGNAME,COUNT) [NSString stringWithFormat:@"document.getElementsByTagName('%@')[%@].hidden = true;",TAGNAME,COUNT];
/* JavaScript标签Height操作 */
#define JQUERY_JS_TAG_HEIGHT(TAGNAME,COUNT,HEIGHT) [NSString stringWithFormat:@"document.getElementsByTagName('%@')[%@].style.height = '%zdpx';",TAGNAME,COUNT,HEIGHT];
/* JavaScript标签Width操作 */
#define JQUERY_JS_TAG_WIDTH(TAGNAME,COUNT,WIDTH) [NSString stringWithFormat:@"document.getElementsByTagName('%@')[%@].style.width = '%zdpx';",TAGNAME,COUNT,WIDTH];
/* JavaScript标签AddClass操作 */
#define JQUERY_JS_TAG_ADDCLASS(TAGNAME,COUNT,CLASSNAME) [NSString stringWithFormat:@"document.getElementsByTagName('%@')[%@].classList.add('%@');",TAGNAME,COUNT,CLASSNAME];
/* JavaScript标签RemoveClass操作 */
#define JQUERY_JS_TAG_REMOVECLASS(TAGNAME,COUNT,CLASSNAME) [NSString stringWithFormat:@"document.getElementsByTagName('%@')[%@].classList.remove('%@');",TAGNAME,COUNT,CLASSNAME];
/* JavaScript标签Attr操作 */
#define JQUERY_JS_TAG_ATTRVALUE_FUNCTION(TAGNAME,COUNT,ATTRNAME,VALUE) [NSString stringWithFormat:@"document.getElementsByTagName('%@')[%@].setAttribute('%@','%@');",TAGNAME,COUNT,ATTRNAME,VALUE];


#endif /* JQueryWebMacroJavaScript_h */
