/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMappingModel, NSMutableDictionary, NSSQLConnection, NSSQLCore, NSSQLModel, NSSQLAdapter;



@interface _NSSQLiteStoreMigrator : NSObject 
{
    NSSQLCore *_store;
    NSSQLModel *_dstModel;
    NSSQLModel *_srcModel;
    NSSQLAdapter *_adapter;
    NSMappingModel *_mappingModel;
    NSSQLConnection *_connection;
    NSMutableDictionary *_reindexedEntities;
    NSMutableDictionary *_reindexedPropertiesByEntity;
    NSMutableDictionary *_sourceToDestinationEntityMap;
    NSMutableDictionary *_addedEntityMigrations;
    NSMutableDictionary *_removedEntityMigrations;
    NSMutableDictionary *_transformedEntityMigrations;
    NSMutableDictionary *_copiedEntityMigrations;
    NSMutableDictionary *_tableMigrationDescriptionsByEntity;
    BOOL _hasPKTableChanges;
}

@property(readonly) NSSQLAdapter *adapter;

+ (BOOL)_annotatesMigrationMetadata;
+ (void)_setAnnotatesMigrationMetadata:(BOOL)arg1;

- (id)initWithStore:(id)arg1 destinationModel:(id)arg2 mappingModel:(id)arg3;
- (void)dealloc;
- (BOOL)performMigration:(id*)arg1;
- (id)createEntityMigrationStatements:(id*)arg1;
- (id)createStatementsForUpdatingEntityKeys;
- (id)createIndexStatementsForEntity:(id)arg1;
- (void)_determinePropertyDependenciesOnIDForEntity:(id)arg1;
- (void)_determineReindexedEntitiesAndAffectedProperties;
- (id)entityMigrationDescriptionForEntity:(id)arg1;
- (id)tableMigrationDescriptionForEntity:(id)arg1;
- (void)_populateEntityMigrationDescriptionsAndEntityMap;
- (void)_populateTableMigrationDescriptions;
- (void)_addEntityMigration:(id)arg1 toTableMigrationForRootEntity:(id)arg2 migrationType:(NSInteger)arg3;
- (void)_addReindexedProperty:(id)arg1 toSetForEntity:(id)arg2;
- (id)adapter;

@end
