/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTablePartStyle, NSString, OADTableBackground;



@interface OADTableStyle : NSObject 
{
    NSString *mName;
    NSString *mId;
    OADTableBackground *mBackground;
    OADTablePartStyle *mWholeTableStyle;
    OADTablePartStyle *mBand1HorzStyle;
    OADTablePartStyle *mBand2HorzStyle;
    OADTablePartStyle *mBand1VertStyle;
    OADTablePartStyle *mBand2VertStyle;
    OADTablePartStyle *mFirstRowStyle;
    OADTablePartStyle *mFirstColumnStyle;
    OADTablePartStyle *mLastRowStyle;
    OADTablePartStyle *mLastColumnStyle;
    OADTablePartStyle *mNorthEastStyle;
    OADTablePartStyle *mNorthWestStyle;
    OADTablePartStyle *mSouthEastStyle;
    OADTablePartStyle *mSouthWestStyle;
}


- (id)partStyle:(NSInteger)arg1;
- (void)setWholeTableStyle:(id)arg1;
- (void)setBand1HorzStyle:(id)arg1;
- (id)band2HorzStyle;
- (void)setBand2HorzStyle:(id)arg1;
- (id)band1VertStyle;
- (void)setBand1VertStyle:(id)arg1;
- (id)band2VertStyle;
- (void)setBand2VertStyle:(id)arg1;
- (void)setFirstRowStyle:(id)arg1;
- (id)firstColumnStyle;
- (void)setFirstColumnStyle:(id)arg1;
- (void)setLastRowStyle:(id)arg1;
- (id)lastColumnStyle;
- (void)setLastColumnStyle:(id)arg1;
- (id)northEastStyle;
- (void)setNorthEastStyle:(id)arg1;
- (id)northWestStyle;
- (void)setNorthWestStyle:(id)arg1;
- (id)southEastStyle;
- (void)setSouthEastStyle:(id)arg1;
- (id)southWestStyle;
- (void)setSouthWestStyle:(id)arg1;
- (void)setId:(id)arg1;
- (id)lastRowStyle;
- (id)firstRowStyle;
- (id)wholeTableStyle;
- (id)band1HorzStyle;
- (id)id;
- (void)setBackground:(id)arg1;
- (id)background;
- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;

@end