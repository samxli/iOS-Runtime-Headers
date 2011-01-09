/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSMutableDictionary, NSArray, NSString, UIModalView, NSMutableArray, UITransitionView, UIPreferencesTable, <PSBaseView>, PSSpecifier;



@interface PSListController : PSViewController 
{
    NSMutableDictionary *_cells;
    BOOL _cachesCells;
    NSString *_title;
    UITransitionView *_view;
    UIPreferencesTable *_table;
    NSArray *_specifiers;
    <PSBaseView> *_detailController;
    <PSBaseView> *_previousController;
    NSMutableArray *_controllers;
    NSMutableDictionary *_specifiersByID;
    BOOL _keyboardWasVisible;
    BOOL _showingSetupController;
    BOOL _selectingRow;
    NSString *_specifierID;
    PSSpecifier *_specifier;
    NSMutableArray *_groups;
    NSMutableArray *_bundleControllers;
    BOOL _bundlesLoaded;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _cellRect;
    UIModalView *_alertSheet;
}

+ (BOOL)displaysButtonBar;

- (void)setCachesCells:(BOOL)arg1;
- (id)description;
- (id)table;
- (id)bundle;
- (id)specifier;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2;
- (id)specifiers;
- (void)_addIdentifierForSpecifier:(id)arg1;
- (void)_removeIdentifierForSpecifier:(id)arg1;
- (void)_setSpecifiers:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (void)reloadSpecifierAtIndex:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)reloadSpecifierAtIndex:(NSInteger)arg1;
- (void)reloadSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)reloadSpecifier:(id)arg1;
- (void)reloadSpecifierID:(id)arg1 animated:(BOOL)arg2;
- (void)reloadSpecifierID:(id)arg1;
- (NSInteger)indexOfSpecifierID:(id)arg1;
- (NSInteger)indexOfSpecifier:(id)arg1;
- (BOOL)containsSpecifier:(id)arg1;
- (NSInteger)indexOfGroup:(NSInteger)arg1;
- (NSInteger)numberOfGroups;
- (id)specifierAtIndex:(NSInteger)arg1;
- (BOOL)getGroup:(NSInteger*)arg1 row:(NSInteger*)arg2 ofSpecifierID:(id)arg3;
- (BOOL)getGroup:(NSInteger*)arg1 row:(NSInteger*)arg2 ofSpecifier:(id)arg3;
- (BOOL)_getGroup:(NSInteger*)arg1 row:(NSInteger*)arg2 ofSpecifierAtIndex:(NSInteger)arg3 groups:(id)arg4;
- (BOOL)getGroup:(NSInteger*)arg1 row:(NSInteger*)arg2 ofSpecifierAtIndex:(NSInteger)arg3;
- (NSInteger)rowsForGroup:(NSInteger)arg1;
- (id)specifiersInGroup:(NSInteger)arg1;
- (void)insertSpecifier:(id)arg1 atIndex:(NSInteger)arg2 animated:(BOOL)arg3;
- (void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2 animated:(BOOL)arg3;
- (void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2 animated:(BOOL)arg3;
- (void)insertSpecifier:(id)arg1 atEndOfGroup:(NSInteger)arg2 animated:(BOOL)arg3;
- (void)insertSpecifier:(id)arg1 atIndex:(NSInteger)arg2;
- (void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2;
- (void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2;
- (void)insertSpecifier:(id)arg1 atEndOfGroup:(NSInteger)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 atIndex:(NSInteger)arg2 animated:(BOOL)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2 animated:(BOOL)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2 animated:(BOOL)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(NSInteger)arg2 animated:(BOOL)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 atIndex:(NSInteger)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(NSInteger)arg2;
- (void)addSpecifier:(id)arg1;
- (void)addSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)addSpecifiersFromArray:(id)arg1;
- (void)addSpecifiersFromArray:(id)arg1 animated:(BOOL)arg2;
- (void)removeSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)removeSpecifierID:(id)arg1 animated:(BOOL)arg2;
- (void)removeSpecifierAtIndex:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)removeSpecifier:(id)arg1;
- (void)removeSpecifierID:(id)arg1;
- (void)removeSpecifierAtIndex:(NSInteger)arg1;
- (void)removeLastSpecifier;
- (void)removeLastSpecifierAnimated:(BOOL)arg1;
- (BOOL)_canRemoveSpecifiers:(id)arg1;
- (void)removeContiguousSpecifiers:(id)arg1 animated:(BOOL)arg2;
- (void)removeContiguousSpecifiers:(id)arg1;
- (void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2;
- (void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2 animated:(BOOL)arg3;
- (void)_loadBundleControllers;
- (void)_unloadBundleControllers;
- (void)suspend;
- (void)dealloc;
- (id)initForContentSize:(struct CGSize { float x1; float x2; })arg1;
- (id)navigationTitle;
- (id)_createGroupIndices:(id)arg1;
- (void)createGroupIndices;
- (void)loseFocus;
- (void)reload;
- (void)reloadSpecifiers;
- (void)setSpecifierID:(id)arg1;
- (id)specifierID;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)viewDidBecomeVisible;
- (void)viewWillRedisplay;
- (NSInteger)numberOfGroupsInPreferencesTable:(id)arg1;
- (BOOL)preferencesTable:(id)arg1 isLabelGroup:(NSInteger)arg2;
- (NSInteger)preferencesTable:(id)arg1 numberOfRowsInGroup:(NSInteger)arg2;
- (id)lastController;
- (id)cachedCellForSpecifier:(id)arg1;
- (id)cachedCellForSpecifierID:(id)arg1;
- (id)table:(id)arg1 cellForRow:(NSInteger)arg2 column:(id)arg3;
- (float)preferencesTable:(id)arg1 heightForRow:(NSInteger)arg2 inGroup:(NSInteger)arg3 withProposedHeight:(float)arg4;
- (id)preferencesTable:(id)arg1 titleForGroup:(NSInteger)arg2;
- (id)preferencesTable:(id)arg1 cellForGroup:(NSInteger)arg2;
- (id)preferencesTable:(id)arg1 cellForRow:(NSInteger)arg2 inGroup:(NSInteger)arg3;
- (void)viewWillBecomeVisible:(void*)arg1;
- (void)_unselectTable;
- (void)selectRowWithoutNotification:(NSInteger)arg1;
- (void)showConfirmationSheetForSpecifier:(id)arg1;
- (BOOL)performActionForSpecifier:(id)arg1;
- (void)tableSelectionDidChange:(id)arg1;
- (void)alertSheet:(id)arg1 buttonClicked:(NSInteger)arg2;
- (void)_insertControllerUnderSetupController:(id)arg1;
- (id)specifierForID:(id)arg1;
- (void)pushController:(id)arg1 animate:(BOOL)arg2;
- (void)pushController:(id)arg1;
- (void)handleURL:(id)arg1;
- (void)_showKeyboard;
- (void)transitionViewDidComplete:(id)arg1;
- (id)view;
- (BOOL)popController;
- (void)_clearParentControllerFromChildren;
- (void)_removeController;
- (BOOL)popControllerWithAnimation:(BOOL)arg1;
- (void)navigationBarButtonClicked:(NSInteger)arg1;
- (void)reloadIconForSpecifierForBundle:(id)arg1;
- (void)showKeyboardWithKeyboardType:(NSInteger)arg1;
- (void)selectRowForSpecifier:(id)arg1;

@end
