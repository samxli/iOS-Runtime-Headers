/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UITouchTapInfo : NSObject 
{
    NSUInteger _tapCount;
    float _multiTapDelay;
    float _rejectAsTapThrehold;
    float _viewTouchPauseThreshold;
    struct CGPoint { 
        float x; 
        float y; 
    } _startPosition;
    double _startTime;
}


- (void)releaseAndClearWeakRefs;
- (void)clearTapState;
- (void)touchBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)_touchLocationConsideredMovement:(id)arg1;
- (void)touchMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchEnded:(id)arg1 withEvent:(id)arg2;
- (BOOL)cancelTouchTracking;

@end
