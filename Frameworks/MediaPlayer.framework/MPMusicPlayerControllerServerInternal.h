/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableArray, MLQuery;



@interface MPMusicPlayerControllerServerInternal : MPServerObject <MPMusicPlayerController>
{
    NSInteger _shuffleMode;
    NSInteger _repeatMode;
    NSMutableArray *_clientPorts;
    unsigned int _useApplicationSpecificQueue : 1;
    MLQuery *_query;
    unsigned int _queuePrepared : 1;
    NSInteger _extendedModeNotifyToken;
}

+ (BOOL)_canSeedGeniusWithItem:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)prepareForDecodingWithCoder:(id)arg1;
- (void)setNowPlayingItem:(id)arg1;
- (id)nowPlayingItem;
- (void)setQueueWithQuery:(id)arg1;
- (void)setQueueWithItemCollection:(id)arg1;
- (void)play;
- (void)shuffle;
- (void)pause;
- (void)stop;
- (id)currentPlaybackTime;
- (void)setCurrentPlaybackTime:(id)arg1;
- (id)playbackState;
- (id)shuffleMode;
- (void)setShuffleMode:(id)arg1;
- (id)repeatMode;
- (void)setRepeatMode:(id)arg1;
- (void)beginSeekingForward;
- (void)beginSeekingBackward;
- (void)endSeeking;
- (void)skipToNextItem;
- (void)skipToBeginning;
- (void)skipToPreviousItem;
- (void)skipToBeginningOrPreviousItem;
- (id)isGeniusAvailable;
- (id)setQueueWithSeedItems:(id)arg1;
- (void)playItem:(id)arg1;
- (void)pauseWithFadeoutDuration:(id)arg1;
- (BOOL)useApplicationSpecificQueue;
- (void)setUseApplicationSpecificQueue:(id)arg1;
- (id)_avController;
- (void)_setQueueWithQuery:(id)arg1;
- (void)_prepareQueueIfNecessary;
- (void)prepareQueueForPlayback;
- (void)_registerClientPort:(NSUInteger)arg1;
- (void)_clientPortInvalidatedNotification:(id)arg1;
- (void)_clientPortInvalidated:(id)arg1;
- (void)_playbackStateDidChange:(id)arg1;
- (void)_itemDidChange:(id)arg1;

@end
