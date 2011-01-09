/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDCharacterRun, WMStyle, NSString;



@interface WMCharacterRunMapper : CMMapper 
{
    WDCharacterRun *wdCharacterRun;
    WMStyle *mStyle;
    NSString *mText;
}

+ (void)addNonCollapsableSpanAt:(id)arg1 withState:(id)arg2;

- (id)initWithWDCharacterRun:(id)arg1 parent:(id)arg2;
- (id)initWithText:(id)arg1;
- (void)dealloc;
- (void)map1At:(id)arg1 withState:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapSubstring:(id)arg1 at:(id)arg2;
- (void)mapTabs:(NSUInteger)arg1 at:(id)arg2 afterText:(id)arg3;
- (NSUInteger)countAndStripLeadingTabs;
- (id)boldStyle;
- (id)createCharacterStyle;
- (id)baseStyle;
- (NSInteger)defaultTabWidth;

@end
