/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableArray, NSManagedObject, NSPropertyDescription;



@interface _NSFaultingMutableArray : NSMutableArray 
{
    NSInteger _cd_rc;
    NSMutableArray *_realArray;
    NSManagedObject *_source;
    NSPropertyDescription *_relationship;
    struct _NSFaultingMutableArrayFlags { 
        unsigned int _isFault : 1; 
        unsigned int _reserved : 31; 
    } _flags;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)retain;
- (void)release;
- (NSUInteger)retainCount;
- (id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(BOOL)arg3;
- (void)dealloc;
- (BOOL)isFault;
- (void)willRead;
- (void)turnIntoFault;
- (id)source;
- (id)relationship;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(NSUInteger)arg2;
- (NSUInteger)count;
- (id)objectAtIndex:(NSUInteger)arg1;
- (void)addObject:(id)arg1;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (id)objectEnumerator;
- (void)insertObject:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(NSUInteger)arg1;
- (void)replaceObjectAtIndex:(NSUInteger)arg1 withObject:(id)arg2;
- (void)getObjects:(id*)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;

@end
