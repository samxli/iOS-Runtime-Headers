/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSNumber, NSString;



@interface MLSQLResultFilter : NSObject 
{
    NSNumber *_countLimit;
    NSNumber *_sumLimitValue;
    NSString *_sumLimitColumnName;
}

@property(copy) NSString *sumLimitColumnName;
@property(copy) NSNumber *sumLimitValue;
@property(copy) NSNumber *countLimit;


- (void)dealloc;
- (struct __CPRecordIDArray { }*)copyFilteredRecordIDArray:(struct __CPRecordIDArray { }*)arg1 limitValueArray:(struct __CFArray { }*)arg2;
- (id)sumLimitColumnName;
- (void)setSumLimitColumnName:(id)arg1;
- (id)sumLimitValue;
- (void)setSumLimitValue:(id)arg1;
- (id)countLimit;
- (void)setCountLimit:(id)arg1;

@end
