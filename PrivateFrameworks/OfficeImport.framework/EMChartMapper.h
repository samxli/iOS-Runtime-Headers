/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDChart, CMState;



@interface EMChartMapper : CMMapper 
{
    EDChart *mChart;
    CMState *mState;
    struct { 
        BOOL primaryCategoryHasDates; 
        BOOL secondaryCategoryHasDates; 
        BOOL primaryAxisHasDates; 
        BOOL secondaryAxisHasDates; 
    } mPlotInfos;
}

+ (void)initialize;
+ (struct CGColor { }*)newColorWithCalibratedRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;

- (id)initWithChart:(id)arg1 parent:(id)arg2;
- (id)createPdfWithState:(id)arg1;
- (id)createChartPlotMapperForPlot:(id)arg1;
- (id)_chartDescriptionWithState:(id)arg1;
- (void)_addTitleToDescription:(id)arg1 title:(id)arg2;
- (void)_addCanvasToDescription:(id)arg1 withBackground:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg2 state:(id)arg3;
     /* Encoded args for previous method: v20@0:4@8B12@16 */

- (void)_addAxesToDescription:(id)arg1;
- (void)_addLabelAxisToDescription:(id)arg1 fromPlot:(id)arg2 withType:(id)arg3 withTitle:(id)arg4 andLabels:(id)arg5 centerLabels:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg6 primary:(BOOL)arg7;
     /* Encoded args for previous method: v36@0:4@8@12@16@20@24B28c32 */

- (void)_addUnitAxisToDescription:(id)arg1 fromPlot:(id)arg2 withType:(id)arg3 withTitle:(id)arg4 andValues:(id)arg5 primary:(BOOL)arg6;
- (id)_renderChart:(id)arg1 withSize:(struct CGSize { float x1; float x2; })arg2;
- (void)_addLegendToDescription:(id)arg1;

@end
