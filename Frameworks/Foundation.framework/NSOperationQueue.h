/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSOperationQueue : NSObject 
{
    id _private;
    void *_reserved;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)finalize;
- (void)addOperation:(id)arg1;
- (id)operations;
- (NSInteger)maxConcurrentOperationCount;
- (void)setMaxConcurrentOperationCount:(NSInteger)arg1;
- (void)setSuspended:(BOOL)arg1;
- (BOOL)isSuspended;
- (void)cancelAllOperations;
- (void)waitUntilAllOperationsAreFinished;
- (void)addInvocation:(id)arg1;

@end
