/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */



@interface VMUTaskMemoryCache : NSObject 
{
    struct { unsigned long x1; unsigned long x2; struct { /* ? */ } *x3; } *_memoryRegions;
    NSUInteger _task;
    BOOL _taskIs64Bit;
    BOOL _stopped;
}

+ (BOOL)taskIs64Bit:(NSUInteger)arg1;

- (void)initMemoryRegions;
- (void)freeMemoryRegions;
- (id)initWithTask:(NSUInteger)arg1;
- (void)flushMemoryCache;
- (void)dealloc;
- (void)finalize;
- (NSInteger)startPeeking;
- (NSInteger)stopPeeking;
- (NSInteger)peekAtAddress:(NSUInteger)arg1 returnsSize:(NSUInteger*)arg2 returnsBuf:(void**)arg3;
- (NSInteger)peekAtAddress:(NSUInteger)arg1 size:(NSUInteger)arg2 returnsBuf:(void**)arg3;
- (NSInteger)readPointerAt:(NSUInteger)arg1 value:(NSUInteger*)arg2;
- (BOOL)copyRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 to:(void*)arg2;

@end
