/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIFont, UINavigationItem;



@interface UINavigationItemView : UIView 
{
    UIFont *_font;
    UINavigationItem *_item;
    float _titleWidth;
    BOOL _titleAutosizesToFit;
}


- (id)initWithNavigationItem:(id)arg1;
- (id)navigationItem;
- (id)_defaultFont;
- (void)drawText:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_resetTitleWidth;
- (float)_titleWidth;
- (id)title;
- (void)setTitleAutoresizesToFit:(BOOL)arg1;
- (BOOL)titleAutoresizesToFit;
- (void)setFont:(id)arg1;
- (id)font;
- (id)_scriptingInfo;

@end
