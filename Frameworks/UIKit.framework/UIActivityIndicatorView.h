/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UIActivityIndicatorView : UIView <NSCoding>
{
    double _duration;
    BOOL _animating;
    NSInteger _activityIndicatorViewStyle;
    BOOL _hidesWhenStopped;
}

@property BOOL hidesWhenStopped;
@property NSInteger activityIndicatorViewStyle;

+ (void)_loadResourcesForStyle:(NSInteger)arg1;
+ (struct CGSize { float x1; float x2; })defaultSizeForStyle:(NSInteger)arg1;
+ (struct CGSize { float x1; float x2; })size;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithActivityIndicatorStyle:(NSInteger)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setActivityIndicatorViewStyle:(NSInteger)arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (BOOL)isAnimating;
- (void)setAnimationDuration:(double)arg1;
- (void)setHidesWhenStopped:(BOOL)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)setStyle:(NSInteger)arg1;
- (void)setAnimating:(BOOL)arg1;
- (void)startAnimation;
- (void)stopAnimation;
- (BOOL)hidesWhenStopped;
- (NSInteger)activityIndicatorViewStyle;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;

@end
