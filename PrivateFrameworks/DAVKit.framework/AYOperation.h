/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@class NSMutableDictionary, <AYNotificationDelegate>, NSLock, NSThread, AYOperation, <AYGroup>, NSError;



@interface AYOperation : NSObject 
{
    id _asyncProxy;
    NSThread *_currentThread;
    NSThread *_baseThread;
    AYOperation *_parentOperation;
    AYOperation *_mainOperation;
    AYOperation *_currentChildOperation;
    <AYGroup> *_group;
    NSLock *_operationLock;
    NSError *_error;
    BOOL _operationEnded;
    BOOL _operationAborted;
    BOOL _silent;
    BOOL _canAbortNow;
    BOOL _inAbortProcess;
    NSInteger _currentMark;
    void *_reserved;
    <AYNotificationDelegate> *_notificationDelegate;
    NSMutableDictionary *_privateInfos;
}

+ (void)_initCurrentThread;
+ (void)_initMainThread;
+ (void)initialize;
+ (void)_noLockForThread:(id)arg1;
+ (void)_lockForAllThreads;
+ (BOOL)_lockWaitingForOperation;
+ (void)lockOperations;
+ (void)unlockOperations;
+ (id)mainThread;
+ (BOOL)_dispatchNextOperationInQueue;
+ (void)_workerThread;
+ (void)_launchOneThread;
+ (void)pushInvocation:(id)arg1;
+ (BOOL)popOperation:(id)arg1;
+ (void)unblockAllOperationsForGroup:(id)arg1;
+ (void)endAllPendingOperationsOfGroup:(id)arg1 withError:(id)arg2;
+ (id)currentOperation;
+ (void)_setCurrentOperation:(id)arg1;

- (void)_setCurrentThread:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)async;
- (id)syncFor:(id)arg1;
- (id)synchronous;
- (void)_setCurrentChildOperation:(id)arg1;
- (id)_currentChildOperation;
- (id)parentOperation;
- (id)mainOperation;
- (id)operationThread;
- (id)baseThread;
- (BOOL)isAsync;
- (void)lockOperation;
- (void)unlockOperation;
- (void)_handleEventRecursively:(id)arg1;
- (void)_sendEventToThreadLocked:(id)arg1;
- (void)sendEventToThread:(id)arg1;
- (void)_startAbortProcess;
- (BOOL)handleEventInThread:(id)arg1;
- (void)abortOperation;
- (void)waitForOperationToEnd;
- (BOOL)hasOperationEnded;
- (void)resetOperation;
- (void)setOperationGroup:(id)arg1;
- (id)operationGroup;
- (void)setOperationCompanion:(id)arg1;
- (id)operationCompanion;
- (BOOL)isRunLoopBased;
- (void)runOperationWithTimeOut:(NSUInteger)arg1;
- (void)endOperationWithError:(id)arg1;
- (void)markWithTag:(NSInteger)arg1;
- (void)markWithTag:(NSInteger)arg1 notify:(BOOL)arg2;
- (NSInteger)currentMark;
- (void)setSilent:(BOOL)arg1;
- (BOOL)isSilent;
- (void)handleNotificationOfChildOperation:(id)arg1 notification:(id)arg2;
- (void)notifyWithName:(id)arg1 infos:(id)arg2;
- (void)setNotificationDelegate:(id)arg1;
- (id)notificationDelegate;
- (long long)operationProgress;
- (long long)operationTotal;
- (void)setCanAbortNow:(BOOL)arg1;
- (BOOL)canAbortNow;
- (void)operationWillAbort;
- (void)clearError;
- (void)setError:(id)arg1;
- (id)error;
- (void)finalizeOperation;
- (void)postOperation;
- (void)setInfo:(id)arg1 forKey:(id)arg2;
- (id)infoForKey:(id)arg1;
- (void)removeInfoForKey:(id)arg1;

@end
