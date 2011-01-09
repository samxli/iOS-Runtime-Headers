/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString;



@interface ML3ComparisonPredicate : ML3PropertyPredicate 
{
    id _value;
    NSString *_transformFunction;
    NSInteger _comparison;
    BOOL _caseInsensitive;
    BOOL _treatNullAsBlank;
}

@property(readonly) NSString *operator;
@property(copy) NSString *transformFunction;
@property BOOL treatNullAsBlank;
@property BOOL caseInsensitive;
@property NSInteger comparison;
@property(retain) id value;

+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(NSInteger)arg3;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(NSInteger)arg3 caseInsensitive:(BOOL)arg4;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(NSInteger)arg3 caseInsensitive:(BOOL)arg4 treatNullAsBlank:(BOOL)arg5;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(NSInteger)arg3 transformFunction:(id)arg4;

- (id)initWithProperty:(id)arg1 value:(id)arg2 comparison:(NSInteger)arg3 caseInsensitive:(BOOL)arg4 transformFunction:(id)arg5 treatNullAsBlank:(BOOL)arg6;
- (void)dealloc;
- (id)description;
- (id)operator;
- (id)SQLForEntityClass:(Class)arg1;
- (void)bindToSqlite3Statement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout NSInteger*)arg2;
- (id)transformFunction;
- (void)setTransformFunction:(id)arg1;
- (BOOL)treatNullAsBlank;
- (void)setTreatNullAsBlank:(BOOL)arg1;
- (BOOL)caseInsensitive;
- (void)setCaseInsensitive:(BOOL)arg1;
- (NSInteger)comparison;
- (void)setComparison:(NSInteger)arg1;
- (id)value;
- (void)setValue:(id)arg1;

@end
