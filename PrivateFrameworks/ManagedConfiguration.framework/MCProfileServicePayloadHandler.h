/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSArray, NSString, NSDictionary, NSURL;



@interface MCProfileServicePayloadHandler : MCPayloadHandler 
{
    NSArray *_deviceAttributes;
    NSString *_url;
    NSString *_challenge;
    NSDictionary *_scep;
    BOOL _reenroll;
    NSString *_username;
    NSString *_password;
    void *_conn;
    void *_identity;
    NSInteger _phase;
    NSURL *_reenroll_url;
}

+ (id)registration;
+ (BOOL)saveRegistration;
+ (id)descriptionForPayloadCount:(NSUInteger)arg1;
+ (BOOL)shouldValidateCommonAttributes;
+ (BOOL)mayProduceProfileUpdate:(id)arg1;
+ (BOOL)produceProfileUpdate:(id)arg1;
+ (id)updateURL:(id)arg1;

- (id)initWithPayload:(id)arg1;
- (void)dealloc;
- (id)displayName;
- (id)url;
- (void)setReenroll;
- (id)reenroll_url;
- (id)UUID;
- (void*)lockdownValue:(struct __CFString { }*)arg1;
- (struct __SecIdentity { }*)lockdownIdentity;
- (void)lockdownSignOff;
- (id)buildMachineIdentification;
- (id)performMachineIdentification:(struct __SecIdentity { }*)arg1;
- (id)profileServiceIdentity;
- (id)performInstallStep;
- (id)performInstallStep:(NSInteger)arg1 withRoot:(id)arg2 truth:(id)arg3;
- (id)customTitleForCurrentInstallPhase;

@end
