/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */



@interface GKTable : NSObject 
{
    struct _gktableitem { NSUInteger x1; id x2; double x3; double x4; } *_items;
    NSUInteger _count;
    NSUInteger _size;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _lock;
}

@property(readonly) NSUInteger count;


- (id)init;
- (id)initWithSize:(unsigned long)arg1;
- (void)dealloc;
- (id)objectForKey:(NSUInteger)arg1;
- (id)allObjects;
- (void)setObject:(id)arg1 forKey:(NSUInteger)arg2;
- (void)touchObject:(id)arg1;
- (void)touchObjectForKey:(NSUInteger)arg1;
- (void)removeObjectForKey:(NSUInteger)arg1;
- (void)removeAllObjects;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)lock;
- (void)unlock;
- (void)print;
- (unsigned long)count;

@end
