/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, UITableViewCellReorderControl, UITableViewCell, UITableViewCellDeleteConfirmationControl, UITableViewCellEditControl;



@interface UITableViewCellEditingData : NSObject 
{
    UITableViewCell *_cell;
    NSInteger _editingStyle;
    UITableViewCellEditControl *_editControl;
    UITableViewCellReorderControl *_reorderControl;
    UITableViewCellDeleteConfirmationControl *_deleteConfirmationControl;
    UIView *_reorderSeparatorView;
}

@property(getter=isDataRequired,readonly) BOOL dataRequired;


- (id)initWithTableViewCell:(id)arg1 editingStyle:(NSInteger)arg2;
- (void)dealloc;
- (BOOL)isDataRequired;
- (id)editControl:(BOOL)arg1;
- (id)reorderControl:(BOOL)arg1;
- (id)deleteConfirmationControl:(BOOL)arg1;
- (id)reorderSeparatorView:(BOOL)arg1;

@end
