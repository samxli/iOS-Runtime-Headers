/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

@class UILabel, NSArray;



@interface AccountSettingsUIAccountCell : PSTableCell 
{
    UILabel *_dataclassesLabel;
    NSArray *_enabledDataclasses;
    NSArray *_supportedDataclasses;
}

+ (float)desiredRowHeight;

- (void)dealloc;
- (id)enabledDataclassesTextForWidth:(float)arg1;
- (void)setEnabledDataclasses:(id)arg1 supportedDataclasses:(id)arg2;
- (void)layoutSubviews;
- (void)updateHighlightColors;

@end
