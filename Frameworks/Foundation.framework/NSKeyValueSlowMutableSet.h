/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSKeyValueSetter, NSKeyValueGetter;



@interface NSKeyValueSlowMutableSet : NSKeyValueMutableSet 
{
    NSKeyValueGetter *_valueGetter;
    NSKeyValueSetter *_valueSetter;
    BOOL _treatNilValuesLikeEmptySets;
    BOOL _padding[3];
}

+ (struct { NSUInteger x1; id x2[4]; }*)_proxyNonGCPoolPointer;

- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (void)_proxyNonGCFinalize;
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;
- (id)_setValueWithSelector:(SEL)arg1;
- (NSUInteger)count;
- (id)member:(id)arg1;
- (id)objectEnumerator;
- (id)_createMutableSetValueWithSelector:(SEL)arg1;
- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)setSet:(id)arg1;
- (void)unionSet:(id)arg1;

@end
