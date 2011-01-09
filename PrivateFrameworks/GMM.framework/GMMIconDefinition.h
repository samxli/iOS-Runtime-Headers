/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSData;



@interface GMMIconDefinition : PBCodable 
{
    long long _iconId;
    NSData *_image;
}

@property(readonly) BOOL hasImage;
@property(retain) NSData *image;
@property long long iconId;


- (id)init;
- (void)dealloc;
- (BOOL)hasImage;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)image;
- (void)setImage:(id)arg1;
- (long long)iconId;
- (void)setIconId:(long long)arg1;

@end
