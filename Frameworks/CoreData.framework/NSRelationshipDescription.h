/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, NSEntityDescription, NSRelationshipDescription;



@interface NSRelationshipDescription : NSPropertyDescription 
{
    void *_reserved5;
    void *_reserved6;
    NSEntityDescription *_destinationEntity;
    NSString *_lazyDestinationEntityName;
    NSRelationshipDescription *_inverseRelationship;
    NSString *_lazyInverseRelationshipName;
    unsigned long _maxCount;
    unsigned long _minCount;
    NSUInteger _deleteRule;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (NSUInteger)deleteRule;
- (NSUInteger)maxCount;
- (NSUInteger)minCount;
- (void)setMaxCount:(NSUInteger)arg1;
- (void)setMinCount:(NSUInteger)arg1;
- (BOOL)isToMany;
- (BOOL)isIndexed;
- (id)destinationEntity;
- (void)setDestinationEntity:(id)arg1;
- (void)setDeleteRule:(NSUInteger)arg1;
- (id)inverseRelationship;
- (void)setInverseRelationship:(id)arg1;
- (id)versionHash;
- (void)_createCachesAndOptimizeState;
- (void)_versionHash:(char *)arg1;
- (NSUInteger)_propertyType;
- (BOOL)_isRelationship;
- (BOOL)_isToManyRelationship;
- (void)_setLazyDestinationEntityName:(id)arg1;
- (BOOL)_validateValuesAreOfDestinationEntity:(id)arg1 source:(id)arg2;
- (BOOL)_nonPredicateValidateValue:(id*)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id*)arg4;
- (id)_initWithName:(id)arg1;

@end
