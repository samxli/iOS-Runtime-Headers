/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface GQDTTableModel : NSObject <GQDNameMappable>
{
    unsigned short mColumnCount;
    unsigned short mRowCount;
    struct __CFString { } *mName;
    BOOL mNameVisible;
    struct __CFArray { } *mColumnWidths;
    struct __CFArray { } *mRowHeights;
    struct __CFArray { } *mColumnVisibilities;
    struct __CFArray { } *mRowVisibilities;
    unsigned short mHeaderRowCount;
    unsigned short mHeaderColumnCount;
    unsigned short mFooterRowCount;
    struct __CFArray { } *mCells;
    struct __CFArray { } *mColumnGroupDisplayTypes;
    NSInteger mNumGroupLevels;
}

+ (const struct StateSpec { int (**x1)(); char *x2; NSInteger x3; NSInteger x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (void)dealloc;
- (unsigned short)columnCount;
- (unsigned short)rowCount;
- (struct __CFString { }*)name;
- (BOOL)isNameVisible;
- (float)widthForColumn:(unsigned short)arg1;
- (float)heightForRow:(unsigned short)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)visibilityForColumn:(unsigned short)arg1;
     /* Encoded args for previous method: B12@0:4S8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)visibilityForRow:(unsigned short)arg1;
     /* Encoded args for previous method: B12@0:4S8 */

- (id)cellAt:(unsigned short)arg1;
- (struct __CFArray { }*)cells;
- (unsigned short)headerRowCount;
- (unsigned short)headerColumnCount;
- (unsigned short)footerRowCount;
- (NSInteger)typeOfVectorAlongGridline:(unsigned short)arg1 offset:(unsigned short)arg2 length:(unsigned short)arg3 vertical:(BOOL)arg4;
- (BOOL)hasGroupDisplayType:(unsigned short)arg1 level:(NSInteger)arg2 displayType:(NSInteger*)arg3 isTypeVisible:(BOOL*)arg4;
- (unsigned short)firstVisibleColumn;
- (NSInteger)numGroupLevels;
- (void)setNumGroupLevels:(NSInteger)arg1;
- (NSInteger)readAttributesForModel:(struct _xmlTextReader { }*)arg1;
- (NSInteger)readAttributesForGrid:(struct _xmlTextReader { }*)arg1;
- (NSInteger)addColumnWidthFrom:(struct _xmlTextReader { }*)arg1;
- (NSInteger)addRowHeightFrom:(struct _xmlTextReader { }*)arg1;
- (NSInteger)addGroupLevelsFrom:(struct _xmlTextReader { }*)arg1;
- (void)setCells:(struct __CFArray { }*)arg1;

@end
