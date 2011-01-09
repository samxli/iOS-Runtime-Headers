/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIButton, NSString, <ABPersonTableActionDelegate>;



@interface ABPersonTableAction : NSObject 
{
    NSString *_title;
    NSString *_shortTitle;
    BOOL _displaysShortTitle;
    NSString *_differentiationSheetTitle;
    BOOL _allowDifferentiationSheet;
    id _target;
    SEL _selector;
    BOOL _deleteStyle;
    NSInteger _property;
    struct __CFArray { } *_properties;
    NSInteger _grouping;
    NSInteger _ordering;
    UIButton *_button;
    <ABPersonTableActionDelegate> *_delegate;
}

@property(readonly) UIButton *button;
@property(readonly) UITableViewCell *tableViewCell;
@property __CFArray *properties;
@property NSInteger ordering;
@property NSInteger grouping;
@property(readonly) UIButton *existingButton;
@property(readonly) NSInteger property;
@property(readonly) SEL selector;
@property(readonly) id target;
@property BOOL displaysShortTitle;
@property(readonly) NSString *shortTitle;
@property(readonly) NSString *title;
@property BOOL allowDifferentiationSheet;
@property(copy) NSString *differentiationSheetTitle;
@property <ABPersonTableActionDelegate> *delegate;

+ (BOOL)array:(id)arg1 containsActionWithTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 property:(NSInteger)arg5 ordering:(NSInteger)arg6 outIndex:(NSInteger*)arg7;

- (id)initWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 property:(NSInteger)arg5 deleteStyle:(BOOL)arg6;
- (id)initWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 property:(NSInteger)arg4 deleteStyle:(BOOL)arg5;
- (id)initWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 deleteStyle:(BOOL)arg4;
- (id)initWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 property:(NSInteger)arg5;
- (void)dealloc;
- (void)setProperties:(struct __CFArray { }*)arg1;
- (NSInteger)compareOrderingToAction:(id)arg1;
- (id)tableViewCell;
- (void)prepareTableViewCell:(id)arg1;
- (void)setDisplaysShortTitle:(BOOL)arg1;
- (id)button;
- (void)performWithSender:(id)arg1 property:(NSInteger)arg2 identifier:(NSInteger)arg3;
- (void)buttonClicked:(id)arg1;
- (id)description;
- (struct __CFArray { }*)properties;
- (NSInteger)ordering;
- (void)setOrdering:(NSInteger)arg1;
- (NSInteger)grouping;
- (void)setGrouping:(NSInteger)arg1;
- (id)existingButton;
- (NSInteger)property;
- (SEL)selector;
- (id)target;
- (BOOL)displaysShortTitle;
- (id)shortTitle;
- (id)title;
- (BOOL)allowDifferentiationSheet;
- (void)setAllowDifferentiationSheet:(BOOL)arg1;
- (id)differentiationSheetTitle;
- (void)setDifferentiationSheetTitle:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
