/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObjectContext, NSFetchRequest, _PFArray;



@interface _PFBatchFaultingArray : NSArray 
{
    NSInteger _cd_rc;
    NSUInteger _count;
    _PFArray *_array;
    NSUInteger *_entryFlags;
    NSManagedObjectContext *_moc;
    NSFetchRequest *_request;
    NSUInteger _batchSize;
    NSUInteger *_LRUBatches;
    struct _PFBatchFaultingArrayFlags { 
        unsigned int _LRUIndex : 8; 
        unsigned int _uniformEntity : 1; 
        unsigned int _RESERVED : 23; 
    } _flags;
}

+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)initWithPFArray:(id)arg1 andRequest:(id)arg2 andContext:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)retain;
- (void)release;
- (NSUInteger)retainCount;
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (id)arrayFromObjectIDs;
- (id)description;
- (NSUInteger)count;
- (id)objectAtIndex:(NSUInteger)arg1;

@end
