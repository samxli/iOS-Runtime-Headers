/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLManyToMany;



@interface NSSQLCorrelation : NSObject 
{
    NSSQLManyToMany *_manyToMany;
    long long _fk;
    long long _invfk;
}


- (id)initWithManyToMany:(id)arg1 fk:(long long)arg2 invfk:(long long)arg3;
- (void)dealloc;
- (id)manyToMany;
- (long long)fk;
- (long long)invfk;

@end
