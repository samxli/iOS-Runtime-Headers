/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;



@interface UIStatusBarServiceItemView : UIStatusBarItemView 
{
    NSString *_pathToBlackServiceImage;
    NSString *_pathToSilverServiceImage;
    NSString *_serviceString;
    NSInteger _contentType;
    BOOL _loopingNecessaryForString;
    BOOL _usingStringForBlack;
    BOOL _usingStringForSilver;
    BOOL _loopNowIfNecessary;
    float _letterSpacing;
}

+ (void)_initializeSafeCategory;

- (void)_loopAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (BOOL)_loopingNecessary;
- (void)_setUsingString:(BOOL)arg1;
- (void)setVisible:(BOOL)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 duration:(double)arg3;
- (float)updateContentsAndWidth;
- (BOOL)usesSmallerTextFont;
- (id)textColorForStyle:(NSInteger)arg1;
- (float)standardPadding;
- (BOOL)updateForNewData:(struct { BOOL x1[22]; BOOL x2[64]; NSInteger x3; NSInteger x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[100]; BOOL x8[1024]; NSUInteger x9; NSInteger x10; NSInteger x11; NSUInteger x12; NSInteger x13; NSUInteger x14; BOOL x15[150]; NSInteger x16; NSInteger x17; unsigned int x18 : 1; BOOL x19[256]; unsigned int x20 : 1; BOOL x21[100]; unsigned int x22 : 1; unsigned int x23 : 1; }*)arg1 actions:(NSInteger)arg2;
- (BOOL)animatesDataChange;
- (BOOL)animatesFrameChange;
- (void)performPendedActions;
- (id)contentsImageForStyle:(NSInteger)arg1;
- (void)dealloc;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;

@end