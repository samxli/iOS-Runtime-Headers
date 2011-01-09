/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSArray, NSDictionary, NSString, NSEntityDescription;



@interface NSEntityStoreMapping : NSStoreMapping 
{
    NSEntityDescription *_entity;
    NSDictionary *_propertyMappings;
    NSArray *_primaryKeys;
    BOOL _isSingleTableEntity;
    NSString *_subentityColumn;
    NSUInteger _subentityID;
}


- (id)initWithEntity:(id)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)entity;
- (void)setEntity:(id)arg1;
- (id)propertyMappings;
- (void)setPropertyMappings:(id)arg1;
- (id)primaryKeys;
- (void)setPrimaryKeys:(id)arg1;
- (BOOL)isSingleTableEntity;
- (void)setSingleTableEntity:(BOOL)arg1;
- (id)subentityColumn;
- (void)setSubentityColumn:(id)arg1;
- (NSUInteger)subentityID;
- (void)setSubentityID:(NSUInteger)arg1;
- (id)attributeMappings;
- (id)relationshipMappings;
- (id)primaryKeyColumnDefinitions;
- (id)attributeColumnDefinitions;
- (id)foreignKeyColumnDefinitions;
- (id)foreignKeyConstraintDefinitions;
- (id)createTableStatement;

@end
