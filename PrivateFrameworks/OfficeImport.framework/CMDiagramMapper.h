/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class ODDDiagram, CMDrawingContext;



@interface CMDiagramMapper : CMDrawableMapper 
{
    ODDDiagram *mDiagram;
    CMDrawingContext *mDrawingContext;
}

+ (NSInteger)diagramTypeFromString:(id)arg1;

- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 parent:(id)arg4;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)diagram;
- (id)styleMatrix;
- (id)identifierFromLayoutTypeId:(id)arg1;
- (id)createDiagramMapperForId:(id)arg1;

@end
