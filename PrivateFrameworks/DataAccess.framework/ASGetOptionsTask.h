/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSArray;



@interface ASGetOptionsTask : ASTask 
{
    NSArray *_versionArray;
    NSArray *_commandArray;
}

+ (void)__setUsePort:(BOOL)arg1;

- (id)httpMethod;
- (id)requestBody;
- (BOOL)_shouldAuth;
- (NSInteger)commandCode;
- (BOOL)expectsWBXML;
- (NSInteger)connectionActionForResponse:(id)arg1;
- (BOOL)processContext:(id)arg1;
- (id)_url;
- (void)finishWithError:(id)arg1;
- (void)dealloc;
- (id)versionArray;
- (void)setVersionArray:(id)arg1;
- (id)commandArray;
- (void)setCommandArray:(id)arg1;
- (BOOL)requiresEASVersionInformaton;

@end
