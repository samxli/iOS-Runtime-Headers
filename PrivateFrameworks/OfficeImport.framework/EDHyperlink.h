/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDString, EDReference;



@interface EDHyperlink : NSObject 
{
    EDString *mPath;
    EDString *mDosPath;
    EDString *mDescriptionText;
    EDString *mTextMark;
    EDString *mToolTip;
    EDReference *mReference;
    NSInteger mType;
}

+ (id)hyperlink;

- (void)dealloc;
- (id)path;
- (void)setPath:(id)arg1;
- (id)dosPath;
- (void)setDosPath:(id)arg1;
- (id)descriptionText;
- (void)setDescriptionText:(id)arg1;
- (id)textMark;
- (void)setTextMark:(id)arg1;
- (id)toolTip;
- (void)setToolTip:(id)arg1;
- (id)reference;
- (void)setReference:(id)arg1;
- (NSInteger)type;
- (void)setType:(NSInteger)arg1;

@end
