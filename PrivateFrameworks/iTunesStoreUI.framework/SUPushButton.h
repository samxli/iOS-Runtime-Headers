/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */



@interface SUPushButton : UIPushButton 
{
    unsigned int _drawsImageToFit : 1;
    unsigned int _ignoreHighlightChanges : 1;
    unsigned int _feedbackIsSticky : 1;
    unsigned int _showsFeedbackImmediately : 1;
}

@property BOOL drawsImageToFit;
@property BOOL feedbackIsSticky;
@property BOOL showsFeedbackImmediately;

+ (id)defaultHighlightColor;

- (void)clearHighlighting;
- (BOOL)drawsImageToFit;
- (BOOL)feedbackIsSticky;
- (void)setBackgroundImage:(id)arg1 highlightColor:(id)arg2;
- (void)setDrawsImageToFit:(BOOL)arg1;
- (BOOL)showsFeedbackImmediately;
- (void)setFeedbackIsSticky:(BOOL)arg1;
- (void)setShowsFeedbackImmediately:(BOOL)arg1;
- (void)drawButtonPart:(NSInteger)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)sendAction:(SEL)arg1 toTarget:(id)arg2 forEvent:(struct __GSEvent { }*)arg3;
- (void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;
- (void)setHighlighted:(BOOL)arg1;

@end
