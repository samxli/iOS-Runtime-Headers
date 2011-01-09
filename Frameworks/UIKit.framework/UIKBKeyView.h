/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKBKeyboard, UIKBKey;



@interface UIKBKeyView : UIView 
{
    UIKBKeyboard *m_keyboard;
    UIKBKey *m_key;
    NSInteger m_state;
    struct CGPoint { 
        float x; 
        float y; 
    } m_drawOrigin;
}

@property CGPoint drawOrigin;
@property(readonly) NSInteger state;
@property(readonly) UIKBKey *key;
@property(readonly) UIKBKeyboard *keyboard;


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyboard:(id)arg2 key:(id)arg3 state:(NSInteger)arg4;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })drawOrigin;
- (void)setDrawOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (NSInteger)state;
- (id)key;
- (id)keyboard;

@end
