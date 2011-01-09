/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;



@interface UIKBGeometry : NSObject <NSCoding, NSCopying>
{
    NSString *m_name;
    struct { 
        float amount; 
        NSInteger unit; 
    } m_x;
    struct { 
        float amount; 
        NSInteger unit; 
    } m_y;
    struct { 
        float amount; 
        NSInteger unit; 
    } m_w;
    struct { 
        float amount; 
        NSInteger unit; 
    } m_h;
    struct { 
        float amount; 
        NSInteger unit; 
    } m_paddingTop;
    struct { 
        float amount; 
        NSInteger unit; 
    } m_paddingLeft;
    struct { 
        float amount; 
        NSInteger unit; 
    } m_paddingBottom;
    struct { 
        float amount; 
        NSInteger unit; 
    } m_paddingRight;
    BOOL m_explicit;
}

@property BOOL explicit;
@property ? paddingRight; /* unknown property attribute: SsetPaddingRight: */
@property ? paddingBottom; /* unknown property attribute: SsetPaddingBottom: */
@property ? paddingLeft; /* unknown property attribute: SsetPaddingLeft: */
@property ? paddingTop; /* unknown property attribute: SsetPaddingTop: */
@property ? h; /* unknown property attribute: SsetH: */
@property ? w; /* unknown property attribute: SsetW: */
@property ? y; /* unknown property attribute: SsetY: */
@property ? x; /* unknown property attribute: SsetX: */
@property(retain) NSString *name;

+ (id)geometry;
+ (id)geometryWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setName:(id)arg1;
- (void)setX:(struct { float x1; NSInteger x2; })arg1;
- (void)setY:(struct { float x1; NSInteger x2; })arg1;
- (void)setW:(struct { float x1; NSInteger x2; })arg1;
- (void)setH:(struct { float x1; NSInteger x2; })arg1;
- (void)setPaddingTop:(struct { float x1; NSInteger x2; })arg1;
- (void)setPaddingLeft:(struct { float x1; NSInteger x2; })arg1;
- (void)setPaddingBottom:(struct { float x1; NSInteger x2; })arg1;
- (void)setPaddingRight:(struct { float x1; NSInteger x2; })arg1;
- (id)description;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameWithContainingFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })paddedFrameWithContainingFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })paddedFrameWithResolvedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)overrideGeometry:(id)arg1;
- (BOOL)explicit;
- (void)setExplicit:(BOOL)arg1;
- (struct { float x1; NSInteger x2; })paddingRight;
- (struct { float x1; NSInteger x2; })paddingBottom;
- (struct { float x1; NSInteger x2; })paddingLeft;
- (struct { float x1; NSInteger x2; })paddingTop;
- (struct { float x1; NSInteger x2; })h;
- (struct { float x1; NSInteger x2; })w;
- (struct { float x1; NSInteger x2; })y;
- (struct { float x1; NSInteger x2; })x;
- (id)name;

@end
