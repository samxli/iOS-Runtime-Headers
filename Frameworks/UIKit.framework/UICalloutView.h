/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UILabel, UIView, NSMutableArray, NSTimer;



@interface UICalloutView : UIControl 
{
    UIImageView *_leftCap;
    UIImageView *_rightCap;
    UIImageView *_topAnchor;
    UIImageView *_bottomAnchor;
    UIImageView *_leftBackground;
    UIImageView *_rightBackground;
    UILabel *_title;
    UILabel *_subtitle;
    UILabel *_temporary;
    UIView *_leftView;
    UIView *_rightView;
    struct { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGPoint { 
            float x; 
            float y; 
        } offset; 
        NSInteger position; 
        struct CGPoint { 
            float x; 
            float y; 
        } desiredPoint; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } desiredBounds; 
    } _anchor;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _frame;
    id _delegate;
    struct { 
        unsigned int animated : 1; 
        unsigned int didMoveCalled : 1; 
        unsigned int hasPendingAnimatedLayout : 1; 
        unsigned int canAnchorFromBottom : 1; 
        unsigned int reserved : 28; 
    } _flags;
    NSMutableArray *_fadeInViews;
    NSMutableArray *_fadeOutViews;
    NSTimer *_layoutAnimationTimer;
}

@property NSInteger titleLineBreakMode;
@property NSInteger subtitleLineBreakMode;
@property NSInteger titleTextAlignment;
@property NSInteger subtitleTextAlignment;
@property BOOL canAnchorFromBottom;
@property(retain) UIView *rightView;
@property(retain) UIView *leftView;

+ (id)_backgroundImage;
+ (id)_leftCapImage;
+ (id)_rightCapImage;
+ (id)_topAnchorImage;
+ (id)_bottomAnchorImage;
+ (float)defaultHeight;
+ (id)sharedCalloutView;

- (void)_setLeftView:(id)arg1;
- (void)_setRightView:(id)arg1;
- (void)_scheduleViewToFadeIn:(id)arg1;
- (void)_scheduleViewToFadeOut:(id)arg1;
- (void)setLeftView:(id)arg1 animated:(BOOL)arg2;
- (void)setRightView:(id)arg1 animated:(BOOL)arg2;
- (void)setSubtitle:(id)arg1 animated:(BOOL)arg2;
- (void)_setLayoutAnimationTimer:(id)arg1;
- (void)_layoutAnimation;
- (void)_scheduleLayoutAnimation;
- (void)setLeftView:(id)arg1;
- (void)setRightView:(id)arg1;
- (void)_fadeViewsIn:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;
- (void)setTemporaryTitle:(id)arg1;
- (id)temporaryTitle;
- (NSInteger)titleLineBreakMode;
- (void)setTitleLineBreakMode:(NSInteger)arg1;
- (NSInteger)subtitleLineBreakMode;
- (void)setSubtitleLineBreakMode:(NSInteger)arg1;
- (NSInteger)titleTextAlignment;
- (void)setTitleTextAlignment:(NSInteger)arg1;
- (NSInteger)subtitleTextAlignment;
- (void)setSubtitleTextAlignment:(NSInteger)arg1;
- (void)setOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })offset;
- (struct CGPoint { float x1; float x2; })anchorPoint;
- (void)setCanAnchorFromBottom:(BOOL)arg1;
- (BOOL)canAnchorFromBottom;
- (void)getActualAnchorPoint:(struct CGPoint { float x1; float x2; }*)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 position:(NSInteger*)arg3 forDesiredAnchorPoint:(struct CGPoint { float x1; float x2; })arg4 boundaryRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5;
- (void)_setOriginForScale:(float)arg1;
- (void)_layoutSubviews:(BOOL)arg1;
- (void)setAnchorPoint:(struct CGPoint { float x1; float x2; })arg1 boundaryRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 animate:(BOOL)arg3;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)fadeOutWithDuration:(float)arg1;
- (void)_markDidMoveCalled;
- (void)completeBounceAnimation;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)removeTarget:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)rightView;
- (id)leftView;

@end
