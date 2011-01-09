/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class WebView, DOMHTMLElement, UIInformalDelegate, UITextInteractionAssistant, WebThreadSafeUndoManager, UIWebFormDelegate, NSMutableArray, UIView, WebViewReachabilityObserver, UIAutoscroll, <UIFormAssistantDelegate>, UIActionSheet, UITextInputTraits, UIWebSelectionAssistant, UITextSelectionView, WebPDFView, DOMNode, CALayer, NSTimer;



@interface UIWebDocumentView : UIWebTiledView <UIKeyboardInput, UIModalViewDelegate, BrowserDocumentController, UIActionSheetDelegate, UITextSelectingContent, UIAutoscrollContainer>
{
    NSInteger _retainCount;

  /* Error parsing encoded ivar type info: ^{WKWindow={_WKObject="referenceCount"I"classInfo"^{_WKClassInfo}}@"WAKWindow"{CGRect="origin"{CGPoint="x"f"y"f}"size"{CGSize="width"f"height"f}}^{WKView}^{WKView}^{TiledSurface}b1b1} */
    struct WKWindow { struct _WKObject { 
            NSUInteger referenceCount; 
            struct _WKClassInfo {} *classInfo; 
        } x1; id x2; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x3; void*x4; void*x5; void*x6; void*x7; NSInteger x8; in double x9; out void*x10; void*x11; struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } x12; struct WKView {} *x13; struct WKView {} *x14; struct TiledSurface {} *x15; unsigned int x16 : 1; unsigned int x17 : 1; } *_wkWindow;

    WebView *_webView;
    WebViewReachabilityObserver *_reachabilityObserver;
    id m_parentTextView;
    id _delegate;
    id _textSuggestionDelegate;
    id _editingDelegate;
    float _doubleTapDelay;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _doubleTapRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _mainDocumentDoubleTapRect;
    struct CGPoint { 
        float x; 
        float y; 
    } _scrollPoint;
    struct CGPoint { 
        float x; 
        float y; 
    } _doubleTapStartPosition;
    double _doubleTapStartTime;
    struct CGSize { 
        float width; 
        float height; 
    } _pendingSize;
    NSInteger _orientation;
    DOMHTMLElement *_standaloneEditingElement;
    struct CGPoint { 
        float x; 
        float y; 
    } _mouseDownPoint;
    double _mouseDownTime;
    UIAutoscroll *_autoscroll;
    struct __CFDictionary { } *_plugInViews;
    NSInteger m_selectionGranularity;
    BOOL m_selectionGranularityIncreasing;
    CALayer *_contentLayersHostingLayer;
    UITextInputTraits *_traits;
    struct { 
        NSMutableArray *all; 
        NSMutableArray *html; 
        NSMutableArray *javascript; 
        NSMutableArray *css; 
        NSMutableArray *error; 
        NSMutableArray *warning; 
        NSMutableArray *tip; 
        NSMutableArray *log; 
    } _messages;
    struct { 
        unsigned int isEdited : 1; 
        unsigned int allowsUnapprovedFocus : 1; 
        unsigned int isAutoFilling : 1; 
        <UIFormAssistantDelegate> *delegate; 
        UIWebFormDelegate *formDelegate; 
    } _forms;
    struct { 
        NSTimer *timer; 
        struct CGPoint { 
            float x; 
            float y; 
        } location; 
        BOOL isBlocked; 
        BOOL isCancelled; 
        BOOL isOnWebThread; 
        BOOL isDisplayingHighlight; 
        BOOL attemptedClick; 
        BOOL isGestureScrolling; 
        struct CGPoint { 
            float x; 
            float y; 
        } gestureScrollPoint; 
        struct CGPoint { 
            float x; 
            float y; 
        } gestureCurrentPoint; 
        BOOL hasAttemptedGestureScrolling; 
        UIView *candidate; 
        BOOL forwardingGuard; 
        SEL mouseUpForwarder; 
        SEL mouseDraggedForwarder; 
        DOMNode *element; 
        BOOL defersCallbacksState; 
        UIInformalDelegate *delegate; 
        NSInteger interactionSheetType; 
        UIActionSheet *interactionSheet; 
        BOOL allowsImageSheet; 
        BOOL allowsDataDetectorsSheet; 
        struct { 
            BOOL active; 
            BOOL defaultPrevented; 
            NSMutableArray *regions; 
            float originalGestureDistance; 
            float originalGestureAngle; 
        } directEvents; 
    } _interaction;
    struct { 
        WebPDFView *view; 
        NSTimer *timer; 
    } _pdf;
    struct { 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
        float initialScale; 
        float minimumScale; 
        float maximumScale; 
        BOOL allowsUserScaling; 
    } _viewportConfigurations[6];
    struct CGSize { 
        float width; 
        float height; 
    } _minimumSize;
    NSInteger _documentType;
    float _documentScale;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _documentBounds;
    NSInteger _enabledGestures;
    NSUInteger _customConfigurations;
    NSUInteger _mouseDownCount;
    NSUInteger _dataDetectorTypes;
    unsigned int _webCoreNeedsSetNeedsDisplay : 1;
    unsigned int _webCoreNeedsDraw : 1;
    unsigned int _ignoresFocusingMouse : 1;
    unsigned int _ignoresKeyEvents : 1;
    unsigned int _autoresizes : 1;
    unsigned int _scalesToFit : 1;
    unsigned int _hasCustomScale : 1;
    unsigned int _userScrolled : 1;
    unsigned int _pageNeedsReset : 1;
    unsigned int _hasScrollPoint : 1;
    unsigned int _setNeedsDisplayWasForced : 1;
    unsigned int _gesturesDisabled : 1;
    unsigned int _doubleTapRectIsReplaced : 1;
    unsigned int _standaloneEditableView : 1;
    unsigned int _widgetEditingView : 1;
    unsigned int _mouseDragged : 1;
    unsigned int _mouseReentrancyGuard : 1;
    unsigned int _isShowingFullScreenPlugIn : 1;
    unsigned int _isSettingRedrawFrame : 1;
    unsigned int _needsScrollNotifications : 1;
    unsigned int _loadsSynchronously : 1;
    unsigned int _mouseDown : 1;
    unsigned int _usePreTimberlineTransparencyBehavior : 1;
    unsigned int _geolocationDialogAllowed : 1;
    unsigned int _usingMinimalTilesDuringLoading : 1;
    unsigned int _sheetsCount : 2;
    unsigned int _didFirstVisuallyNonEmptyLayout : 1;
    unsigned int _loadInProgress : 1;
    unsigned int _uiwdvIsResigningFirstResponder : 1;
    WebThreadSafeUndoManager *_undoManager;
    UIWebSelectionAssistant *_webSelectionAssistant;
    UITextInteractionAssistant *_textSelectionAssistant;
    UITextSelectionView *_textSelectionView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _caretInsets;
}

@property(getter=isEditing,readonly) BOOL editing;
@property(getter=isEditable,readonly) BOOL editable;
@property(readonly) UIView<UITextSelectingContent> *content;
@property(readonly) UITextInteractionAssistant *interactionAssistant;
@property(readonly) UITextSelectionView *selectionView;
@property BOOL acceptsEmoji;
@property BOOL contentsIsSingleValue;
@property id textSuggestionDelegate;
@property NSInteger textSelectionBehavior;
@property NSInteger textLoupeVisibility;
@property NSUInteger insertionPointWidth;
@property(retain) UIColor *insertionPointColor;
@property __CFCharacterSet *textTrimmingSet;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property BOOL enablesReturnKeyAutomatically;
@property NSInteger returnKeyType;
@property NSInteger keyboardAppearance;
@property NSInteger keyboardType;
@property NSInteger autocorrectionType;
@property NSInteger autocapitalizationType;

+ (Class)layerClass;
+ (id)standardTextViewPreferences;
+ (id)_createDefaultHighlightView;
+ (id)_highlightView;
+ (id)_PDFPageNumberLabel;

- (id)_doubleTapSpeedFromDefaults;
- (void)_restoreViewportSettingsWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)initSimpleHTMLDocumentWithStyle:(id)arg1 editable:(BOOL)arg2 withFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 withPreferences:(id)arg4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)commonInitWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)enableReachability;
- (void)dealloc;
- (id)retain;
- (void)release;
- (NSUInteger)retainCount;
- (void)_reachabilityManagerNotifiedIsReachable:(BOOL)arg1;
- (void)removeFromSuperview;
- (void)stopLoading:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)loadRequest:(id)arg1;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)setLoadsSynchronously:(BOOL)arg1;
- (BOOL)loadsSynchronously;
- (id)webView;
- (void)setUserStyleSheet:(id)arg1;
- (void)setDetectsPhoneNumbers:(BOOL)arg1;
- (BOOL)detectsPhoneNumbers;
- (BOOL)_dataDetectionIsActivated;
- (NSUInteger)effectiveDataDetectorTypes;
- (void)setDataDetectorTypes:(NSUInteger)arg1;
- (NSUInteger)dataDetectorTypes;
- (void)setUsePreTimberlineTransparencyBehavior;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)integralScaleForScale:(float)arg1;
- (void)_setDocumentScale:(float)arg1;
- (float)viewportWidth;
- (float)viewportHeight;
- (float)minimumScaleForMinimumSize:(struct CGSize { float x1; float x2; })arg1;
- (float)initialScale;
- (float)minimumScale;
- (void)viewportConfigurationsDidChange:(NSUInteger)arg1;
- (void)_setDocumentType:(NSInteger)arg1 overrideCustomConfigurations:(BOOL)arg2;
- (void)_setDocumentType:(NSInteger)arg1;
- (void)_updateSize;
- (void)_clearDoubleTapRect;
- (void)webView:(id)arg1 didReceiveViewportArguments:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 needsScrollNotifications:(id)arg2 forFrame:(id)arg3;
- (BOOL)needsScrollNotifications;
- (void)enclosingScrollerDidScroll;
- (void)resetTilingAfterLoadComplete;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webViewDidLayout:(id)arg1;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didReceiveDocTypeForFrame:(id)arg2;
- (void)_WAKViewSizeDidChange:(id)arg1;
- (void)setEnabledGestures:(NSInteger)arg1;
- (NSInteger)enabledGestures;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })documentBounds;
- (void)setAutoresizes:(BOOL)arg1;
- (void)setMinimumSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setViewportSize:(struct CGSize { float x1; float x2; })arg1 forDocumentTypes:(NSInteger)arg2;
- (void)setInitialScale:(float)arg1 forDocumentTypes:(NSInteger)arg2;
- (void)setMinimumScale:(float)arg1 forDocumentTypes:(NSInteger)arg2;
- (void)setMaximumScale:(float)arg1 forDocumentTypes:(NSInteger)arg2;
- (void)setAllowsUserScaling:(BOOL)arg1 forDocumentTypes:(NSInteger)arg2;
- (BOOL)_updatesScroller;
- (void)_setScrollerOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)_restoreScrollPointForce:(BOOL)arg1;
- (void)_resetForNewPage;
- (void)webView:(id)arg1 saveStateToHistoryItem:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 restoreStateFromHistoryItem:(id)arg2 forFrame:(id)arg3 force:(BOOL)arg4;
- (BOOL)webView:(id)arg1 shouldScrollToPoint:(struct CGPoint { float x1; float x2; })arg2 forFrame:(id)arg3;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)forceLayout;
- (void)layoutSubviews;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplay;
- (void)setSmoothsFonts:(BOOL)arg1;
- (void)setDrawsBackground:(BOOL)arg1;
- (void)setOpaque:(BOOL)arg1;
- (struct CGImage { }*)createSnapshotWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)cancelMouseTracking;
- (BOOL)cancelTouchTracking;
- (void)setIgnoresFocusingMouse:(BOOL)arg1;
- (void)setIgnoresKeyEvents:(BOOL)arg1;
- (void)setTilingArea:(NSInteger)arg1;
- (void)_didScroll;
- (void)_sendInternalEvent:(struct __GSEvent { }*)arg1;
- (struct CGPoint { float x1; float x2; })_viewportLocationForEvent:(struct __GSEvent { }*)arg1;
- (BOOL)_isSubviewOfPlugInView:(id)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)setDoubleTapDelay:(float)arg1;
- (float)doubleTapDelay;
- (void)keyUp:(struct __GSEvent { }*)arg1;
- (void)keyDown:(struct __GSEvent { }*)arg1;
- (void)gestureStarted:(struct __GSEvent { }*)arg1;
- (void)gestureChanged:(struct __GSEvent { }*)arg1;
- (void)gestureEnded:(struct __GSEvent { }*)arg1;
- (void)_notifyPlugInViewsOfScaleChange;
- (void)_notifyContentHostingLayersOfScaleChange;
- (void)revealedSelectionByScrollingWebFrame:(id)arg1;
- (void)webView:(id)arg1 attachRootLayer:(id)arg2;
- (void)zoomToScale:(float)arg1;
- (void)_reshapePlugInViews;
- (void)redrawScaledDocument;
- (void)setOrientation:(NSInteger)arg1;
- (void)_zoomToNode:(id)arg1;
- (void)scrollCaretToVisible:(id)arg1;
- (struct CGPoint { float x1; float x2; })_centeredScrollPointForPoint:(struct CGPoint { float x1; float x2; })arg1 scale:(float)arg2;
- (struct CGPoint { float x1; float x2; })_doubleTapScrollPointForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 scale:(float)arg2 event:(struct __GSEvent { }*)arg3;
- (float)_doubleTapScaleForSize:(float)arg1 isWidth:(BOOL)arg2;
- (BOOL)_doubleTapZoomToRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 scale:(float)arg2 fromEvent:(struct __GSEvent { }*)arg3;
- (void)_handleDoubleTapAtPoint:(struct CGPoint { float x1; float x2; })arg1 inWebHTMLView:(id)arg2 outRenderRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;
- (void)_handleDoubleTapAtPoint:(struct CGPoint { float x1; float x2; })arg1 inWebPDFView:(id)arg2 outRenderRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;
- (void)doubleTap:(struct __GSEvent { }*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })doubleTapRect;
- (BOOL)doubleTapRectIsReplaced;
- (void)setIsStandaloneEditableView:(BOOL)arg1;
- (BOOL)isStandaloneEditableView;
- (void)setStandaloneEditingElement:(id)arg1;
- (id)standaloneEditingElement;
- (void)setIsWidgetEditingView:(BOOL)arg1;
- (BOOL)isWidgetEditingView;
- (BOOL)updateKeyboardStateOnResponderChanges;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)deferredBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (id)_responderForBecomeFirstResponder;
- (BOOL)makeWKFirstResponder;
- (void)ensureSelection;
- (void)setInteractionAssistantGestureRecognizers;
- (void)_undoManagerDidUndo:(id)arg1;
- (void)_undoManagerDidRedo:(id)arg1;
- (void)_undoManagerWillUndo:(id)arg1;
- (void)_undoManagerWillRedo:(id)arg1;
- (id)undoManagerForWebView:(id)arg1;
- (id)undoManager;
- (id)_parentTextView;
- (void)_setParentTextView:(id)arg1;
- (BOOL)_editable;
- (void)_setEditable:(BOOL)arg1;
- (id)delegate;
- (void)addInputString:(id)arg1;
- (void)deleteFromInput;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (void)replaceRangeWithTextWithoutClosingTyping:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 replacementText:(id)arg2;
- (void)replaceRangeWithText:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 replacementText:(id)arg2;
- (void)replaceCurrentWordWithText:(id)arg1;
- (void)setMarkedText:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)confirmMarkedText:(id)arg1;
- (id)markedText;
- (unsigned short)characterInRelationToCaretSelection:(NSInteger)arg1;
- (unsigned short)characterBeforeCaretSelection;
- (unsigned short)characterAfterCaretSelection;
- (id)fontForCaretSelection;
- (id)textColorForCaretSelection;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForNSRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)rectsForNSRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectContainingCaretSelection;
- (id)wordRangeContainingCaretSelection;
- (BOOL)shouldEnableAutoShift;
- (id)wordContainingCaretSelection;
- (id)wordInRange:(id)arg1;
- (void)expandSelectionToStartOfWordContainingCaretSelection;
- (NSInteger)wordOffsetInRange:(id)arg1;
- (void)replaceSelectionWithWebArchive:(id)arg1 selectReplacement:(BOOL)arg2 smartReplace:(BOOL)arg3;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })markedTextRange;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })selectionRange;
- (id)selectedDOMRange;
- (void)setSelectedDOMRange:(id)arg1 affinityDownstream:(BOOL)arg2;
- (id)rangeByMovingCurrentSelection:(NSInteger)arg1;
- (id)rangeByExtendingCurrentSelection:(NSInteger)arg1;
- (void)extendCurrentSelection:(NSInteger)arg1;
- (BOOL)hasSelection;
- (BOOL)hasSelectionInPlainTextRegion;
- (BOOL)selectionAtDocumentStart;
- (BOOL)selectionAtSentenceStart;
- (BOOL)selectionAtWordStart;
- (void)moveBackward:(NSUInteger)arg1;
- (void)moveForward:(NSUInteger)arg1;
- (void)selectAll;
- (void)setText:(id)arg1;
- (id)text;
- (BOOL)hasContent;
- (void)setCaretChangeListener:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertCaretRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)keyboardInputView;
- (id)implementationWebView;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 replacementText:(id)arg3;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (BOOL)keyboardInputChanged:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (id)automaticallySelectedOverlay;
- (void)setBottomBufferHeight:(float)arg1;
- (NSInteger)keyboardInput:(id)arg1 positionForAutocorrection:(id)arg2;
- (BOOL)isProxyFor:(id)arg1;
- (BOOL)requiresKeyEvents;
- (void)handleKeyEvent:(struct __GSEvent { }*)arg1;
- (void)setPaused:(BOOL)arg1;
- (id)webView:(id)arg1 plugInViewWithArguments:(id)arg2 fromPlugInPackage:(id)arg3;
- (void)webView:(id)arg1 willShowFullScreenForPlugInView:(id)arg2;
- (void)webView:(id)arg1 didHideFullScreenForPlugInView:(id)arg2;
- (void)didRemovePlugInView:(id)arg1;
- (BOOL)isShowingFullScreenPlugInUI;
- (id)textInputTraits;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)takeTraitsFrom:(id)arg1;
- (id)content;
- (id)selectionView;
- (id)interactionAssistant;
- (BOOL)isEditable;
- (BOOL)isEditing;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (void)updateSelection;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionClipRect;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (id)_supportedPasteboardTypesForCurrentSelection;
- (id)_documentFragmentForPasteboardItemAtIndex:(NSInteger)arg1;
- (void)paste:(id)arg1;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleContentFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })autoscrollDragFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })autoscrollContentFrame;
- (BOOL)playsNicelyWithGestures;
- (BOOL)becomesEditableWithGestures;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (void)useSelectionAssistantWithMode:(NSInteger)arg1;
- (void)willStartScroll;
- (void)didEndScroll;
- (void)willStartZoom;
- (void)didEndZoom;
- (BOOL)containsOnlySelectableElements;
- (BOOL)hasSimpleTextOnlyStructure;
- (void)detachSelectionView;
- (void)detachInteractionAssistant;
- (NSInteger)selectionState;
- (id)_scriptingInfoForLink:(id)arg1;
- (id)_scriptingInfoForForm:(id)arg1;
- (id)scriptingInfoWithChildren;
- (id)_parentTextViewForLoupe;
- (BOOL)_usesSingleLineSelectionBehavior;
- (void)setAllowsUnapprovedFocus:(BOOL)arg1;
- (BOOL)allowsUnapprovedFocus;
- (void)setFormEditingDelegate:(id)arg1;
- (id)formEditingDelegate;
- (id)formAssistant;
- (void)setFormEdited:(BOOL)arg1;
- (BOOL)isFormEdited;
- (id)formElement;
- (BOOL)isAutoFilling;
- (void)webViewFormEditedStatusHasChanged:(id)arg1;
- (void)webView:(id)arg1 willCloseFrame:(id)arg2;
- (void)acceptedAutoFillWord:(id)arg1;
- (void)autoFillWithElementValue;
- (BOOL)isAutoFillMode;
- (void)_autoFillFrame:(id)arg1;
- (void)webView:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (BOOL)canOpenNewPageForURL:(id)arg1;
- (void)_showImageSheet;
- (void)_showLinkSheet;
- (void)_showDataDetectorsSheet;
- (void)clearInteractionTimer;
- (void)performInteractionSelector:(SEL)arg1 afterDelay:(double)arg2;
- (struct CGPoint { float x1; float x2; })convertWindowPointToViewport:(struct CGPoint { float x1; float x2; })arg1;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (void)interactionMouseUp:(struct __GSEvent { }*)arg1;
- (void)_resetInteractionWithLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)startInteractionWithLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)continueInteractionWithLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)tapInteractionWithLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)validateInteractionWithLocation:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)startActionSheet;
- (BOOL)isInInteraction;
- (BOOL)willInteractWithLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)interactionMouseDown:(struct __GSEvent { }*)arg1;
- (void)defaultMouseDragged:(struct __GSEvent { }*)arg1;
- (void)defaultMouseUp:(struct __GSEvent { }*)arg1;
- (BOOL)canHandleHandEvent:(struct __GSEvent { }*)arg1;
- (BOOL)handleHandEvent:(struct __GSEvent { }*)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)webView:(id)arg1 eventRegionsChanged:(id)arg2;
- (BOOL)_directEventsHitTest:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_directEventsCheckEvent:(struct __GSEvent { }*)arg1;
- (BOOL)_directEventsProcessEvent:(struct __GSEvent { }*)arg1;
- (void)cancelInteractionWithCandidate;
- (BOOL)_interactionCandidateHasCustomHandlerForSelector:(SEL)arg1;
- (void)_generateAndForwardUIEventForGSEvent:(struct __GSEvent { }*)arg1 withTouchPhase:(NSInteger)arg2;
- (void)forwardMouseUpToInteractionCandidate:(struct __GSEvent { }*)arg1;
- (void)forwardMouseDraggedToInteractionCandidate:(struct __GSEvent { }*)arg1;
- (void)forwardEventsToInteractionCandidate;
- (void)performCandidateClick:(id)arg1;
- (void)performClick:(id)arg1;
- (void)_sendMouseMoveAndAttemptClick:(id)arg1;
- (void)attemptClick:(id)arg1;
- (void)webView:(id)arg1 didObserveDeferredContentChange:(NSInteger)arg2 forFrame:(id)arg3;
- (void)webViewDidPreventDefaultForEvent:(id)arg1;
- (id)approximateNodeAtViewportLocation:(struct CGPoint { float x1; float x2; }*)arg1;
- (void)highlightApproximateNodeInverted:(BOOL)arg1;
- (void)hideTapHighlight;
- (void)highlightApproximateNodeAndDisplayInfoSheet;
- (void)resetInteraction;
- (void)completeInteraction;
- (void)cancelInteraction;
- (void)deferInteraction;
- (void)cancelInteractionWithImmediateDisplay:(BOOL)arg1;
- (void)_saveImages:(id)arg1;
- (void)_copyImage:(id)arg1;
- (void)_copyElement:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)sendScrollWheelEvents;
- (BOOL)eventCanTriggerGestureScrolling:(struct __GSEvent { }*)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (id)interactionDelegate;
- (void)setAllowsImageSheet:(BOOL)arg1;
- (void)setAllowsDataDetectorsSheet:(BOOL)arg1;
- (id)superviewForSheet;
- (void)_incrementBrowserSheets:(id)arg1;
- (void)_decrementBrowserSheets:(id)arg1;
- (void)showBrowserSheet:(id)arg1;
- (void)hideBrowserSheet:(id)arg1;
- (void)actionWillStart;
- (void)actionDidFinish;
- (void)webView:(id)arg1 didReceiveMessage:(id)arg2;
- (void)setAllowsMessaging:(BOOL)arg1;
- (BOOL)allowsMessaging;
- (id)messagesMatchingMask:(NSInteger)arg1;
- (void)clearMessagesMatchingMask:(NSInteger)arg1;
- (void)hidePDFPageNumberLabel;
- (void)updatePDFPageNumberLabel;
- (BOOL)mouseEventsChangeSelection;
- (BOOL)shouldChangeSelectionForEvent:(struct __GSEvent { }*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRectForSelecting;
- (struct CGPoint { float x1; float x2; })constrainedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)textLoupeTimerAction;
- (void)selectionMouseDown:(struct __GSEvent { }*)arg1;
- (void)selectionMouseDragged:(struct __GSEvent { }*)arg1;
- (void)selectionMouseUp:(struct __GSEvent { }*)arg1;
- (BOOL)shouldUseTextLoupe;
- (void)updateTextLoupe:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)autocorrectPromptCapturedMouseDown:(struct __GSEvent { }*)arg1;
- (id)createCSSStyleDeclaration;
- (void)selectWord;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRectFromSelectedFrameCoordinates:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })convertPointToSelectedFrameCoordinates:(struct CGPoint { float x1; float x2; })arg1;
- (void)selectionChanged;
- (void)selectionChanged:(id)arg1;
- (void)clearSelection;
- (void)alterSelection:(struct CGPoint { float x1; float x2; })arg1 granularity:(NSInteger)arg2;
- (void)setSelectionToNextGranularity:(struct CGPoint { float x1; float x2; })arg1;
- (NSInteger)selectionGranularity;
- (void)setSelectionGranularity:(NSInteger)arg1;
- (BOOL)selectionGranularityIncreasing;
- (void)setSelectionGranularityIncreasing:(BOOL)arg1;
- (BOOL)hasSelection;
- (BOOL)hasEditableSelection;
- (BOOL)hasMarkedText;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (NSUInteger)selectionOffsetInMarkedText;
- (NSInteger)selectionState;
- (void)collapseSelection;
- (void)setCaretInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })caretInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })closestCaretRectForPoint:(struct CGPoint { float x1; float x2; })arg1 inSelection:(BOOL)arg2;
- (BOOL)pointAtStartOfLine:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)pointAtEndOfLine:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)isPoint:(struct CGPoint { float x1; float x2; })arg1 inRange:(id)arg2;
- (NSInteger)selectionBaseWritingDirection:(BOOL*)arg1;
- (void)toggleBaseWritingDirection;
- (void)setBaseWritingDirection:(NSInteger)arg1;
- (void)setRangedSelectionBaseToCurrentSelection;
- (void)setRangedSelectionBaseToCurrentSelectionStart;
- (void)setRangedSelectionBaseToCurrentSelectionEnd;
- (void)clearRangedSelectionInitialExtent;
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
- (BOOL)setRangedSelectionExtentPoint:(struct CGPoint { float x1; float x2; })arg1 baseIsStart:(BOOL)arg2;
- (void)setRangedSelectionExtentPoint:(struct CGPoint { float x1; float x2; })arg1 baseIsStart:(BOOL)arg2 allowFlipping:(BOOL)arg3;
- (void)setSelectionWithFirstPoint:(struct CGPoint { float x1; float x2; })arg1 secondPoint:(struct CGPoint { float x1; float x2; })arg2;
- (id)wordAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)moveSelectionToStartOrEndOfCurrentWord;
- (id)selectionRectsForRange:(id)arg1;
- (id)selectionRects;
- (void)smartExtendRangedSelection:(NSInteger)arg1;
- (void)setRangedSelectionWithExtentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setSelectionToEnd;
- (void)setSelectionToStart;
- (void)selectAll;
- (BOOL)selectionIsCaretInDisplayBlockElementAtOffset:(NSInteger)arg1;
- (void)setAutoscrollContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })autoscrollContentOffset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentFrameForView:(id)arg1;
- (void)startAutoscroll:(struct CGPoint { float x1; float x2; })arg1;
- (void)cancelAutoscroll;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleBounds;

@end
