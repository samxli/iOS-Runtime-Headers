/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */



@interface GQDRoot : NSObject 
{
    struct __CFDictionary { } *mUidToObjectMap;
    BOOL mAppBundleColorMapLoaded;
    struct __CFDictionary { } *mAppBundleResourceToColorMap;
    BOOL mAppBundleResourcesUrlInitialized;
    struct __CFURL { } *mAppBundleResourcesUrl;
    NSInteger mAppBundleVersion;
    unsigned long long mDocVersion;
}

+ (struct _xmlNs { struct _xmlNs {} *x1; NSInteger x2; char *x3; char *x4; void *x5; struct _xmlDoc {} *x6; }*)appNamespace;

- (id)init;
- (void)dealloc;
- (Class)classForName:(const char *)arg1;
- (void)addObject:(id)arg1 withOwnedXmlUid:(const char *)arg2;
- (const char *)addIdentifiedObject:(id)arg1 fromCurrentNode:(struct _xmlTextReader { }*)arg2;
- (id)objectWithXmlUid:(const char *)arg1;
- (void)forgetAboutObjectWithXmlUid:(const char *)arg1;
- (BOOL)includeStyleWithIdentifier:(const char *)arg1 parentIdentifier:(const char *)arg2 uid:(const char *)arg3;
- (struct __CFURL { }*)createUrlToAppBundleResource:(struct __CFString { }*)arg1 processorBundle:(struct __CFBundle { }*)arg2 fileExists:(BOOL*)arg3;
- (struct __CFURL { }*)createUrlToAppBundleResource:(struct __CFString { }*)arg1 processorBundle:(struct __CFBundle { }*)arg2;
- (id)colorForMissingAppBundleResource:(struct __CFString { }*)arg1 processorBundle:(struct __CFBundle { }*)arg2;
- (struct __CFURL { }*)appBundleResourcesUrl;
- (void)initializeAppBundleResourcesUrl;
- (void)loadAppBundleResourceToColorMap;
- (BOOL)readDocumentVersion:(struct _xmlTextReader { }*)arg1;
- (BOOL)readDocumentVersion:(struct _xmlTextReader { }*)arg1 isTooNew:(BOOL*)arg2;
- (NSUInteger)documentReleaseVersion;
- (BOOL)appBundleCanProcessCurrentDocVersion;

@end
