/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSMutableDictionary, AccountsManager;



@interface ABRefreshController : NSObject 
{
    NSMutableDictionary *_lastAccountRefreshDates;
    NSMutableDictionary *_lastGroupListRefreshDates;
    AccountsManager *_accountsManager;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)mobileAccounts;
- (void)_actuallyRefreshAccountsWithAddressBook:(void*)arg1;
- (void)startRefreshingAccountsWithAddressBook:(void*)arg1;
- (BOOL)groupWrapperNeedsRefresh:(id)arg1;
- (BOOL)accountGroupListNeedsRefresh:(id)arg1;
- (void)refreshGroupWrapper:(id)arg1;
- (void)refreshAccountGroupList:(id)arg1;

@end
