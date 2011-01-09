/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSMutableSet;



@interface UITextTapRecognizer : UIGestureRecognizer 
{
    NSInteger _numberOfFingers;
    NSInteger _numberOfTaps;
    NSMutableSet *_activeTouches;
    BOOL _noNewTouches;
    NSInteger _currentNumberOfFingers;
    NSInteger _currentNumberOfTaps;
    NSInteger _timerOn;
    struct CGPoint { 
        float x; 
        float y; 
    } _location;
    struct CGPoint { 
        float x; 
        float y; 
    } _startPoint;
    float _allowableMovement;
    NSMutableArray *_touches;
}

@property(readonly) CGPoint centroid;
@property float allowableMovement;
@property(readonly) NSArray *touches;
@property NSInteger numberOfFingers;
@property NSInteger numberOfTaps;
@property(readonly) CGPoint location;


- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
- (void)reset;
- (void)clearTapTimer;
- (void)startTapTimer:(double)arg1;
- (void)tooSlow:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint { float x1; float x2; })centroid;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)_shouldSaveGestureFromExclusion:(id)arg1;
- (float)allowableMovement;
- (void)setAllowableMovement:(float)arg1;
- (id)touches;
- (NSInteger)numberOfFingers;
- (void)setNumberOfFingers:(NSInteger)arg1;
- (NSInteger)numberOfTaps;
- (void)setNumberOfTaps:(NSInteger)arg1;
- (struct CGPoint { float x1; float x2; })location;

@end
