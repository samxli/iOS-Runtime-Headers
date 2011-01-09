/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView;



@interface UIGroupTableViewCellBackground : UIView 
{
    NSInteger _sectionLocation;
    NSInteger _animationCount;
    BOOL _disableSeparator;
    UIView *_separatorView;
}

@property NSInteger sectionLocation;

+ (void)_flushCacheOnMemoryWarning:(id)arg1;
+ (void)initialize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSectionLocation:(NSInteger)arg1;
- (void)_setSectionLocationAnimationDidStop;
- (void)setSectionLocation:(NSInteger)arg1 animated:(BOOL)arg2;
- (NSInteger)sectionLocation;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void)layoutSubviews;
- (struct CGContext { }*)_createContextForCachingWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 isOpaque:(BOOL)arg2;
- (struct CGImage { }*)_cachedImageWithSize:(struct CGSize { float x1; float x2; })arg1 forBackgroundColor:(id)arg2 borderColor:(id)arg3 fillColor:(id)arg4 leftPhase:(float)arg5 rightPhase:(float)arg6 ignoreSectionLocation:(BOOL)arg7;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentRectForContentHeight:(float)arg1;
- (void)_incrementAnimationCount;
- (void)_decrementAnimationCount;
- (id)_backgroundColor;
- (id)_borderColor;
- (id)_fillColor;
- (void)_updateSeparatorView;
- (void)_updateContentsRectAndCenter;
- (void)_layoutSubviews:(BOOL)arg1;

@end
