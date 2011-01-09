/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class LBSGCellularProfile, LBSGLocation, LBSGGeocodeRequest;



@interface LBSGLocRequestElement : PBRequest 
{
    LBSGCellularProfile *_cellularProfile;
    LBSGLocation *_location;
    LBSGGeocodeRequest *_geocode;
}

@property(readonly) BOOL hasCellularProfile;
@property(readonly) BOOL hasLocation;
@property(readonly) BOOL hasGeocode;
@property(retain) LBSGGeocodeRequest *geocode;
@property(retain) LBSGLocation *location;
@property(retain) LBSGCellularProfile *cellularProfile;


- (id)init;
- (void)dealloc;
- (BOOL)hasCellularProfile;
- (BOOL)hasLocation;
- (BOOL)hasGeocode;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)geocode;
- (void)setGeocode:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)cellularProfile;
- (void)setCellularProfile:(id)arg1;

@end
