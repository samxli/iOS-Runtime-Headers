/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIWebDocumentView, DOMHTMLElement;



@interface CKWebBalloonView : CKBalloonView 
{
    UIWebDocumentView *_webLayer;
    DOMHTMLElement *_textElement;
}

+ (BOOL)shouldHaveAccessoryDiclosure;
+ (struct CGSize { float x1; float x2; })defaultSize;
+ (float)heightForText:(id)arg1 width:(float)arg2 includeBuffers:(BOOL)arg3;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 delegate:(id)arg2;
- (void)dealloc;
- (void)setOrientation:(NSInteger)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMessagePart:(id)arg1;
- (void)setComposition:(id)arg1;
- (void)setText:(id)arg1;
- (void)setDraws:(BOOL)arg1;
- (id)text;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_webLayerBounds;
- (void)layoutSubviews;
- (void)setNeedsDisplay;
- (void)tighten;
- (void)cancelInteraction;

@end
