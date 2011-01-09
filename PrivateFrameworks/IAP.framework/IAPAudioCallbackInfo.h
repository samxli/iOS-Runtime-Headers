/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/IAP.framework/IAP
 */

@class NSLock, CPDistributedNotificationCenter;



@interface IAPAudioCallbackInfo : NSObject 
{
    int (*_deviceStateChangedCallback)();
    void *_deviceStateChangedContext;
    int (*_volumeChangedCallback)();
    void *_volumeChangedContext;
    int (*_pauseOnHeadphoneDisconnectChangedCallback)();
    void *_pauseOnHeadphoneDisconnectChangedContext;
    int (*_volumeControlSupportChangedCallback)();
    void *_volumeControlSupportChangedContext;
    CPDistributedNotificationCenter *_dnCenter;
    struct __CFRunLoop { } *_dnCenterRunLoop;
    NSLock *_lock;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)setupDeviceStateChangedCallback:(int (*)())arg1 withContext:(void*)arg2 andRunLoop:(struct __CFRunLoop { }*)arg3;
- (void)clearDeviceStateChangedCallback;
- (void)setupVolumeChangedCallback:(int (*)())arg1 withContext:(void*)arg2 andRunLoop:(struct __CFRunLoop { }*)arg3;
- (void)clearVolumeChangedCallback;
- (void)setupPauseOnHeadphoneDisconnectChangedCallback:(int (*)())arg1 withContext:(void*)arg2 andRunLoop:(struct __CFRunLoop { }*)arg3;
- (void)clearPauseOnHeadphoneDisconnectChangedCallback;
- (void)setupVolumeControlSupportChangedCallback:(int (*)())arg1 withContext:(void*)arg2 andRunLoop:(struct __CFRunLoop { }*)arg3;
- (void)clearVolumeControlSupportChangedCallback;
- (void)startNotificationCenterOnRunLoop:(struct __CFRunLoop { }*)arg1;
- (void)_deviceStateChanged:(id)arg1;
- (void)_volumeChanged:(id)arg1;
- (void)_pauseOnHeadphoneDisconnectChanged:(id)arg1;
- (void)_volumeControlSupportChanged:(id)arg1;

@end
