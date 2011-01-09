/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;



@interface PDAnimateMotionBehavior : PDAnimateScaleBehavior 
{
    NSString *mPath;
    BOOL mHasAngle;
    double mAngle;
    BOOL mHasPointType;
    NSInteger mPointType;
    BOOL mHasOriginType;
    NSInteger mOriginType;
    BOOL mHasRotationCenter;
    struct CGPoint { 
        float x; 
        float y; 
    } mRotationCenter;
}


- (void)dealloc;
- (BOOL)hasPath;
- (id)path;
- (void)setPath:(id)arg1;
- (BOOL)hasAngle;
- (double)angle;
- (void)setAngle:(double)arg1;
- (BOOL)hasPointType;
- (NSInteger)pointType;
- (void)setPointType:(NSInteger)arg1;
- (BOOL)hasOriginType;
- (NSInteger)originType;
- (void)setOriginType:(NSInteger)arg1;
- (BOOL)hasRotationCenter;
- (struct CGPoint { float x1; float x2; })rotationCenter;
- (void)setRotationCenter:(struct CGPoint { float x1; float x2; })arg1;

@end
