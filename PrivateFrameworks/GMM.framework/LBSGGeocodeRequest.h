/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class LBSGRectangle;



@interface LBSGGeocodeRequest : PBRequest 
{
    NSUInteger _numFeatureLimit;
    BOOL _hasNumFeatureLimit;
    BOOL _includeBoundingBoxes;
    BOOL _hasIncludeBoundingBoxes;
    LBSGRectangle *_boundingBox;
    NSInteger _addressLinesLimit;
    BOOL _hasAddressLinesLimit;
}

@property(readonly) BOOL hasBoundingBox;
@property(readonly) BOOL hasAddressLinesLimit;
@property NSInteger addressLinesLimit;
@property(retain) LBSGRectangle *boundingBox;
@property(readonly) BOOL hasIncludeBoundingBoxes;
@property BOOL includeBoundingBoxes;
@property(readonly) BOOL hasNumFeatureLimit;
@property NSUInteger numFeatureLimit;


- (id)init;
- (void)dealloc;
- (void)setNumFeatureLimit:(NSUInteger)arg1;
- (void)setIncludeBoundingBoxes:(BOOL)arg1;
- (BOOL)hasBoundingBox;
- (void)setAddressLinesLimit:(NSInteger)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (Class)responseClass;
- (NSUInteger)requestTypeCode;
- (id)description;
- (BOOL)hasAddressLinesLimit;
- (NSInteger)addressLinesLimit;
- (id)boundingBox;
- (void)setBoundingBox:(id)arg1;
- (BOOL)hasIncludeBoundingBoxes;
- (BOOL)includeBoundingBoxes;
- (BOOL)hasNumFeatureLimit;
- (NSUInteger)numFeatureLimit;

@end
