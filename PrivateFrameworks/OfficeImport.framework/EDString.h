/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDSortedCollection, NSString, EDPhoneticInfo;



@interface EDString : NSObject <NSCopying>
{
    NSString *mString;
    EDSortedCollection *mRuns;
    EDPhoneticInfo *mPhoneticInfo;
}

+ (id)string;
+ (id)edStringWithString:(id)arg1;

- (id)init;
- (void)dealloc;
- (BOOL)isEqualToString:(id)arg1;
- (BOOL)isEqualToEDString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)string;
- (void)setString:(id)arg1;
- (id)phoneticInfo;
- (void)setPhoneticInfo:(id)arg1;
- (id)runs;

@end
