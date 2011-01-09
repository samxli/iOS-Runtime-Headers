/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */



@interface GMMMetadata : PBCodable 
{
    BOOL _needsLinkStreetRange;
    BOOL _hasNeedsLinkStreetRange;
}

@property(readonly) BOOL hasNeedsLinkStreetRange;
@property BOOL needsLinkStreetRange;

+ (id)standardMetadata;

- (id)init;
- (void)dealloc;
- (void)setNeedsLinkStreetRange:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasNeedsLinkStreetRange;
- (BOOL)needsLinkStreetRange;

@end
