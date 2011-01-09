/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTextBody, OADTableCellProperties;



@interface OADTableCell : NSObject 
{
    OADTextBody *mTextBody;
    OADTableCellProperties *mProperties;
    NSInteger mRowSpan;
    NSInteger mGridSpan;
    BOOL mHorzMerge;
    BOOL mVertMerge;
    NSInteger mTopRow;
    NSInteger mLeftColumn;
}


- (id)init;
- (void)dealloc;
- (id)textBody;
- (void)setTextBody:(id)arg1;
- (id)properties;
- (void)setProperties:(id)arg1;
- (NSUInteger)spanAlongDir:(NSInteger)arg1;
- (NSUInteger)rowSpan;
- (void)setRowSpan:(NSUInteger)arg1;
- (NSUInteger)gridSpan;
- (void)setGridSpan:(NSUInteger)arg1;
- (BOOL)horzMerge;
- (void)setHorzMerge:(BOOL)arg1;
- (BOOL)vertMerge;
- (void)setVertMerge:(BOOL)arg1;
- (NSUInteger)topRow;
- (void)setTopRow:(NSUInteger)arg1;
- (NSUInteger)leftColumn;
- (void)setLeftColumn:(NSUInteger)arg1;

@end
