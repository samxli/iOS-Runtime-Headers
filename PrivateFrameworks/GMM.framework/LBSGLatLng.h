/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */



@interface LBSGLatLng : PBCodable 
{
    NSInteger _latE7;
    NSInteger _lngE7;
}

@property NSInteger lngE7;
@property NSInteger latE7;


- (id)init;
- (void)dealloc;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (NSInteger)lngE7;
- (void)setLngE7:(NSInteger)arg1;
- (NSInteger)latE7;
- (void)setLatE7:(NSInteger)arg1;
- (void)setLat:(float)arg1;
- (float)lat;
- (void)setLon:(float)arg1;
- (float)lon;

@end
