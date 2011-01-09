/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary;



@interface UIContinuation : NSObject <UIContinuation>
{
    NSMutableDictionary *_properties;
    id _continuationContext;
    id _continuationTarget;
    SEL _continuationSelector;
}


- (id)initWithTarget:(id)arg1 context:(id)arg2 continuationSelector:(SEL)arg3;
- (id)context;
- (void)dealloc;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (void)doContinuation;

@end
