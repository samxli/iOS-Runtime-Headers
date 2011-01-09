/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class DATaskManager;



@interface SubCalDATask : NSObject <DATask>
{
    DATaskManager *_taskManager;
    BOOL _finished;
}

@property DATaskManager *taskManager;


- (void)dealloc;
- (void)performTask;
- (void)cancelTaskWithReason:(NSInteger)arg1 underlyingError:(id)arg2;
- (void)finishWithError:(id)arg1;
- (void)willFinish;
- (void)performDelegateCallbackWithError:(id)arg1;
- (void)didFinish;
- (id)taskManager;
- (void)setTaskManager:(id)arg1;
- (id)consumerDictKey;

@end
