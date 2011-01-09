/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */



@interface ML3BitMaskPredicate : ML3PropertyPredicate 
{
    long long _mask;
    long long _value;
}

@property long long value;
@property long long mask;

+ (id)predicateWithProperty:(id)arg1 mask:(long long)arg2 value:(long long)arg3;

- (id)initWithProperty:(id)arg1 mask:(long long)arg2 value:(long long)arg3;
- (void)dealloc;
- (id)description;
- (id)SQLForEntityClass:(Class)arg1;
- (void)bindToSqlite3Statement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout NSInteger*)arg2;
- (long long)value;
- (void)setValue:(long long)arg1;
- (long long)mask;
- (void)setMask:(long long)arg1;

@end
