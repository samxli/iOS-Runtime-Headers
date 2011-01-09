/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UITextMagnifierTimeWeightedPoint : NSObject 
{
    NSInteger m_index;
    struct { 
        struct CGPoint { 
            float x; 
            float y; 
        } point; 
        double time; 
    } m_points[16];
}

@property(readonly) CGPoint weightedPoint;


- (void)clearHistory;
- (void)addPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })weightedPoint;
- (BOOL)historyCovers:(double)arg1;
- (float)distanceCoveredInInterval:(double)arg1;
- (struct CGSize { float x1; float x2; })displacementInInterval:(double)arg1;
- (struct CGSize { float x1; float x2; })displacementInInterval:(double)arg1 priorTo:(double)arg2;
- (float)distanceCoveredInInterval:(double)arg1 priorTo:(double)arg2;

@end
