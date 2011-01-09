/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;



@interface UISectionHeaderCell : UIView 
{
    NSString *_title;
    struct { 
        unsigned int style : 1; 
        unsigned int reserved : 31; 
    } _sectionHeaderCellFlags;
}

+ (id)defaultTitleFont;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setStyle:(NSInteger)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_rectForTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)drawTitle:(id)arg1 withColor:(id)arg2 withShadowColor:(id)arg3 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (void)drawTitle:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)title;
- (BOOL)isEqualToView:(id)arg1;
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;
- (void)mouseUp:(struct __GSEvent { }*)arg1;

@end
