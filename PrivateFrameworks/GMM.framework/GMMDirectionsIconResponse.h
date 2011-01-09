/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray;



@interface GMMDirectionsIconResponse : PBCodable 
{
    NSInteger _iconVersion;
    BOOL _hasIconVersion;
    NSMutableArray *_iconDefinitions;
}

@property(readonly) NSInteger iconDefinitionsCount;
@property(retain) NSMutableArray *iconDefinitions;
@property(readonly) BOOL hasIconVersion;
@property NSInteger iconVersion;


- (id)init;
- (void)dealloc;
- (void)setIconVersion:(NSInteger)arg1;
- (NSInteger)iconDefinitionsCount;
- (void)setIconDefinition:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)iconDefinitionAtIndex:(NSUInteger)arg1;
- (void)addIconDefinition:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)iconDefinitions;
- (void)setIconDefinitions:(id)arg1;
- (BOOL)hasIconVersion;
- (NSInteger)iconVersion;

@end
