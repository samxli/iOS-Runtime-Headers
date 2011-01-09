/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLIntermediate;



@interface NSSQLIntermediate : NSObject 
{
    NSSQLIntermediate *_scope;
}

+ (BOOL)expressionIsBasicKeypath:(id)arg1;
+ (BOOL)isSimpleKeypath:(id)arg1;

- (id)initWithScope:(id)arg1;
- (id)scope;
- (id)generateSQLStringInContext:(id)arg1;
- (BOOL)isOrScoped;
- (BOOL)isSelectTargetScoped;
- (id)fetchContext;
- (id)fetchIntermediateForKeypathExpression:(id)arg1;
- (BOOL)expressionIsBasicKeypath:(id)arg1;
- (BOOL)isSimpleKeypath:(id)arg1;
- (BOOL)isVariableBasedKeypathScopedBySubquery:(id)arg1;
- (id)governingAlias;
- (id)governingAliasForKeypathExpression:(id)arg1;
- (id)governingEntityForKeypathExpression:(id)arg1;
- (id)_generateSQLForVariableExpression:(id)arg1 inContext:(id)arg2;
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)arg1;
- (id)_lastScopedItem;
- (BOOL)_functionExpressionIsSubqueryFollowedByKeypath:(id)arg1;
- (id)_generateSQLForConstantValue:(id)arg1 inContext:(id)arg2;
- (id)_generateSQLForFunctionExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3;
- (id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3;
- (id)_generateSQLForExpressionCollection:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3;
- (id)_generateSQLForConstantCollection:(id)arg1 inContext:(id)arg2;
- (id)_generateSQLForFetchExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3;
- (id)_generateSQLForSubqueryExpression:(id)arg1 trailingKeypath:(id)arg2 inContext:(id)arg3;
- (id)_generateSQLForTernaryExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3;
- (id)_generateSQLForExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3;

@end
