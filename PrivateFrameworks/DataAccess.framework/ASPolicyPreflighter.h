/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString, ASTaskManager, ASPolicy, ASAccount;



@interface ASPolicyPreflighter : NSObject 
{
    ASAccount *_account;
    NSString *_originalKey;
    NSString *_newKey;
    id _delegate;
    ASPolicy *_policy;
    ASPolicy *_acknowledgedPolicy;
    ASTaskManager *_taskManager;
    id _contextInfo;
    BOOL _invalidated;
}


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setContextInfo:(id)arg1;
- (id)contextInfo;
- (void)_invalidate;
- (void)invalidate;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 policyKey:(id)arg2;
- (id)account;
- (void)_setPolicy:(id)arg1;
- (void)_setAcknowledgedPolicy:(id)arg1;
- (id)_acknowledgedPolicy;
- (id)_originalKey;
- (void)provisionTask:(id)arg1 failedWithError:(id)arg2;
- (void)provisionTask:(id)arg1 wipeRequested:(BOOL)arg2 policies:(id)arg3 status:(NSInteger)arg4;
- (void)startPreflight;
- (void)acknowledgePolicyCompliance;
- (void)acknowledgeIntentionToRemoteWipe;
- (void)cancelPendingPreflightRequest;

@end
