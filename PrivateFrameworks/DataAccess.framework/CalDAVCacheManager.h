/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableDictionary, NSMutableSet, MobileCalDAVCalendar;



@interface CalDAVCacheManager : NSObject 
{
    MobileCalDAVCalendar *_calendar;
    NSMutableDictionary *_filenameToModifiedLocallyMap;
    NSMutableSet *_locallyDeletedFilenames;
    NSMutableDictionary *_externalIDToLocalUIDMap;
}

+ (id)cacheControllerForCalendar:(id)arg1;
+ (void)clearAllCacheControllers;

- (id)init;
- (void)dealloc;
- (void)setETag:(id)arg1 forFilename:(id)arg2;
- (void)setETag:(id)arg1 forEventWithExternalID:(id)arg2;
- (id)etagForFilename:(id)arg1;
- (id)filenameForUID:(id)arg1;
- (void)setFilename:(id)arg1 forUID:(id)arg2;
- (id)uidForFilename:(id)arg1;
- (void)setLocallyModified:(BOOL)arg1 forFilename:(id)arg2;
- (void)setFilenameLocallyDeleted:(id)arg1;
- (void)setUIDModified:(id)arg1;
- (BOOL)isFileLocallyModified:(id)arg1;
- (void)setEventModified:(id)arg1;
- (void)setExternalID:(id)arg1 forLocalUID:(NSInteger)arg2;
- (NSInteger)localUIDForExternalID:(id)arg1;
- (void)endChanges;
- (id)allFilenames;
- (id)_initWithCalendar:(id)arg1;

@end
