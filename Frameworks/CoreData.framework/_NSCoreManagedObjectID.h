/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */



@interface _NSCoreManagedObjectID : NSManagedObjectID 
{
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (char *)generatedNameSuffix;
+ (void)initialize;
+ (Class)classWithStore:(id)arg1 andEntity:(id)arg2;
+ (NSUInteger)allocateBatch:(id*)arg1 count:(NSUInteger)arg2;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)alloc;
+ (BOOL)accessInstanceVariablesDirectly;
+ (NSInteger)version;
+ (id)retain;
+ (id)_retain_1;
+ (void)release;
+ (void)_release_1;
+ (id)managedObjectIDFromURIRepresentation:(id)arg1;
+ (void)setObjectStoreIdentifier:(id)arg1;
+ (void)_setStoreInfo1:(id)arg1;
+ (id)_storeInfo1;
+ (void)_storeDeallocated;

- (id)retain;
- (void)release;
- (void)finalize;
- (id)entity;
- (id)persistentStore;
- (BOOL)isTemporaryID;
- (id)_storeIdentifier;
- (id)_storeInfo1;
- (BOOL)_isPersistentStoreAlive;
- (NSUInteger)retainCount;
- (id)URIRepresentation;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;

@end
