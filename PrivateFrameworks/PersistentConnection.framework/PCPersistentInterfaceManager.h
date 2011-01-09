/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class NSString, NSRecursiveLock, NSThread, <PCPersistentInterfaceManagerDelegate>;



@interface PCPersistentInterfaceManager : NSObject 
{
    NSString *_identifier;
    NSRecursiveLock *_lock;
    NSThread *_thread;
    <PCPersistentInterfaceManagerDelegate> *_delegate;
    double _lastActivationTime;
    unsigned int _assertionWasRequested : 1;
    unsigned int _isDataActive : 1;
    unsigned int _isInHomeCountry : 1;
    struct __CTServerConnection { } *_ctServerConnection;
    struct __CFRunLoopSource { } *_ctServerRunLoopSource;
    struct __CFMachPort { } *_cfMachPort;
    void *_interfaceAssertion;
    NSString *_lastRegistrationStatus;
}

+ (id)interfaceName;
+ (BOOL)doesInterfaceExist;
+ (BOOL)isInterfaceUp;
+ (void)prepareSocketForPush:(NSInteger)arg1;
+ (void)prepareStreamForPush:(struct __CFReadStream { }*)arg1;
+ (id)urlConnectionForPushWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(BOOL)arg3 maxContentLength:(long long)arg4 startImmediately:(BOOL)arg5 connectionProperties:(id)arg6;

- (id)initWithIdentifier:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (BOOL)isInterfaceUp;
- (BOOL)isInHomeCountry;
- (BOOL)_keepInterfaceUpLocked;
- (void)keepInterfaceUp:(BOOL)arg1;
- (void)_invalidated;
- (void)_invalidatedMakeConnection;
- (void)_makeConnectionLocked;
- (void)_purgeConnectionLocked;
- (void)_handleCTServerMessage:(void*)arg1;
- (void)_serverCallback:(struct __CFString { }*)arg1 info:(struct __CFDictionary { }*)arg2;
- (void)_performDataActiveCallout;
- (void)_performInHomeCountryCallout;

@end
