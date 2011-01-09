/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class MobileCalDAVAccountRefreshActor;



@interface MobileCalDAVAccountRefreshQueueableOperation : CalDAVQueueableOperation <CalDAVRefreshActorCallback>
{
    MobileCalDAVAccountRefreshActor *_refreshActor;
}

@property(readonly) CalDAVRefreshContext *context;


- (id)initWithQueue:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (id)context;
- (id)readableDescription;
- (void)performOperation;
- (oneway void)calDAVRefreshCompletedWithError:(id)arg1 backgroundActor:(id)arg2;
- (void)finishOperation;
- (void)cancel;

@end
