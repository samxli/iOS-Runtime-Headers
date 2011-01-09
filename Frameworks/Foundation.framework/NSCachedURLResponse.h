/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSCachedURLResponseInternal;



@interface NSCachedURLResponse : NSObject <NSCoding, NSCopying>
{
    NSCachedURLResponseInternal *_internal;
}


- (id)initWithResponse:(id)arg1 data:(id)arg2;
- (id)initWithResponse:(id)arg1 data:(id)arg2 userInfo:(id)arg3 storagePolicy:(NSUInteger)arg4;
- (id)_initWithCFCachedURLResponse:(struct _CFCachedURLResponse { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)response;
- (id)data;
- (id)userInfo;
- (NSUInteger)storagePolicy;
- (void)dealloc;
- (struct _CFCachedURLResponse { }*)_CFCachedURLResponse;
- (void)_deallocInternalCFCachedURLResponse;
- (void)_reestablishInternalCFCachedURLResponse:(struct _CFCachedURLResponse { }*)arg1;

@end
