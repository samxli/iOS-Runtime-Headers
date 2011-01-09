/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableArray, NSMutableDictionary;



@interface NSMappingModel : NSObject 
{
    void *_reserved;
    void *_reserved1;
    void *_reserved2;
    NSMutableArray *_entityMappings;
    NSMutableDictionary *_entityMappingsByName;
    struct __modelMappingFlags { 
        unsigned int _isInUse : 1; 
        unsigned int _reservedModelMapping : 31; 
    } _modelMappingFlags;
}

+ (void)initialize;
+ (id)mappingModelFromBundles:(id)arg1 forSourceModel:(id)arg2 destinationModel:(id)arg3;
+ (id)inferredMappingModelForSourceModel:(id)arg1 destinationModel:(id)arg2 error:(id*)arg3;
+ (NSInteger)migrationDebugLevel;
+ (void)setMigrationDebugLevel:(NSInteger)arg1;
+ (id)_modelPathsFromBundles:(id)arg1;
+ (BOOL)_isInferredMappingModel:(id)arg1;

- (id)init;
- (id)initWithContentsOfURL:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)entityMappings;
- (void)setEntityMappings:(id)arg1;
- (id)entityMappingsByName;
- (id)_initWithEntityMappings:(id)arg1;
- (void)_addEntityMapping:(id)arg1;
- (BOOL)isEditable;
- (void)_createCachesAndOptimizeState;
- (void)_setIsEditable:(BOOL)arg1;
- (void)_throwIfNotEditable;
- (id)_sourceEntityVersionHashesByName;
- (id)_destinationEntityVersionHashesByName;

@end
