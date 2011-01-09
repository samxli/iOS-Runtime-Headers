/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableArray, NSMutableDictionary, NSSQLEntity, NSNumber;



@interface _NSSQLTableMigrationDescription : NSObject 
{
    NSSQLEntity *_rootEntity;
    NSSQLEntity *_sourceRootEntity;
    NSInteger _migrationType;
    NSMutableArray *_addedEntityMigrations;
    NSMutableArray *_removedEntityMigrations;
    NSMutableArray *_copiedEntityMigrations;
    NSMutableArray *_transformedEntityMigrations;
    NSMutableDictionary *_migrationByEntity;
    NSMutableArray *_addedManyToManys;
    NSMutableArray *_removedManyToManys;
    NSMutableArray *_transformedManyToManys;
    NSMutableDictionary *_tempTableNames;
    NSNumber *_hasTransformedTableSchema;
}

@property(readonly) NSSQLEntity *rootEntity;
@property(readonly) NSInteger migrationType;


- (id)initWithRootEntity:(id)arg1 migrationType:(NSInteger)arg2;
- (void)dealloc;
- (void)addEntityMigrationDescription:(id)arg1;
- (BOOL)_hasTransformedTableSchema;
- (void)appendStatementsToPrepareForMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (void)appendStatementsToPerformMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (void)appendStatementsToCompleteMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (id)createInsertStatementForEntityMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (id)createUpdateStatementForEntityMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (id)_removedManyToManys;
- (id)_addedManyToManys;
- (id)_transformedManyToManys;
- (id)_tempNameForTableName:(id)arg1;
- (id)_sourceRootEntity;
- (id)rootEntity;
- (NSInteger)migrationType;

@end
