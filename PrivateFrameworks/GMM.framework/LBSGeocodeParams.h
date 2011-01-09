/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class LBSGRectangle, NSString, LBSUserLocation;



@interface LBSGeocodeParams : PBCodable 
{
    NSString *_resultLanguage;
    NSInteger _numFeatureLimit;
    BOOL _includeBoundingBoxes;
    BOOL _hasIncludeBoundingBoxes;
    LBSUserLocation *_location;
    LBSGRectangle *_boundingBox;
    NSInteger _addressLinesLimit;
    BOOL _hasAddressLinesLimit;
}

@property(readonly) BOOL hasLocation;
@property(readonly) BOOL hasBoundingBox;
@property(readonly) BOOL hasAddressLinesLimit;
@property NSInteger addressLinesLimit;
@property(retain) LBSGRectangle *boundingBox;
@property(retain) LBSUserLocation *location;
@property(readonly) BOOL hasIncludeBoundingBoxes;
@property BOOL includeBoundingBoxes;
@property NSInteger numFeatureLimit;
@property(retain) NSString *resultLanguage;


- (id)init;
- (void)dealloc;
- (void)setIncludeBoundingBoxes:(BOOL)arg1;
- (BOOL)hasLocation;
- (BOOL)hasBoundingBox;
- (void)setAddressLinesLimit:(NSInteger)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAddressLinesLimit;
- (NSInteger)addressLinesLimit;
- (id)boundingBox;
- (void)setBoundingBox:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (BOOL)hasIncludeBoundingBoxes;
- (BOOL)includeBoundingBoxes;
- (NSInteger)numFeatureLimit;
- (void)setNumFeatureLimit:(NSInteger)arg1;
- (id)resultLanguage;
- (void)setResultLanguage:(id)arg1;

@end
