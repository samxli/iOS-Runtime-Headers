/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMHTMLElement, UIDelayedAction, UIWebDocumentView, UIFont, UITextSelectionView, WebFrame, UITouch, UIColor, UITextInteractionAssistant;



@interface UITextView : UIScrollView <UITextInputTraits>
{
    WebFrame *m_frame;
    DOMHTMLElement *m_body;
    NSInteger m_marginTop;
    UIDelayedAction *m_selectionTimer;
    UIDelayedAction *m_longPressAction;
    struct CGPoint { 
        float x; 
        float y; 
    } m_touchPoint;
    struct CGPoint { 
        float x; 
        float y; 
    } m_touchOffset;
    UITouch *m_syntheticTouch;
    BOOL m_editable;
    BOOL m_editing;
    BOOL m_becomesEditableWithGestures;
    BOOL m_selecting;
    BOOL m_handlingMouse;
    BOOL m_sentMouseDown;
    BOOL m_passMouseDownToOther;
    BOOL m_scrollOnMouseUp;
    BOOL m_reentrancyGuard;
    UITextInteractionAssistant *m_interactionAssistant;
    UITextSelectionView *m_selectionView;
    UIWebDocumentView *m_webView;
    UIFont *m_font;
    UIColor *m_textColor;
    NSInteger m_textAlignment;
}

@property(copy) NSString *text;
@property(retain) UIFont *font;
@property(retain) UIColor *textColor;
@property NSInteger textAlignment;
@property _NSRange selectedRange;
@property(getter=isEditable) BOOL editable;
@property NSUInteger dataDetectorTypes;
@property <UITextViewDelegate> *delegate;
@property(getter=isEditing) BOOL editing;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property BOOL enablesReturnKeyAutomatically;
@property NSInteger returnKeyType;
@property NSInteger keyboardAppearance;
@property NSInteger keyboardType;
@property NSInteger autocorrectionType;
@property NSInteger autocapitalizationType;


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 webView:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 font:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)commonInitWithWebDocumentView:(id)arg1 isDecoding:(BOOL)arg2;
- (void)dealloc;
- (void)removeFromSuperview;
- (void)detachSelectionView;
- (void)detachInteractionAssistant;
- (void)registerForEditingDelegateNotification:(id)arg1 selector:(SEL)arg2;
- (void)delayedUpdateForKeyboardDidShow;
- (void)keyboardDidShow:(id)arg1;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (struct CGSize { float x1; float x2; })tileSizeForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)styleString;
- (void)recalculateStyle;
- (void)didMoveToSuperview;
- (void)updateWebViewObjects;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)isFirstResponder;
- (void)ensureSelection;
- (struct CGPoint { float x1; float x2; })constrainedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)textLoupeTimerAction;
- (struct CGImage { }*)createSnapshotWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_syntheticTouch;
- (void)callSuperTouchBegan:(struct { BOOL x1; union { struct { id x_1_2_1; id x_1_2_2; } x_2_1_1; struct __GSEvent {} *x_2_1_2; } x2; }*)arg1;
- (void)callSuperTouchMoved:(struct { BOOL x1; union { struct { id x_1_2_1; id x_1_2_2; } x_2_1_1; struct __GSEvent {} *x_2_1_2; } x2; }*)arg1;
- (void)callSuperTouchEnded:(struct { BOOL x1; union { struct { id x_1_2_1; id x_1_2_2; } x_2_1_1; struct __GSEvent {} *x_2_1_2; } x2; }*)arg1;
- (void)touchBegan:(struct { BOOL x1; union { struct { id x_1_2_1; id x_1_2_2; } x_2_1_1; struct __GSEvent {} *x_2_1_2; } x2; }*)arg1 atLocation:(struct CGPoint { float x1; float x2; })arg2;
- (void)touchMoved:(struct { BOOL x1; union { struct { id x_1_2_1; id x_1_2_2; } x_2_1_1; struct __GSEvent {} *x_2_1_2; } x2; }*)arg1 atLocation:(struct CGPoint { float x1; float x2; })arg2;
- (void)touchEnded:(struct { BOOL x1; union { struct { id x_1_2_1; id x_1_2_2; } x_2_1_1; struct __GSEvent {} *x_2_1_2; } x2; }*)arg1 atLocation:(struct CGPoint { float x1; float x2; })arg2 loupeActive:(BOOL)arg3 loupeTerminalPoint:(struct CGPoint { float x1; float x2; })arg4;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (id)content;
- (void)beginSelectionChange;
- (void)endSelectionChange;
- (void)selectionChanged;
- (void)updateSelection;
- (id)selectionView;
- (id)interactionAssistant;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionClipRect;
- (id)selectedText;
- (void)insertText:(id)arg1;
- (void)selectAll;
- (void)_setRtoLTextDirection:(id)arg1;
- (void)_setLtoRTextDirection:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)undoManagerForWebView:(id)arg1;
- (id)undoManager;
- (id)supportedPasteboardTypesForCurrentSelection;
- (id)documentFragmentForPasteboardItemAtIndex:(NSInteger)arg1;
- (void)scrollRectToVisibleInContainingScrollView;
- (void)webViewDidChange:(id)arg1;
- (void)performBecomeEditableTasks;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setSelectionToStart;
- (void)setSelectionToEnd;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSelection:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (void)setContentToHTMLString:(id)arg1;
- (id)contentAsHTMLString;
- (id)textInputTraits;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (BOOL)hasText;
- (id)text;
- (void)setText:(id)arg1;
- (NSInteger)textAlignment;
- (void)setTextAlignment:(NSInteger)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })selectedRange;
- (void)setSelectedRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (BOOL)isEditable;
- (void)setEditable:(BOOL)arg1;
- (BOOL)isEditing;
- (void)setEditing:(BOOL)arg1;
- (BOOL)becomesEditableWithGestures;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (NSInteger)marginTop;
- (void)setMarginTop:(NSInteger)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleTextRect;
- (id)webView;
- (void)scrollRangeToVisible:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (BOOL)shouldStartDataDetectors;
- (void)cancelDataDetectorsWithWebLock;
- (void)startDataDetectorsWithWebLock;
- (void)resetDataDetectorsResultsWithWebLock;
- (NSUInteger)dataDetectorTypes;
- (void)setDataDetectorTypes:(NSUInteger)arg1;
- (BOOL)mightHaveLinks;
- (void)tapLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)cancelInteractionWithLink;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)isInteractingWithLink;
- (BOOL)willInteractWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 replacementText:(id)arg3;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (BOOL)keyboardInputChanged:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (NSInteger)keyboardInput:(id)arg1 positionForAutocorrection:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)setBottomBufferHeight:(float)arg1;
- (float)bottomBufferHeight;
- (void)setShowScrollerIndicators:(BOOL)arg1;
- (BOOL)showScrollerIndicators;
- (void)displayScrollerIndicators;
- (void)setOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })offset;
- (void)setAllowsRubberBanding:(BOOL)arg1;
- (void)setScrollingEnabled:(BOOL)arg1;
- (BOOL)scrollingEnabled;
- (void)setAllowsFourWayRubberBanding:(BOOL)arg1;
- (void)setScrollerIndicatorSubrect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)scrollToMakeCaretVisible:(BOOL)arg1;
- (id)_automationValue;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;

@end
