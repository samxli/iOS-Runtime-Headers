/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABItemLabelPicker, NSArray, ABEditorModel;



@interface ABLabelPickerViewController : UIViewController 
{
    ABEditorModel *_model;
    NSArray *_additionalLabels;
    NSInteger _property;
    ABItemLabelPicker *_labelPicker;
    id _delegate;
}


- (id)initWithModel:(id)arg1 additionalLabels:(id)arg2 property:(NSInteger)arg3;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (struct CGSize { float x1; float x2; })fullScreenContentSize;
- (id)labelPicker;
- (void)itemLabelPickerDidChangeSelection:(id)arg1;
- (void)itemLabelPickerDeletedLastCustomLabel:(id)arg1;
- (void)itemLabelPicker:(id)arg1 endedWithSelectionConfirmed:(BOOL)arg2 animate:(BOOL)arg3;
- (id)itemLabelPickerPresentSimpleTextInputLayerWithContext:(id)arg1;
- (BOOL)itemLabelPickerShouldDismissKeyboard:(id)arg1;
- (void)itemLabelPicker:(id)arg1 dismissSimpleTextInputLayer:(id)arg2 afterSelectionConfirmed:(BOOL)arg3;
- (BOOL)_allowsAutorotation;
- (BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; float x5; NSInteger x6; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_8_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_8_1_2; } x8; }*)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;

@end
