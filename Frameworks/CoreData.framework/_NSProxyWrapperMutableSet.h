/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class _NSFaultingMutableSetMutationMethods;



@interface _NSProxyWrapperMutableSet : _NSNotifyingWrapperMutableSet 
{
    _NSFaultingMutableSetMutationMethods *_mutationMethods;
}


- (void)dealloc;
- (id)initWithContainer:(id)arg1 key:(id)arg2 mutableSet:(id)arg3 mutationMethods:(id)arg4;
- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)setSet:(id)arg1;
- (void)unionSet:(id)arg1;

@end
