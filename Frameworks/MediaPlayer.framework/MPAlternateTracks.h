/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableDictionary, MPItem, NSDictionary;



@interface MPAlternateTracks : NSObject 
{
    MPItem *_item;
    NSDictionary *_alternateTracks;
    NSMutableDictionary *_trackChangeDictionary;
}

@property(getter=isLoaded,readonly) BOOL loaded;


- (id)initWithItem:(id)arg1;
- (void)dealloc;
- (void)beginTrackChanges;
- (void)commitTrackChanges;
- (id)currentTrackForType:(NSUInteger)arg1;
- (NSUInteger)indexOfCurrentTrackForType:(NSUInteger)arg1;
- (BOOL)isLoaded;
- (void)setTrack:(id)arg1 forType:(NSUInteger)arg2;
- (id)tracksForType:(NSUInteger)arg1;
- (BOOL)hasTracksForTypes:(NSUInteger)arg1;
- (void)reloadData;
- (id)_keyForTrackType:(NSUInteger)arg1;

@end
