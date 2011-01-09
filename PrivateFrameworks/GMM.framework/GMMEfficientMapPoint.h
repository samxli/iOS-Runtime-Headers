/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */



@interface GMMEfficientMapPoint : PBCodable 
{
    NSInteger _latitude;
    NSInteger _longitude;
}

@property(readonly) ? coordinate;
@property(readonly) NSInteger latitudeE6;
@property(readonly) NSInteger longitudeE6;
@property NSInteger longitude;
@property NSInteger latitude;


- (id)init;
- (void)dealloc;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (NSInteger)longitude;
- (void)setLongitude:(NSInteger)arg1;
- (NSInteger)latitude;
- (void)setLatitude:(NSInteger)arg1;
- (NSInteger)latitudeE6;
- (NSInteger)longitudeE6;
- (struct { double x1; double x2; })coordinate;

@end
