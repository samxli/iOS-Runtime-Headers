/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MessageWebLayerDelegate>, NSArray;



@interface MessageWebLayer : UIWebDocumentView 
{
    NSArray *_messageFragments;
    <MessageWebLayerDelegate> *_mwlDelegate;
    unsigned int _shouldRescale : 1;
    unsigned int _unitTests : 1;
    unsigned int _isFromEntourage : 1;
}

+ (void)initialize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 visibleSize:(struct CGSize { float x1; float x2; })arg2;
- (void)setMessageWebLayerDelegate:(id)arg1;
- (void)dealloc;
- (void)defaultMouseDragged:(struct __GSEvent { }*)arg1;
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)notifyDelegateToLoad:(id)arg1 client:(id)arg2;
- (void)notifyDelegateToDisplayInSeparateView:(id)arg1;
- (BOOL)notifyDelegateToDisplayContextualMenu:(id)arg1;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)_sendDelegateSizeDidChange;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)appendMarkupString:(id)arg1 baseURL:(id)arg2;
- (void)_updateImageURL:(id)arg1 withURL:(id)arg2 width:(id)arg3;
- (void)updateImageURL:(id)arg1 withURL:(id)arg2 width:(float)arg3;
- (void)_updateInlinePluginWithContentID:(id)arg1 htmlRepresentation:(id)arg2;
- (void)updateInlinePluginWithContentID:(id)arg1 htmlRepresentation:(id)arg2;
- (id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)adjustSizeBasedOnMainFrame:(id)arg1;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)setMessageIsFromEntourage:(BOOL)arg1;
- (void)_webthread_webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)_webthread_webView:(id)arg1 tileDidDraw:(id)arg2;
- (void)appendFragment:(id)arg1;
- (void)loadFragment:(id)arg1;
- (void)loadFragments:(id)arg1;
- (void)stopLoadingAndClear;
- (void)standardDeviationOfWidths:(float*)arg1 andMean:(float*)arg2 withMax:(NSInteger*)arg3 forBody:(id)arg4 inDocument:(id)arg5;
- (id)_rescaleDocument:(id)arg1 andBody:(id)arg2 withChangedNodes:(id)arg3;
- (void)rollBackChanges:(id)arg1 inDocument:(id)arg2;
- (BOOL)shouldChangeForBody:(id)arg1 inDocument:(id)arg2 shouldContinue:(BOOL*)arg3;
- (void)_restoreDrawingAndUpdateSizeOnMainThread;
- (void)_restoreDrawingOnMainThread;
- (void)rescaleMessage:(id)arg1;

@end
