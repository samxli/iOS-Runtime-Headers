/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class mutationsPtr, <NSFastEnumeration>;



@interface __NSFastEnumerationEnumerator : NSEnumerator 
{
    <NSFastEnumeration> *_obj;
    id _origObj;

  /* Error parsing encoded ivar type info: {?="state"L"itemsPtr"^@"mutationsPtr"^L"extra"[5L]} */
    /* Warning: unhandled struct encoding: '{?="state"L"itemsPtr"^@"mutationsPtr"^L"extra"[5L]}' */ struct { 
        unsigned long state; 
        mutationsPtr **itemsPtr; 
    } _state;

    NSUInteger _count;
    NSUInteger _mut;
}


- (id)initWithObject:(id)arg1;
- (id)nextObject;
- (void)dealloc;

@end
