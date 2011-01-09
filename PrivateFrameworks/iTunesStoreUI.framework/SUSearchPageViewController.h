/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIKeyboard, NSString, SUTouchCaptureView, UISearchField, SUCompletionTableViewController;



@interface SUSearchPageViewController : SUStorePageViewController <UITextFieldDelegate, SUCompletionTableDelegate>
{
    NSInteger _assetTypesForSearchParameters;
    SUCompletionTableViewController *_completionsController;
    NSString *_hintsURLBagKey;
    UIKeyboard *_keyboard;
    SUTouchCaptureView *_keyboardBackstopView;
    UISearchField *_searchField;
    NSString *_searchTermForAppear;
}

@property(retain) NSString *hintsURLBagKey;
@property NSInteger assetTypesForSearchParameters;


- (id)initWithSection:(id)arg1;
- (void)dealloc;
- (id)copyArchivableContext;
- (id)createViewControllerForPage:(id)arg1 ofType:(NSInteger)arg2 returningError:(id*)arg3;
- (void)handleApplicationURL:(id)arg1;
- (void)purgeMemoryForReason:(NSInteger)arg1;
- (BOOL)reloadForSectionsWithGroup:(id)arg1;
- (void)resetNavigationItem:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)textFieldDidBecomeFirstResponder:(id)arg1;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (void)_backstopViewAction:(id)arg1;
- (void)_searchDidChange:(id)arg1;
- (void)_searchDidEndEditing:(id)arg1;
- (void)_hideKeyboardStopped:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_showKeyboardStopped:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)completionTableController:(id)arg1 pickedCompletionItem:(id)arg2;
- (id)_copyQueryStringDictionaryForTerm:(id)arg1;
- (void)_hideCompletionsController;
- (void)_hideKeyboardAnimated:(BOOL)arg1;
- (void)_fetchResultsForTerm:(id)arg1;
- (void)_fetchResultsForURL:(id)arg1;
- (void)_noEventSetSearchText:(id)arg1;
- (id)_searchField;
- (void)_setKeyboardVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setLastSearchTerm:(id)arg1;
- (void)_showCompletionsController;
- (void)_showKeyboardAnimated:(BOOL)arg1;
- (void)_updateCompletionsController;
- (id)hintsURLBagKey;
- (void)setHintsURLBagKey:(id)arg1;
- (NSInteger)assetTypesForSearchParameters;
- (void)setAssetTypesForSearchParameters:(NSInteger)arg1;

@end
