/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableArray;



@interface NSSQLPredicateAnalyser : NSObject <NSPredicateVisitor>
{
    BOOL _compoundPredicate;
    NSMutableArray *_keys;
    NSMutableArray *_allModifierPredicates;
    NSMutableArray *_setExpressions;
    NSMutableArray *_subqueries;
}


- (id)init;
- (void)dealloc;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;
- (id)keypaths;
- (id)allModifierPredicates;
- (id)subqueries;
- (id)setExpressions;

@end
