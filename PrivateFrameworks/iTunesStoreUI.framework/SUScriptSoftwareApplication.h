/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSNumber, NSString;



@interface SUScriptSoftwareApplication : NSObject 
{
    NSNumber *_adamID;
    NSString *_bundleID;
    NSString *_bundleVersion;
    NSNumber *_dsID;
    NSString *_storeFrontID;
    NSNumber *_versionID;
}

@property(getter=_versionID,readonly) NSNumber *versionID;
@property(getter=_storeFrontID,readonly) NSString *storeFrontID;
@property(getter=_dsID,readonly) NSNumber *dsID;
@property(getter=_bundleVersion,readonly) NSString *bundleVersion;
@property(getter=_bundleID,readonly) NSString *bundleID;
@property(getter=_adamID,readonly) NSNumber *adamID;

+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;

- (id)initWithApplication:(id)arg1;
- (void)dealloc;
- (id)_versionID;
- (id)_storeFrontID;
- (id)_dsID;
- (id)_bundleVersion;
- (id)_bundleID;
- (id)_adamID;

@end
