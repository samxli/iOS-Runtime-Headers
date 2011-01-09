/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray;



@interface UITapGestureRecognizer : UIGestureRecognizer 
{
    NSInteger _numberOfFingers;
    NSInteger _numberOfTaps;
    struct CGPoint { 
        float x; 
        float y; 
    } _location;
    NSInteger _touchesAtMaxTaps;
    BOOL _gotEnoughTouches;
    NSMutableArray *_touches;
}

@property(readonly) NSArray *touches;
@property NSInteger numberOfFingers;
@property NSInteger numberOfTaps;
@property(readonly) CGPoint location;


- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
- (id)touches;
- (void)reset;
- (void)_tapTooSlow;
- (void)_doubleTapTooSlow;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (NSInteger)numberOfFingers;
- (void)setNumberOfFingers:(NSInteger)arg1;
- (NSInteger)numberOfTaps;
- (void)setNumberOfTaps:(NSInteger)arg1;
- (struct CGPoint { float x1; float x2; })location;

@end
