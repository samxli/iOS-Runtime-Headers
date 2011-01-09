/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, NSMutableArray, UIWindow;



@interface UITouch : NSObject 
{
    double _timestamp;
    NSInteger _phase;
    NSInteger _savedPhase;
    NSUInteger _tapCount;
    UIWindow *_window;
    UIView *_view;
    UIView *_gestureView;
    NSMutableArray *_gestureRecognizers;
    struct CGPoint { 
        float x; 
        float y; 
    } _locationInWindow;
    struct CGPoint { 
        float x; 
        float y; 
    } _previousLocationInWindow;
    struct { 
        unsigned int _firstTouchForView : 1; 
        unsigned int _isTap : 1; 
        unsigned int _isWarped : 1; 
        unsigned int _isDelayed : 1; 
        unsigned int _sentTouchesEnded : 1; 
    } _touchFlags;
}

@property double timestamp;
@property NSInteger phase;
@property NSUInteger tapCount;
@property BOOL isTap;
@property BOOL isWarped;
@property BOOL sentTouchesEnded;
@property(retain) UIWindow *window;
@property(retain) UIView *view;
@property(retain) UIView *gestureView;
@property(readonly) double timestamp;
@property(readonly) NSInteger phase;
@property(readonly) NSUInteger tapCount;
@property(retain,readonly) UIWindow *window;
@property(retain,readonly) UIView *view;

+ (id)_createTouchesWithGSEvent:(struct __GSEvent { }*)arg1 phase:(NSInteger)arg2 view:(id)arg3;

- (void)dealloc;
- (double)timestamp;
- (NSInteger)phase;
- (NSInteger)info;
- (NSUInteger)tapCount;
- (BOOL)isTap;
- (BOOL)isWarped;
- (void)setIsDelayed:(BOOL)arg1;
- (BOOL)isDelayed;
- (void)setSentTouchesEnded:(BOOL)arg1;
- (BOOL)sentTouchesEnded;
- (id)window;
- (id)view;
- (id)gestureRecognizers;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (struct CGPoint { float x1; float x2; })previousLocationInView:(id)arg1;
- (void)_loadStateFromTouch:(id)arg1;
- (void)_setIsFirstTouchForView:(BOOL)arg1;
- (BOOL)_isFirstTouchForView;
- (void)setTimestamp:(double)arg1;
- (void)setPhase:(NSInteger)arg1;
- (void)setTapCount:(NSUInteger)arg1;
- (void)setIsTap:(BOOL)arg1;
- (void)setIsWarped:(BOOL)arg1;
- (void)setWindow:(id)arg1;
- (void)setView:(id)arg1;
- (void)setGestureView:(id)arg1;
- (id)gestureView;
- (void)_setLocationInWindow:(struct CGPoint { float x1; float x2; })arg1 resetPrevious:(BOOL)arg2;
- (id)description;
- (void)_addGestureRecognizer:(id)arg1;
- (void)_removeGestureRecognizer:(id)arg1;
- (id)_gestureRecognizers;
- (void)_clearGestureRecognizers;
- (BOOL)_touchesBeganWasDelayed;
- (void)_pushPhase:(NSInteger)arg1;
- (void)_popPhase;
- (struct CGPoint { float x1; float x2; })_locationInWindow:(id)arg1;
- (id)_mk_delayedCopy;

@end
