/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */



@interface ISExternalApplicationObserver : NSObject 
{
    NSInteger _lock;
    NSUInteger _ignoreCount;
    NSUInteger _syncCount;
    NSUInteger _watchCount;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)beginIgnoringChanges:(NSUInteger)arg1;
- (void)cancelIgnoringChanges:(NSUInteger)arg1;
- (BOOL)isWatching;
- (void)startWatching;
- (void)stopWatching;
- (void)iTunesSyncRequestedStart;
- (void)iTunesSyncHasCompleted:(NSInteger)arg1;
- (void)_handleExternalApplicationChange;
- (void)_reallyHandleExternalApplicationChange;

@end
