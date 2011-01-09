/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */



@interface LBSGCell : PBCodable 
{
    NSInteger _lac;
    NSInteger _cellid;
    NSInteger _mnc;
    BOOL _hasMnc;
    NSInteger _mcc;
    BOOL _hasMcc;
    NSInteger _rssi;
    BOOL _hasRssi;
    NSInteger _age;
    BOOL _hasAge;
    NSInteger _timingAdvance;
    BOOL _hasTimingAdvance;
    NSInteger _primaryScramblingCode;
    BOOL _hasPrimaryScramblingCode;
}

@property(readonly) BOOL hasPrimaryScramblingCode;
@property NSInteger primaryScramblingCode;
@property(readonly) BOOL hasTimingAdvance;
@property NSInteger timingAdvance;
@property(readonly) BOOL hasAge;
@property NSInteger age;
@property(readonly) BOOL hasRssi;
@property NSInteger rssi;
@property(readonly) BOOL hasMcc;
@property NSInteger mcc;
@property(readonly) BOOL hasMnc;
@property NSInteger mnc;
@property NSInteger cellid;
@property NSInteger lac;


- (id)init;
- (void)dealloc;
- (void)setMnc:(NSInteger)arg1;
- (void)setMcc:(NSInteger)arg1;
- (void)setRssi:(NSInteger)arg1;
- (void)setAge:(NSInteger)arg1;
- (void)setTimingAdvance:(NSInteger)arg1;
- (void)setPrimaryScramblingCode:(NSInteger)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPrimaryScramblingCode;
- (NSInteger)primaryScramblingCode;
- (BOOL)hasTimingAdvance;
- (NSInteger)timingAdvance;
- (BOOL)hasAge;
- (NSInteger)age;
- (BOOL)hasRssi;
- (NSInteger)rssi;
- (BOOL)hasMcc;
- (NSInteger)mcc;
- (BOOL)hasMnc;
- (NSInteger)mnc;
- (NSInteger)cellid;
- (void)setCellid:(NSInteger)arg1;
- (NSInteger)lac;
- (void)setLac:(NSInteger)arg1;

@end
