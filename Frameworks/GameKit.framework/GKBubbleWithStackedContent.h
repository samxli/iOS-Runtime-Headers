/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKBubbleStackedContentView, NSArray;

@interface GKBubbleWithStackedContent : GKBubbleControl {
    GKBubbleStackedContentView *_contentView;
    NSArray *_dimensionConstraints;
    float _maximumDimension;
}

@property(retain) GKBubbleStackedContentView * contentView;
@property(retain) NSArray * dimensionConstraints;
@property float maximumDimension;
@property float paddingSizeMultiplier;

+ (void)initialize;
+ (float)maximumDimensionBasedOnDeviceAdjustForTallness:(BOOL)arg1;

- (id)contentView;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)dimensionConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (float)maximumDimension;
- (float)paddingSizeMultiplier;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)setDimensionConstraints:(id)arg1;
- (void)setMaximumDimension:(float)arg1;
- (void)setPaddingSizeMultiplier:(float)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)updateConstraints;

@end
