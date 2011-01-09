/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFAtomBackgroundView, UILabel;



@interface MFAtomView : UIDefaultKeyboardInput 
{
    MFAtomBackgroundView *_background;
    UILabel *_label;
    id _delegate;
    unsigned int _disclosure : 1;
    unsigned int _needsCentering : 1;
    float _width;
}

+ (id)backgroundImageWithDisclosure:(BOOL)arg1 selected:(BOOL)arg2;
+ (struct { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })backgroundImageSlicesWithDisclosure:(BOOL)arg1;
+ (float)defaultHeight;
+ (float)horizontalPadding;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)title;
- (void)setTitle:(id)arg1;
- (float)preferredWidth;
- (void)setShowsDisclosure:(BOOL)arg1;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (void)showBackground:(BOOL)arg1;
- (void)layoutSubviews;

@end
