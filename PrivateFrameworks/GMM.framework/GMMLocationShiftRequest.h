/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMMapPoint;



@interface GMMLocationShiftRequest : PBRequest 
{
    GMMMapPoint *_originalPoint;
}

@property(retain) GMMMapPoint *originalPoint;


- (id)init;
- (void)dealloc;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (Class)responseClass;
- (NSUInteger)requestTypeCode;
- (id)description;
- (id)originalPoint;
- (void)setOriginalPoint:(id)arg1;

@end
