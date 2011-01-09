/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray, LBSAddressRange, LBSFeatureId;



@interface LBSAddressComponent : PBCodable 
{
    NSInteger _type;
    NSMutableArray *_parsed_names;
    NSInteger _feature_type;
    BOOL _hasFeature_type;
    LBSFeatureId *_feature_id;
    LBSAddressRange *_range;
}

@property(readonly) NSInteger parsed_namesCount;
@property(readonly) BOOL hasFeature_id;
@property(readonly) BOOL hasRange;
@property(retain) LBSAddressRange *range;
@property(retain) LBSFeatureId *feature_id;
@property(readonly) BOOL hasFeature_type;
@property NSInteger feature_type;
@property(retain) NSMutableArray *parsed_names;
@property NSInteger type;


- (id)init;
- (void)dealloc;
- (NSInteger)parsed_namesCount;
- (void)setParsed_name:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)parsed_nameAtIndex:(NSUInteger)arg1;
- (void)addParsed_name:(id)arg1;
- (void)setFeature_type:(NSInteger)arg1;
- (BOOL)hasFeature_id;
- (BOOL)hasRange;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)range;
- (void)setRange:(id)arg1;
- (id)feature_id;
- (void)setFeature_id:(id)arg1;
- (BOOL)hasFeature_type;
- (NSInteger)feature_type;
- (id)parsed_names;
- (void)setParsed_names:(id)arg1;
- (NSInteger)type;
- (void)setType:(NSInteger)arg1;

@end
