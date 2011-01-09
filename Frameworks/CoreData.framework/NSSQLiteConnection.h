/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSString, NSSQLEntity, NSMutableSet;



@interface NSSQLiteConnection : NSSQLConnection 
{
    struct sqlite3 { } *_db;
    struct sqlite3_stmt { } *_vmstatement;
    NSInteger _rowsProcessedCount;
    NSString *_pathname;
    NSSQLEntity *_finalEntity;
    NSSQLEntity *_lastEntity;
    NSUInteger _lastEntityKey;
    struct sqlite3_stmt { } *_fetchPKStatement;
    struct sqlite3_stmt { } *_updatePKStatement;
    NSMutableSet *_vmCachedStatements;
    NSMutableDictionary *_pragmaSettings;
    struct __CFDictionary { } *_cachedEntityUpdateStatements;
    double _timeOutOption;
    void *_extraBuffersForRegisteredFunctions[5];
    NSString *_dbPathRegisteredWithBackupd;
    long long _vacuumTracker;
    struct __sqliteConnectionFlags { 
        unsigned int _readyToBind : 1; 
        unsigned int _fetchInProgress : 1; 
        unsigned int _fileSystemType : 2; 
        unsigned int _proxyLocking : 1; 
        unsigned int _vacuumSetupNeeded : 1; 
        unsigned int _reserved : 26; 
    } _sqliteConnectionFlags;
}

+ (void)_setDebugFlags:(NSInteger)arg1;
+ (void)initialize;
+ (NSInteger)readMagicWordFromFD:(NSInteger)arg1;
+ (BOOL)_preflightDatabaseAtURL:(id)arg1;

- (id)initWithAdapter:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)_adapter;
- (BOOL)isFetchInProgress;
- (void)_ensureDatabaseOpen;
- (void)_ensureNoStatementPrepared;
- (void)_ensureNoFetchInProgress;
- (void)_ensureNoTransactionOpen;
- (struct __CFArray { }*)rawIntegerRowsForSQL:(id)arg1;
- (long long)fetchMaxPrimaryKeyForEntity:(id)arg1;
- (BOOL)canConnect;
- (BOOL)databaseIsEmpty;
- (void)_executeSQLString:(id)arg1;
- (void)_configureSynchronousMode;
- (void)_configureIntegrityCheck;
- (void)_configurePragmaOptions;
- (void)connect;
- (void)_clearTransactionCaches;
- (void)_finalizeStatement;
- (void)_forceDisconnectOnError;
- (void)disconnect;
- (void)beginTransaction;
- (void)commitTransaction;
- (void)rollbackTransaction;
- (BOOL)isOpen;
- (NSInteger)_rowsChangedByLastExecute;
- (void)_bindVariablesWithInsertedRow:(id)arg1;
- (void)_clearBindVariablesForInsertedRow;
- (void)_bindVariablesWithUpdatedRow:(id)arg1 andOriginalRow:(id)arg2 forDeltasMask:(struct __CFBitVector { }*)arg3;
- (void)_clearBindVariablesForUpdateStatement:(id)arg1 forDeltasMask:(struct __CFBitVector { }*)arg2;
- (void)_bindVariablesWithDeletedRow:(id)arg1;
- (void)insertRow:(id)arg1;
- (void)insertCorrelation:(id)arg1;
- (void)deleteCorrelation:(id)arg1;
- (void)cacheUpdateStatement:(id)arg1 forEntity:(id)arg2 andDeltasMask:(struct __CFBitVector { }*)arg3;
- (id)cachedUpdateStatementForEntity:(id)arg1 andDeltasMask:(struct __CFBitVector { }*)arg2;
- (void)updateRow:(id)arg1;
- (void)deleteRow:(id)arg1;
- (void)prepareSQLStatement:(id)arg1;
- (void)execute;
- (void)resetSQLStatement;
- (void)releaseSQLStatement;
- (void)_clearCachedStatements;
- (id)describeResults;
- (id)_newValueForColumn:(id)arg1 atIndex:(NSUInteger)arg2 inStatement:(struct sqlite3_stmt { }*)arg3;
- (id)newFetchedArray;
- (void)cacheCurrentDBStatementOn:(id)arg1;
- (void)handleCorruptedDB:(id)arg1;
- (NSInteger)fetchResultSet:(void*)arg1 usingFetchPlan:(void*)arg2;
- (void)setExclusiveLockingMode:(BOOL)arg1;
- (void)endFetch;
- (struct sqlite3_stmt { }*)_vmstatement;
- (BOOL)performIntegrityCheck;
- (id)fetchTableNames;
- (id)fetchTableCreationSQL;
- (BOOL)_hasTableWithName:(id)arg1;
- (BOOL)hasMetadataTable;
- (void)_registerExtraFunctions;
- (void)prepareForPrimaryKeyGeneration;
- (void)endPrimaryKeyGeneration;
- (long long)generatePrimaryKeysForEntity:(id)arg1 batch:(NSUInteger)arg2;
- (BOOL)hasPrimaryKeyTable;
- (void)_configureAutoVacuum;
- (void)_configurePageSize;
- (void)willCreateSchema;
- (void**)_buffersForRegisteredFunctions;
- (void)_performPostSaveTasks;
- (long long)_getCurrentAutoVacuumValue;
- (void)_setupVacuumIfNecessary;

@end
