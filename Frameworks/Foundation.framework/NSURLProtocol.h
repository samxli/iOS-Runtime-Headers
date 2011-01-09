/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLProtocolInternal;



@interface NSURLProtocol : NSObject 
{
    NSURLProtocolInternal *_internal;
}

+ (BOOL)canInitWithRequest:(id)arg1;
+ (id)_canonicalRequestForRequest:(id)arg1 allowCF:(BOOL)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)_requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 allowCF:(BOOL)arg3;
+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (BOOL)registerClass:(Class)arg1;
+ (void)unregisterClass:(Class)arg1;
+ (id)_protocolWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 allowCF:(BOOL)arg4;
+ (id)propertyForKey:(id)arg1 inRequest:(id)arg2;
+ (void)setProperty:(id)arg1 forKey:(id)arg2 inRequest:(id)arg3;
+ (void)removePropertyForKey:(id)arg1 inRequest:(id)arg2;
+ (id)_registeredClasses;
+ (Class)_protocolClassForRequest:(id)arg1 allowCF:(BOOL)arg2;
+ (Class)_protocolClassForRequest:(id)arg1;
+ (id)_makeRequestCanonicalByMakingRequestURLCanonical:(id)arg1;
+ (void)_removePropertyForKey:(id)arg1 inRequest:(id)arg2;

- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (id)client;
- (id)request;
- (id)cachedResponse;
- (void)dealloc;
- (void)startLoading;
- (void)stopLoading;
- (void)_releaseProtocolClientReference;
- (void)_suspendLoading;
- (void)_resumeLoading;

@end
