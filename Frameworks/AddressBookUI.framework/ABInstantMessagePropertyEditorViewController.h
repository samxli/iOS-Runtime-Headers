/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIButton, <ABPropertyEditorViewControllerDelegate>;



@interface ABInstantMessagePropertyEditorViewController : UITableViewController 
{
    void *_addressBook;
    void *_person;
    NSInteger _identifier;
    UIButton *_saveButton;
    <ABPropertyEditorViewControllerDelegate> *_delegate;
}

@property(readonly) NSInteger property;
@property(readonly) BOOL hasChanges;
@property <ABPropertyEditorViewControllerDelegate> *delegate;
@property NSInteger identifier;
@property void *person;
@property void *addressBook;


- (id)init;
- (void)dealloc;
- (void)setAddressBook:(void*)arg1;
- (void)setPerson:(void*)arg1;
- (NSInteger)property;
- (BOOL)hasChanges;
- (BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg1;
- (BOOL)_allowsAutorotation;
- (void)cancel:(id)arg1;
- (void)save:(id)arg1;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)preparedTextEditingCellForTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (NSInteger)identifier;
- (void)setIdentifier:(NSInteger)arg1;
- (void*)person;
- (void*)addressBook;

@end
