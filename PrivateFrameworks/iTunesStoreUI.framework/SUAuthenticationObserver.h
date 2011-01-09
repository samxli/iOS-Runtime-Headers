/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUAuthenticationDelegate>, NSTimer;



@interface SUAuthenticationObserver : NSObject 
{
    <SUAuthenticationDelegate> *_delegate;
    double _timeout;
    NSTimer *_timeoutTimer;
    NSInteger _watchingAuthenticationCount;
}

@property(getter=isWatchingForAuthentication,readonly) BOOL watchingForAuthentication;
@property double timeout;
@property <SUAuthenticationDelegate> *delegate;


- (void)dealloc;
- (void)beginWatchingForAuthentication;
- (void)endWatchingForAuthentication;
- (BOOL)isWatchingForAuthentication;
- (void)_authenticationBeganNotification:(id)arg1;
- (void)_authenticationFailedNotification:(id)arg1;
- (void)_authenticationFinishedNotification:(id)arg1;
- (void)_authenticationSubmittedNotification:(id)arg1;
- (void)_authenticationTimeout:(id)arg1;
- (void)_cancelTimeoutTimer;
- (void)_sendFailureToDelegate;
- (void)_sendSuccessToDelegate;
- (void)_sendTimeoutToDelegate;
- (void)_teardown;
- (double)timeout;
- (void)setTimeout:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
