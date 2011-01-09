/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView<UITextSelectingContainer>, UIDelayedAction;



@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer 
{
    UIView<UITextSelectingContainer> *_containerView;
    UIDelayedAction *_secondDelayTimer;
    double _secondDelay;
    BOOL _secondDelayElapsed;
    id _userData;
}

@property id userData;
@property(readonly) BOOL secondDelayElapsed;
@property double secondDelay;
@property UIView<UITextSelectingContainer> *containerView;


- (void)reset;
- (void)setState:(NSInteger)arg1;
- (void)secondDelayElapsed:(id)arg1;
- (void)startTimer;
- (void)clearTimer;
- (id)userData;
- (void)setUserData:(id)arg1;
- (BOOL)secondDelayElapsed;
- (double)secondDelay;
- (void)setSecondDelay:(double)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;

@end
