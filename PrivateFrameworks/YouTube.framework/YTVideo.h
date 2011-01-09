/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSArray, NSString, NSURL, NSCalendarDate;



@interface YTVideo : NSObject 
{
    NSString *_id;
    NSString *_title;
    NSString *_author;
    NSCalendarDate *_dateUpdated;
    NSCalendarDate *_dateAdded;
    NSArray *_videoReferences;
    NSString *_videoDescription;
    NSString *_category;
    NSArray *_tags;
    NSUInteger _numberOfViews;
    NSUInteger _numberOfRatings;
    NSUInteger _minRating;
    NSUInteger _maxRating;
    NSUInteger _rating;
    NSInteger _batchStatus;
    NSURL *_infoURL;
    NSURL *_thumbnailURL;
    NSURL *_commentsURL;
    NSURL *_editURL;
    NSURL *_ratingsURL;
    NSString *_shortID;
    NSString *_unplayable;
    BOOL _isProcessing;
}

+ (void)disableNotifications;
+ (void)enableNotifications;
+ (NSUInteger)thumbnailWidth;
+ (id)unsupportedVideoError;
+ (id)videoNotFoundError;
+ (id)videoIsProcessingError;

- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initFromArchiveDictionary:(id)arg1;
- (id)archiveDictionary;
- (void)_postVideoDidChange;
- (void)_thumbnailDidLoad;
- (id)initWithID:(id)arg1 title:(id)arg2 dateUpdated:(id)arg3 dateAdded:(id)arg4 videoReferences:(id)arg5 infoURL:(id)arg6 videoDescription:(id)arg7 category:(id)arg8 tags:(id)arg9 author:(id)arg10 thumbnailURL:(id)arg11 minRating:(NSUInteger)arg12 maxRating:(NSUInteger)arg13 rating:(NSUInteger)arg14 numberOfRatings:(NSUInteger)arg15 numberOfViews:(NSUInteger)arg16 batchStatus:(NSInteger)arg17 commentsURL:(id)arg18 editURL:(id)arg19 ratingsURL:(id)arg20 shortID:(id)arg21 unplayable:(id)arg22 isProcessing:(BOOL)arg23;
- (void)dealloc;
- (id)description;
- (id)ID;
- (id)shortID;
- (id)title;
- (id)author;
- (id)dateUpdated;
- (id)dateAdded;
- (id)dateAddedString;
- (id)commentsURL;
- (id)editURL;
- (id)ratingsURL;
- (id)infoURL;
- (id)thumbnailURL;
- (id)videoDescription;
- (id)category;
- (id)tags;
- (id)tagsString;
- (id)unplayable;
- (double)age;
- (NSUInteger)rating;
- (NSUInteger)minRating;
- (NSUInteger)maxRating;
- (NSUInteger)numberOfRatings;
- (NSUInteger)numberOfViews;
- (NSInteger)batchStatus;
- (struct CGImage { }*)thumbnailLoadIfAbsent:(BOOL)arg1;
- (struct CGImage { }*)roundedThumbnailLoadIfAbsent:(BOOL)arg1;
- (id)videoReferenceForProfile:(NSInteger)arg1;
- (id)bestVideoReference;
- (id)anyVideoReference;
- (BOOL)isBookmarked;
- (BOOL)isPlayable;
- (BOOL)isProcessing;

@end
