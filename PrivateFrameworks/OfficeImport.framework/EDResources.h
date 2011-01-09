/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDStylesCollection, EDContentFormatsCollection, EDTableStylesCollection, EDFontsCollection, EDLinksCollection, EDColorsCollection, EDCollection;



@interface EDResources : NSObject 
{
    EDCollection *mStrings;
    EDContentFormatsCollection *mContentFormats;
    EDFontsCollection *mFonts;
    EDCollection *mAlignmentInfos;
    EDStylesCollection *mStyles;
    EDColorsCollection *mColors;
    EDColorsCollection *mThemes;
    EDCollection *mNames;
    EDLinksCollection *mLinks;
    EDCollection *mBorders;
    EDCollection *mBorder;
    EDCollection *mFills;
    EDCollection *mDifferentialStyles;
    EDTableStylesCollection *mTableStyles;
}


- (id)initWithStringOptimization:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: @12@0:4B8 */

- (void)dealloc;
- (id)strings;
- (id)contentFormats;
- (id)fonts;
- (id)alignmentInfos;
- (id)styles;
- (id)colors;
- (id)themes;
- (id)names;
- (id)links;
- (id)borders;
- (id)border;
- (id)fills;
- (id)differentialStyles;
- (id)tableStyles;
- (void)setColors:(id)arg1;
- (void)setThemes:(id)arg1;

@end
