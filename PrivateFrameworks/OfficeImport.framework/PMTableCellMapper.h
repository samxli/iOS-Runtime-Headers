/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTableCell, CMStyle;



@interface PMTableCellMapper : CMMapper 
{
    OADTableCell *mCell;
    CMStyle *mStyle;
    NSInteger mColIndex;
    NSUInteger mRowIndex;
    float mWidth;
}


- (id)initWithOadTableCell:(id)arg1 rowIndex:(NSUInteger)arg2 columnIndex:(NSInteger)arg3 parent:(id)arg4;
- (void)dealloc;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (float)widthWithState:(id)arg1;
- (id)tableMapper;
- (void)mapBordersWithState:(id)arg1;
- (void)mapCellPropertiesWithState:(id)arg1 textAnchor:(NSInteger)arg2;

@end
