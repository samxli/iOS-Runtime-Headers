/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@class NSData, NSArray;



@interface AYHost : AYOperation 
{
    struct __CFHost { } *_hostRef;
    struct CFHostClientContext { 
        NSInteger version; 
        void *info; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
    } _context;
    NSArray *_names;
    NSArray *_addresses;
    NSData *_isReachable;
    BOOL _wasCreatedFromName;
    id _origin;
    NSInteger _infoType;
}

+ (id)hostWithName:(id)arg1;
+ (id)hostWithAddress:(id)arg1;

- (void)_setClient;
- (id)initHostWithName:(id)arg1;
- (id)initHostWithAddress:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (void)_launchInfoResolutionWithType:(NSInteger)arg1;
- (void)resolveAddresses;
- (id)addresses;
- (void)resolveNames;
- (id)names;
- (void)checkReachability;
- (NSUInteger)reachability;
- (void)endOperationWithError:(id)arg1;
- (void)_handleInfoResolutionEventWithType:(NSInteger)arg1 error:(const struct { NSInteger x1; NSInteger x2; }*)arg2;
- (id)description;

@end
