/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSNumber, NSString, NSDictionary;



@interface ASChangedCollectionLeaf : ASItem 
{
    NSInteger _changeType;
    NSString *_serverID;
    NSString *_clientID;
    NSNumber *_status;
    BOOL _isResponse;
    BOOL _validateOpeningTokens;
    NSDictionary *_applicationData;
}

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;

- (id)init;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (void)loadClientIDs;
- (NSInteger)classType;
- (void)dealloc;
- (NSInteger)changeType;
- (void)setChangeType:(NSInteger)arg1;
- (id)serverID;
- (void)setServerID:(id)arg1;
- (id)clientID;
- (void)setClientID:(id)arg1;
- (id)status;
- (void)setStatus:(id)arg1;
- (void)setValidateOpeningTokens:(BOOL)arg1;
- (id)applicationData;
- (void)setApplicationData:(id)arg1;
- (BOOL)isResponse;
- (id)asParseRules;

@end
