/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary;



@interface OADFontScheme : NSObject 
{
    NSMutableDictionary *mMajorFont;
    NSMutableDictionary *mMinorFont;
}

+ (void)addFontEntry:(id)arg1 script:(id)arg2 typeface:(id)arg3;

- (id)init;
- (void)dealloc;
- (BOOL)isFontSchemeRef:(id)arg1;
- (id)fontForFontSchemeRef:(id)arg1;
- (NSUInteger)majorFontCount;
- (id)majorTypefaceForScript:(id)arg1;
- (id)majorFont;
- (NSUInteger)minorFontCount;
- (id)minorTypefaceForScript:(id)arg1;
- (id)minorFont;

@end
