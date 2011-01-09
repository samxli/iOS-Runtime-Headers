/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMoviePlayerControllerInternal;



@interface MPMoviePlayerController : NSObject 
{
    MPMoviePlayerControllerInternal *_internal;
}

@property(readonly) NSURL *contentURL;
@property(retain) UIColor *backgroundColor;
@property NSInteger scalingMode;
@property NSInteger movieControlMode;
@property double initialPlaybackTime;
@property(readonly) UIView *movieView;
@property(readonly) UIView *backgroundView;
@property double currentTime;
@property BOOL hideLoadingIndicatorForLocalFiles;
@property(getter=isFullscreen) BOOL fullscreen;

+ (Class)windowClass;
+ (void)_setCurrentMoviePlayerController:(id)arg1;
+ (id)_currentMoviePlayerController;
+ (void)_setPlaybackInProgress:(BOOL)arg1;
+ (BOOL)_playbackInProgress;

- (id)init;
- (void)dealloc;
- (id)initWithContentURL:(id)arg1;
- (id)contentURL;
- (void)play;
- (void)stop;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setScalingMode:(NSInteger)arg1;
- (NSInteger)scalingMode;
- (void)setMovieControlMode:(NSInteger)arg1;
- (NSInteger)movieControlMode;
- (void)setInitialPlaybackTime:(double)arg1;
- (double)initialPlaybackTime;
- (id)backgroundView;
- (void)pause;
- (double)currentTime;
- (void)setCurrentTime:(double)arg1;
- (NSInteger)orientation;
- (void)setOrientation:(NSInteger)arg1 animated:(BOOL)arg2;
- (id)movieView;
- (void)setHideLoadingIndicatorForLocalFiles:(BOOL)arg1;
- (BOOL)hideLoadingIndicatorForLocalFiles;
- (BOOL)isFullscreen;
- (void)setFullscreen:(BOOL)arg1;
- (id)_volumeAudioCategory;
- (void)_checkNetworkMediaType;
- (void)_createPlayer;
- (void)_tearDownPlayer:(BOOL)arg1;
- (void)_play;
- (void)_playerFinishAndFadeOut;
- (void)_delayedBeginFadeOut;
- (void)_playerFadeInAnimationDidEnd:(id)arg1 finished:(id)arg2;
- (void)_playerFadeOutAnimationDidEnd:(id)arg1 finished:(id)arg2;
- (void)_playbackFailedWithError:(id)arg1;
- (id)_localizedDescriptionForErrorCode:(NSInteger)arg1;
- (NSUInteger)_visiblePartsForMovieControlMode;
- (void)_updateForCurrentMovieControlMode;
- (void)_preloadingComplete;
- (void)_pausePlaybackForNotification:(id)arg1;
- (void)_willSuspendNotification:(id)arg1;
- (void)_willBeginSuspendAnimationNotification:(id)arg1;
- (void)_willResignNotification:(id)arg1;
- (void)_willTerminateNotification:(id)arg1;
- (void)_simpleRemoteNotification:(id)arg1;
- (void)_movieDidDecode:(id)arg1;
- (void)_itemFailedToPlay:(id)arg1;
- (void)_mediaServerDied:(id)arg1;
- (void)_audioRouteChanged:(id)arg1;
- (void)_playbackRateChanged:(id)arg1;
- (void)_playbackEnded:(id)arg1;
- (void)_expireImplicitAudioRouteChangePlaybackRestart;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_delayedHideOverlay;
- (void)_bufferingStatusDidChangeNotification:(id)arg1;
- (void)_videoViewScaleModeDidChange:(id)arg1;
- (void)viewControllerRequestsExit:(id)arg1;
- (void)_validationDidFinish:(id)arg1;
- (struct CGImage { }*)thumbnailAtTime:(double)arg1 timeOption:(NSInteger)arg2;
- (void)requestThumbnailsAtTimes:(id)arg1 timeOption:(NSInteger)arg2;
- (void)cancelThumbnailRequests;
- (void)_itemDidGenerateCGImage:(id)arg1;

@end
