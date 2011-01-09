/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;



@interface ECCurrencyEntry : NSObject 
{
    NSString *mLassoCurrencyCode;
    NSString *mXlLangId;
    NSString *mXlCurrencySymbol;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mAppliesToExport;

    NSInteger mXlAccountingFormat;
}

+ (id)currencyWithLassoCode:(id)arg1 langId:(NSInteger)arg2 xlSymbol:(id)arg3;
+ (id)currencyWithLassoCode:(id)arg1 langId:(NSInteger)arg2 xlSymbol:(id)arg3 accountingFormat:(NSInteger)arg4;
+ (id)currencyWithLassoCode:(id)arg1 langId:(NSInteger)arg2 xlSymbol:(id)arg3 isExport:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg4;
     /* Encoded args for previous method: @24@0:4@8i12@16B20 */

+ (id)currencyWithLassoCode:(id)arg1 langId:(NSInteger)arg2 xlSymbol:(id)arg3 isExport:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg4 accountingFormat:(NSInteger)arg5;
     /* Encoded args for previous method: @28@0:4@8i12@16B20i24 */


- (id)initWithLassoCode:(id)arg1 langId:(NSInteger)arg2 xlSymbol:(id)arg3 isExport:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg4 accountingFormat:(NSInteger)arg5;
     /* Encoded args for previous method: @28@0:4@8i12@16B20i24 */

- (void)dealloc;

@end
