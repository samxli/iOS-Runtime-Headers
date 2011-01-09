/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */



@interface DOMNode : DOMObject <DOMEventTarget, UIKeyboardInput, UIWebSelectionBlock>
{
}

@property(copy,readonly) NSString *nodeName;
@property(copy) NSString *nodeValue;
@property(readonly) unsigned short nodeType;
@property(retain,readonly) DOMNode *parentNode;
@property(retain,readonly) DOMNodeList *childNodes;
@property(retain,readonly) DOMNode *firstChild;
@property(retain,readonly) DOMNode *lastChild;
@property(retain,readonly) DOMNode *previousSibling;
@property(retain,readonly) DOMNode *nextSibling;
@property(retain,readonly) DOMNamedNodeMap *attributes;
@property(retain,readonly) DOMDocument *ownerDocument;
@property(copy,readonly) NSString *namespaceURI;
@property(copy) NSString *prefix;
@property(copy,readonly) NSString *localName;
@property(copy) NSString *textContent;

+ (id)approvedFocusNode;

- (void)dealloc;
- (void)finalize;
- (id)nodeName;
- (id)nodeValue;
- (void)setNodeValue:(id)arg1;
- (unsigned short)nodeType;
- (id)parentNode;
- (id)childNodes;
- (id)firstChild;
- (id)lastChild;
- (id)previousSibling;
- (id)nextSibling;
- (id)attributes;
- (id)ownerDocument;
- (id)namespaceURI;
- (id)prefix;
- (void)setPrefix:(id)arg1;
- (id)localName;
- (id)baseURI;
- (id)textContent;
- (void)setTextContent:(id)arg1;
- (id)parentElement;
- (BOOL)isContentEditable;
- (id)insertBefore:(id)arg1 refChild:(id)arg2;
- (id)insertBefore:(id)arg1 :(id)arg2;
- (id)replaceChild:(id)arg1 oldChild:(id)arg2;
- (id)replaceChild:(id)arg1 :(id)arg2;
- (id)removeChild:(id)arg1;
- (id)appendChild:(id)arg1;
- (BOOL)hasChildNodes;
- (id)cloneNode:(BOOL)arg1;
- (void)normalize;
- (BOOL)isSupported:(id)arg1 version:(id)arg2;
- (BOOL)isSupported:(id)arg1 :(id)arg2;
- (BOOL)hasAttributes;
- (BOOL)isSameNode:(id)arg1;
- (BOOL)isEqualNode:(id)arg1;
- (id)lookupPrefix:(id)arg1;
- (BOOL)isDefaultNamespace:(id)arg1;
- (id)lookupNamespaceURI:(id)arg1;
- (unsigned short)compareDocumentPosition:(id)arg1;
- (void)addEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3;
- (void)addEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3;
- (void)removeEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3;
- (void)removeEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3;
- (BOOL)dispatchEvent:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingBox;
- (id)lineBoxRects;
- (struct _WKQuad { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })absoluteQuad;
- (id)lineBoxQuads;
- (struct Element { int (**x1)(); NSInteger x2; struct Node {} *x3; struct DocPtr<WebCore::Document> { struct Document {} *x_4_1_1; } x4; struct Node {} *x5; struct Node {} *x6; struct RenderObject {} *x7; unsigned int x8 : 2; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; int (**x29)(); struct Node {} *x30; struct Node {} *x31; struct QualifiedName { struct QualifiedNameImpl {} *x_32_1_1; } x32; struct RefPtr<WebCore::NamedAttrMap> { struct NamedAttrMap {} *x_33_1_1; } x33; }*)_linkElement;
- (id)hrefURL;
- (id)hrefTarget;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hrefFrame;
- (id)hrefLabel;
- (id)hrefTitle;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })innerFrame;
- (struct _WKQuad { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })innerFrameQuad;
- (float)computedFontSize;
- (id)nextFocusNode;
- (id)previousFocusNode;
- (id)description;
- (struct RootObject { }*)_rootObject;
- (id)boundingBoxes;
- (id)absoluteQuads;
- (id)borderRadii;
- (BOOL)containsOnlyInlineObjects;
- (BOOL)isSelectableBlock;
- (id)rangeOfContainingParagraph;
- (float)textHeight;
- (id)findExplodedTextNodeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_subresourceURLs;
- (id)webArchive;
- (id)markupString;
- (id)createPeripheral;
- (id)createSelectedItem;
- (id)createPickerCell;
- (id)tagName;
- (id)urlScheme;
- (void)takeTraitsFrom:(id)arg1;
- (BOOL)hasContent;
- (void)setupPlaceholderTextIfNeeded;
- (id)textInputTraits;
- (void)setSecure:(BOOL)arg1;
- (id)delegate;
- (BOOL)isProxyFor:(id)arg1;
- (BOOL)requiresKeyEvents;
- (void)handleKeyEvent:(struct __GSEvent { }*)arg1;
- (struct __CFCharacterSet { }*)textTrimmingSet;
- (void)setTextTrimmingSet:(struct __CFCharacterSet { }*)arg1;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (unsigned short)characterInRelationToCaretSelection:(NSInteger)arg1;
- (unsigned short)characterBeforeCaretSelection;
- (void)setMarkedText:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)confirmMarkedText:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForNSRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)rectsForNSRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)markedText;
- (void)replaceRangeWithText:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 replacementText:(id)arg2;
- (void)replaceCurrentWordWithText:(id)arg1;
- (void)replaceRangeWithTextWithoutClosingTyping:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 replacementText:(id)arg2;
- (unsigned short)characterAfterCaretSelection;
- (id)fontForCaretSelection;
- (id)textColorForCaretSelection;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectContainingCaretSelection;
- (id)wordRangeContainingCaretSelection;
- (BOOL)shouldEnableAutoShift;
- (id)wordContainingCaretSelection;
- (id)wordInRange:(id)arg1;
- (void)expandSelectionToStartOfWordContainingCaretSelection;
- (NSInteger)wordOffsetInRange:(id)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })markedTextRange;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })selectionRange;
- (id)selectedDOMRange;
- (void)setSelectedDOMRange:(id)arg1 affinityDownstream:(BOOL)arg2;
- (id)rangeByMovingCurrentSelection:(NSInteger)arg1;
- (id)rangeByExtendingCurrentSelection:(NSInteger)arg1;
- (void)extendCurrentSelection:(NSInteger)arg1;
- (BOOL)hasSelection;
- (BOOL)selectionAtDocumentStart;
- (BOOL)selectionAtSentenceStart;
- (BOOL)selectionAtWordStart;
- (void)moveBackward:(NSUInteger)arg1;
- (void)moveForward:(NSUInteger)arg1;
- (void)selectAll;
- (NSInteger)selectionState;
- (void)setText:(id)arg1;
- (id)text;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertCaretRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)keyboardInputView;
- (BOOL)isShowingPlaceholder;
- (id)textSuggestionDelegate;
- (void)setTextSuggestionDelegate:(id)arg1;
- (BOOL)contentsIsSingleValue;
- (void)setContentsIsSingleValue:(BOOL)arg1;
- (NSInteger)textLoupeVisibility;
- (void)setTextLoupeVisibility:(NSInteger)arg1;
- (NSInteger)returnKeyType;
- (void)setReturnKeyType:(NSInteger)arg1;
- (NSInteger)initialSelectionBehavior;
- (void)setInitialSelectionBehavior:(NSInteger)arg1;
- (id)editingDelegate;
- (void)setEditingDelegate:(id)arg1;
- (id)automaticallySelectedOverlay;
- (void)updateAutoscroll:(id)arg1;
- (struct CGPoint { float x1; float x2; })constrainedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)acceptedAutoFillWord:(id)arg1;
- (BOOL)isAutoFillMode;
- (void)beginSelectionChange;
- (void)endSelectionChange;
- (void)updateSelection;
- (id)selectionView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionClipRect;
- (id)content;
- (id)interactionAssistant;
- (BOOL)isEditable;
- (BOOL)isEditing;
- (BOOL)becomesEditableWithGestures;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (void)detachInteractionAssistant;
- (void)detachSelectionView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toView:(id)arg2;
- (BOOL)isTextControl;
- (BOOL)isSecure;
- (NSInteger)keyboardType;
- (void)setApprovedFocus:(BOOL)arg1;
- (BOOL)hasApprovedFocus;
- (BOOL)showsTapHighlight;
- (id)tapHighlightColor;
- (BOOL)touchCalloutEnabled;
- (id)absoluteQuadsAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)isLikelyToBeginPageLoad;
- (BOOL)nodeCanBecomeFirstResponder;
- (BOOL)containsNode:(id)arg1;
- (BOOL)strictlyContainsNode:(id)arg1;
- (id)asElement;
- (id)enclosingElementIncludingSelf;
- (id)webFrame;
- (id)parentBlock;
- (BOOL)selectable;
- (BOOL)hasCustomLineHeight;
- (BOOL)isSameBlock:(id)arg1;
- (BOOL)containsBlock:(id)arg1;
- (BOOL)strictlyContainsBlock:(id)arg1;
- (id)largerParent;
- (BOOL)rendersAsBlock;
- (id)asDomNode;
- (id)asDomRange;
- (BOOL)containsRange:(id)arg1;
- (id)rangeOfContents;
- (BOOL)canShrinkDirectlyToTextOnly;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRect;
- (id)enclosingDocument;
- (id)firstDescendantOfAboutTheSameWidthOrHeightAsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withDescentDirection:(NSInteger)arg2;
- (id)firstDescendantOfAboutTheSameWidthOrHeight;
- (id)lastDescendantOfAboutTheSameWidthOrHeight;
- (BOOL)containsRichText;
- (NSInteger)quoteLevelDelta;
- (BOOL)isQuoteOrWithinQuote;
- (id)commonAncestorWithNode:(id)arg1;
- (void)recursivelyRemoveMailAttributes;
- (void)_fixParagraphsAndQuotesFromMicrosoftNodesToRemove:(id)arg1;
- (void)fixParagraphsAndQuotesFromMicrosoft;
- (BOOL)dd_isLinkNode;
- (BOOL)dd_searchForLinkEndNode:(id)arg1;

@end
