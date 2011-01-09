/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDParagraphProperties, NSMutableArray;



@interface WDParagraph : WDBlock 
{
    WDParagraphProperties *mProperties;
    NSMutableArray *mRuns;
}


- (id)initWithText:(id)arg1;
- (id)initWithText:(id)arg1 string:(id)arg2;
- (void)dealloc;
- (id)properties;
- (id)runs;
- (NSInteger)runCount;
- (id)runAt:(NSInteger)arg1;
- (void)addRun:(id)arg1;
- (void)removeRun:(id)arg1;
- (id)addCharacterRun;
- (id)addAnnotation:(NSInteger)arg1;
- (id)addFootnote;
- (id)addEndnote;
- (id)addFieldMarker;
- (id)addFieldMarker:(NSInteger)arg1;
- (id)addSymbol;
- (id)addSpecialCharacter;
- (id)addBookmark;
- (id)addBookmark:(id)arg1 type:(NSInteger)arg2;
- (id)addDateTime:(id)arg1;
- (void)removeLastCharacter:(unsigned short)arg1;
- (id)runIterator;
- (NSInteger)blockType;
- (BOOL)isEmpty;
- (NSInteger)characterCount;
- (BOOL)isTextFrame;
- (BOOL)isContinuationOf:(id)arg1;
- (id)addPicture;
- (id)addFormField;
- (id)addOfficeArt;
- (id)addOfficeArtAtIndex:(NSInteger)arg1;
- (NSInteger)indexOfRun:(id)arg1 offset:(NSInteger)arg2;

@end
