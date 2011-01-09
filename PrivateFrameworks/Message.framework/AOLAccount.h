/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */



@interface AOLAccount : IMAPAccount 
{
}

+ (id)emailAddressHostPart;
+ (id)defaultPathNameForAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)displayedAccountTypeString;
+ (BOOL)isPredefinedAccountType;
+ (id)hostname;
+ (BOOL)usernameIsEmailAddress;
+ (id)_usernameWithoutHostname:(id)arg1;
+ (id)_usernameWithHostname:(id)arg1;
+ (id)accountPropertiesValueForKey:(id)arg1 value:(id)arg2;
+ (id)deliveryAccountHostname;
+ (BOOL)deliveryAccountUsesSSL;
+ (NSUInteger)deliveryAccountPortNumber;

- (id)_defaultSpecialMailboxNameForType:(NSInteger)arg1;
- (id)hostname;
- (void)setHostname:(id)arg1;
- (id)emailAddresses;
- (id)displayUsername;
- (id)username;
- (void)setUsername:(id)arg1;
- (BOOL)usesSSL;
- (void)setUsesSSL:(BOOL)arg1;
- (id)_deliveryAccountCreateIfNeeded:(BOOL)arg1;

@end
