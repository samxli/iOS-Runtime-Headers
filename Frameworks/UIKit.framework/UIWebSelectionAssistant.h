/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWebDocumentView, UIWebSelectionView;



@interface UIWebSelectionAssistant : NSObject 
{
    UIWebDocumentView *_webView;
    UIWebSelectionView *_tintView;
    BOOL _enabled;
}

@property(readonly) UIWebSelection *selection;
@property(readonly) CGRect selectionFrame;
@property BOOL enabled;


- (id)initWithWebView:(id)arg1;
- (void)dealloc;
- (void)setGestureRecognizers;
- (void)selectionChanged;
- (id)selection;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionFrame;
- (void)longPress:(id)arg1;
- (void)tap:(id)arg1;
- (void)scaleChanged;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2 fromView:(id)arg3;
- (void)willDrag;
- (void)doneDragging;
- (void)resignedFirstResponder;
- (void)hideCallout;
- (void)layoutChanged;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (void)willRotate:(id)arg1;
- (void)didRotate:(id)arg1;

@end
