/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLCredentialStorageInternal;



@interface NSURLCredentialStorage : NSObject 
{
    NSURLCredentialStorageInternal *_internal;
}

+ (id)sharedCredentialStorage;

- (void)dealloc;
- (id)init;
- (id)credentialsForProtectionSpace:(id)arg1;
- (id)allCredentials;
- (void)setCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (id)defaultCredentialForProtectionSpace:(id)arg1;
- (void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (id)_internalInit;

@end
