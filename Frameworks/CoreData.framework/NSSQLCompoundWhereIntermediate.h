/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableArray;



@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate 
{
    NSMutableArray *_subclauses;
}


- (id)initWithPredicate:(id)arg1 inScope:(id)arg2 inContext:(id)arg3;
- (void)dealloc;
- (id)_generateMulticlauseStringInContext:(id)arg1;
- (id)generateSQLStringInContext:(id)arg1;
- (BOOL)isOrScoped;

@end
