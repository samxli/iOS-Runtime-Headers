/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSString;



@interface DADConnectionForRefreshProtocol : NSObject <AccountRefreshProtocol>
{
    NSString *_accountIdentifier;
}

+ (id)accountToRefreshForBasicAccount:(id)arg1;

- (id)initWithBasicAccount:(id)arg1;
- (void)dealloc;
- (BOOL)refreshContainerWithIdentifier:(id)arg1 forDataclass:(id)arg2;
- (BOOL)refreshContainersForDataclass:(id)arg1;
- (BOOL)refreshContainerListForDataclass:(id)arg1;
- (id)defaultContainerIdentifierForDataclass:(id)arg1;

@end
