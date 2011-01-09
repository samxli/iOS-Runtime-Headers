/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSArray;



@interface NSCompoundPredicate : NSPredicate 
{
    void *_reserved2;
    NSUInteger _type;
    NSArray *_subpredicates;
}

+ (id)andPredicateWithSubpredicates:(id)arg1;
+ (id)orPredicateWithSubpredicates:(id)arg1;
+ (id)notPredicateWithSubpredicate:(id)arg1;
+ (id)_operatorForType:(NSUInteger)arg1;

- (id)initWithType:(NSUInteger)arg1 subpredicates:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (NSUInteger)compoundPredicateType;
- (id)_predicateOperator;
- (id)subpredicates;
- (id)_subpredicateDescription:(id)arg1;
- (id)predicateFormat;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (void)_acceptSubpredicates:(id)arg1 flags:(NSUInteger)arg2;
- (void)acceptVisitor:(id)arg1 flags:(NSUInteger)arg2;
- (id)predicateWithSubstitutionVariables:(id)arg1;
- (id)predicateOperator;
- (id)minimalFormInContext:(id)arg1;

@end
