/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableDictionary, NSString, NSError;



@interface ASAutodiscoverTask : ASTask 
{
    NSString *_serverURL;
    NSString *_emailAddress;
    NSString *_redirectEmail;
    NSMutableDictionary *_accountInfo;
    NSError *_discoveryError;
}


- (id)initWithURL:(id)arg1 emailAddress:(id)arg2;
- (void)dealloc;
- (double)timeoutInterval;
- (id)_url;
- (id)_easVersion;
- (id)_policyKey;
- (id)contentType;
- (BOOL)expectsWBXML;
- (id)requestBody;
- (BOOL)processContext:(id)arg1;
- (id)localizedErrorStringForCertificateErrorCode:(NSInteger)arg1 host:(id)arg2;
- (void)_handleServerNode:(struct _xmlNode { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
- (void)_handleErrorNode:(struct _xmlNode { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
- (void)_handleActionNode:(struct _xmlNode { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
- (void)_handleUserNode:(struct _xmlNode { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
- (void)_setAccountInfoFromAutoDiscoveryXML:(id)arg1;
- (void)didProcessContext:(id)arg1;
- (void)finishWithError:(id)arg1;
- (BOOL)requiresEASVersionInformaton;
- (BOOL)shouldLogIncomingData;

@end
