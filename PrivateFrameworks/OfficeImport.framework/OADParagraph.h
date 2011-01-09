/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADParagraphProperties, NSMutableArray, OADCharacterProperties;



@interface OADParagraph : NSObject 
{
    OADParagraphProperties *mProperties;
    NSMutableArray *mTextRuns;
    OADCharacterProperties *mParagraphEndCharacterProperties;
}


- (id)init;
- (void)dealloc;
- (id)properties;
- (BOOL)isEmpty;
- (NSUInteger)textRunCount;
- (id)textRunAtIndex:(NSUInteger)arg1;
- (id)addTextLineBreak;
- (id)addRegularTextRun;
- (id)addGenericTextField;
- (id)addDateTimeField;
- (id)paragraphEndCharacterProperties;
- (BOOL)hasBulletCharacterProperties;
- (id)bulletCharacterProperties;
- (void)setParentTextListStyle:(id)arg1;
- (id)plainText;
- (id)addSlideNumberField;

@end
