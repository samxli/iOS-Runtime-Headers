/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebPreferencesPrivate;



@interface WebPreferences : NSObject <NSCoding>
{
    WebPreferencesPrivate *_private;
}

+ (id)standardPreferences;
+ (void)initialize;
+ (id)_IBCreatorID;
+ (id)_concatenateKeyWithIBCreatorID:(id)arg1;
+ (id)_getInstanceForIdentifier:(id)arg1;
+ (void)_setInstance:(id)arg1 forIdentifier:(id)arg2;
+ (void)_checkLastReferenceForIdentifier:(id)arg1;
+ (void)_removeReferenceForIdentifier:(id)arg1;
+ (unsigned long)_systemCFStringEncoding;
+ (void)_setInitialDefaultTextEncodingToSystemEncoding;
+ (void)_setIBCreatorID:(id)arg1;
+ (id)standardMailWebPreferences:(BOOL)arg1;

- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)identifier;
- (id)_valueForKey:(id)arg1;
- (id)_stringValueForKey:(id)arg1;
- (void)_setStringValue:(id)arg1 forKey:(id)arg2;
- (NSInteger)_integerValueForKey:(id)arg1;
- (void)_setIntegerValue:(NSInteger)arg1 forKey:(id)arg2;
- (float)_floatValueForKey:(id)arg1;
- (void)_setFloatValue:(float)arg1 forKey:(id)arg2;
- (BOOL)_boolValueForKey:(id)arg1;
- (void)_setBoolValue:(BOOL)arg1 forKey:(id)arg2;
- (unsigned long long)_unsignedLongLongValueForKey:(id)arg1;
- (void)_setUnsignedLongLongValue:(unsigned long long)arg1 forKey:(id)arg2;
- (id)standardFontFamily;
- (void)setStandardFontFamily:(id)arg1;
- (id)fixedFontFamily;
- (void)setFixedFontFamily:(id)arg1;
- (id)serifFontFamily;
- (void)setSerifFontFamily:(id)arg1;
- (id)sansSerifFontFamily;
- (void)setSansSerifFontFamily:(id)arg1;
- (id)cursiveFontFamily;
- (void)setCursiveFontFamily:(id)arg1;
- (id)fantasyFontFamily;
- (void)setFantasyFontFamily:(id)arg1;
- (NSInteger)defaultFontSize;
- (void)setDefaultFontSize:(NSInteger)arg1;
- (NSInteger)defaultFixedFontSize;
- (void)setDefaultFixedFontSize:(NSInteger)arg1;
- (NSInteger)minimumFontSize;
- (void)setMinimumFontSize:(NSInteger)arg1;
- (NSInteger)minimumLogicalFontSize;
- (void)setMinimumLogicalFontSize:(NSInteger)arg1;
- (id)defaultTextEncodingName;
- (void)setDefaultTextEncodingName:(id)arg1;
- (BOOL)userStyleSheetEnabled;
- (void)setUserStyleSheetEnabled:(BOOL)arg1;
- (id)userStyleSheetLocation;
- (void)setUserStyleSheetLocation:(id)arg1;
- (BOOL)isJavaEnabled;
- (void)setJavaEnabled:(BOOL)arg1;
- (BOOL)isJavaScriptEnabled;
- (void)setJavaScriptEnabled:(BOOL)arg1;
- (BOOL)javaScriptCanOpenWindowsAutomatically;
- (void)setJavaScriptCanOpenWindowsAutomatically:(BOOL)arg1;
- (BOOL)arePlugInsEnabled;
- (void)setPlugInsEnabled:(BOOL)arg1;
- (BOOL)allowsAnimatedImages;
- (void)setAllowsAnimatedImages:(BOOL)arg1;
- (BOOL)allowsAnimatedImageLooping;
- (void)setAllowsAnimatedImageLooping:(BOOL)arg1;
- (void)setLoadsImagesAutomatically:(BOOL)arg1;
- (BOOL)loadsImagesAutomatically;
- (void)setAutosaves:(BOOL)arg1;
- (BOOL)autosaves;
- (void)setUsesPageCache:(BOOL)arg1;
- (BOOL)usesPageCache;
- (void)setCacheModel:(NSUInteger)arg1;
- (NSUInteger)cacheModel;
- (BOOL)developerExtrasEnabled;
- (void)setDeveloperExtrasEnabled:(BOOL)arg1;
- (BOOL)authorAndUserStylesEnabled;
- (void)setAuthorAndUserStylesEnabled:(BOOL)arg1;
- (BOOL)applicationChromeModeEnabled;
- (void)setApplicationChromeModeEnabled:(BOOL)arg1;
- (BOOL)webArchiveDebugModeEnabled;
- (void)setWebArchiveDebugModeEnabled:(BOOL)arg1;
- (BOOL)offlineWebApplicationCacheEnabled;
- (void)setOfflineWebApplicationCacheEnabled:(BOOL)arg1;
- (BOOL)zoomsTextOnly;
- (void)setZoomsTextOnly:(BOOL)arg1;
- (BOOL)automaticallyDetectsCacheModel;
- (void)setAutomaticallyDetectsCacheModel:(BOOL)arg1;
- (double)_backForwardCacheExpirationInterval;
- (unsigned long)_maximumImageSize;
- (long long)_maximumResourceDataLength;
- (BOOL)_standalone;
- (void)_setStandalone:(BOOL)arg1;
- (void)_setTelephoneNumberParsingEnabled:(BOOL)arg1;
- (BOOL)_telephoneNumberParsingEnabled;
- (void)_setMinimumZoomFontSize:(float)arg1;
- (float)_minimumZoomFontSize;
- (void)_setLayoutInterval:(NSInteger)arg1;
- (NSInteger)_layoutInterval;
- (void)_setMaxParseDuration:(float)arg1;
- (float)_maxParseDuration;
- (NSInteger)editableLinkBehavior;
- (void)setEditableLinkBehavior:(NSInteger)arg1;
- (NSInteger)textDirectionSubmenuInclusionBehavior;
- (void)setTextDirectionSubmenuInclusionBehavior:(NSInteger)arg1;
- (BOOL)_useSiteSpecificSpoofing;
- (void)_setUseSiteSpecificSpoofing:(BOOL)arg1;
- (BOOL)databasesEnabled;
- (void)setDatabasesEnabled:(BOOL)arg1;
- (BOOL)localStorageEnabled;
- (void)setLocalStorageEnabled:(BOOL)arg1;
- (void)_postPreferencesChangesNotification;
- (BOOL)isDOMPasteAllowed;
- (void)setDOMPasteAllowed:(BOOL)arg1;
- (void)_setFTPDirectoryTemplatePath:(id)arg1;
- (id)_localStorageDatabasePath;
- (void)_setLocalStorageDatabasePath:(id)arg1;
- (id)_ftpDirectoryTemplatePath;
- (void)_setForceFTPDirectoryListings:(BOOL)arg1;
- (BOOL)_forceFTPDirectoryListings;
- (void)didRemoveFromWebView;
- (void)willAddToWebView;
- (void)setFullDocumentTeardownEnabled:(BOOL)arg1;
- (BOOL)fullDocumentTeardownEnabled;
- (void)_invalidateCachedPreferences;

@end
