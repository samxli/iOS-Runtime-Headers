/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSMutableDictionary, NSLock, NSString;



@interface CPDistributedNotificationCenter : NSObject 
{
    NSString *_centerName;
    NSLock *_lock;
    struct __CFRunLoopSource { } *_receiveNotificationSource;
    BOOL _isServer;
    NSMutableDictionary *_sendPorts;
    NSUInteger _startCount;
}

+ (id)centerNamed:(id)arg1;

- (id)_initWithServerName:(id)arg1;
- (void)dealloc;
- (id)name;
- (void)_createReceiveSourceForRunLoop:(struct __CFRunLoop { }*)arg1;
- (void)_checkIn;
- (void)_checkOutAndRemoveSource;
- (void)_notificationServerWasRestarted;
- (void)startDeliveringNotificationsToMainThread;
- (void)startDeliveringNotificationsToRunLoop:(struct __CFRunLoop { }*)arg1;
- (void)stopDeliveringNotifications;
- (void)deliverNotification:(id)arg1 userInfo:(id)arg2;
- (void)runServerOnCurrentThread;
- (void)postNotificationName:(id)arg1;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2;
- (BOOL)postNotificationName:(id)arg1 userInfo:(id)arg2 toBundleIdentifier:(id)arg3;
- (void)_receivedCheckIn:(NSUInteger)arg1 auditToken:(struct { NSUInteger x1[8]; }*)arg2;
- (void)_receivedCheckOut:(struct __CFMachPort { }*)arg1;

@end
