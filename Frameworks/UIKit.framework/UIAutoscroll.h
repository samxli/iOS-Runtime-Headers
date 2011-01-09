/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView<UIAutoscrollContainer>, NSTimer;



@interface UIAutoscroll : NSObject 
{
    id m_target;
    struct CGPoint { 
        float x; 
        float y; 
    } m_point;
    UIView<UIAutoscrollContainer> *m_scrollContainer;
    NSInteger m_directions;
    double m_repeatInterval;
    NSTimer *m_timer;
    NSInteger m_count;
    BOOL m_active;
}

@property BOOL active;
@property NSInteger count;
@property double repeatInterval;
@property NSInteger directions;
@property CGPoint point;
@property(retain) UIView<UIAutoscrollContainer> *scrollContainer;
@property(retain) id target;


- (void)dealloc;
- (BOOL)startAutoscroll:(id)arg1 scrollContainer:(id)arg2 point:(struct CGPoint { float x1; float x2; })arg3 directions:(NSInteger)arg4 repeatInterval:(double)arg5;
- (void)invalidate;
- (void)timerFired:(id)arg1;
- (BOOL)active;
- (void)setActive:(BOOL)arg1;
- (NSInteger)count;
- (void)setCount:(NSInteger)arg1;
- (double)repeatInterval;
- (void)setRepeatInterval:(double)arg1;
- (NSInteger)directions;
- (void)setDirections:(NSInteger)arg1;
- (struct CGPoint { float x1; float x2; })point;
- (void)setPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)scrollContainer;
- (void)setScrollContainer:(id)arg1;
- (id)target;
- (void)setTarget:(id)arg1;

@end
