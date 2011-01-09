/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaPropertyPredicateInternal;



@interface MPMediaPropertyPredicate : MPMediaPredicate 
{
    MPMediaPropertyPredicateInternal *_internal;
}

@property(copy) NSString *property;
@property(copy) id value;
@property NSInteger comparisonType;

+ (id)predicateWithValue:(id)arg1 forProperty:(id)arg2;
+ (id)predicateWithValue:(id)arg1 forProperty:(id)arg2 comparisonType:(NSInteger)arg3;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)property;
- (void)setProperty:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (NSInteger)comparisonType;
- (void)setComparisonType:(NSInteger)arg1;

@end
