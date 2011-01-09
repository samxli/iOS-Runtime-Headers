/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPVideoBackgroundView, UIColor, MPTVOutWindow, UIAlertView, UIProgressIndicator, MPSwipableView;



@interface MPVideoViewController : MPViewController <MPSwipableViewDelegate, MPVideoTransferViewController, UIModalViewDelegate>
{
    UIAlertView *_alertSheet;
    MPVideoBackgroundView *_backgroundView;
    MPSwipableView *_backstopView;
    UIColor *_backstopColor;
    UIProgressIndicator *_loadingIndicator;
    MPTVOutWindow *_tvOutWindow;
    NSUInteger _desiredParts;
    NSUInteger _disabledParts;
    NSUInteger _visibleParts;
    NSUInteger _scaleMode;
    unsigned int _canAnimateControlsOverlay : 1;
    unsigned int _canShowControlsOverlay : 1;
    unsigned int _disableControlsAutohide : 1;
    unsigned int _ownsStatusBar : 1;
    unsigned int _ownsVideoView : 1;
    unsigned int _playAfterPop : 1;
    unsigned int _scheduledLoadingIndicator : 1;
    unsigned int _tvOutEnabled : 1;
    unsigned int _displayPlaybackErrorAlerts : 1;
    unsigned int _allowsDetailScrubbing : 1;
    unsigned int _attemptAutoPlayWhenControlsHidden : 1;
}

@property(readonly) BOOL canChangeScaleMode;
@property BOOL ownsStatusBar;
@property BOOL TVOutEnabled;
@property(retain,readonly) MPVideoView *videoView;
@property(readonly) BOOL viewControllerWillRequestExit;
@property BOOL displayPlaybackErrorAlerts;
@property BOOL allowsDetailScrubbing;
@property BOOL attemptAutoPlayWhenControlsHidden;
@property BOOL canAnimateControlsOverlay;
@property BOOL canShowControlsOverlay;
@property BOOL disableControlsAutohide;
@property(readonly) UIView *backgroundView;
@property(retain) UIColor *backstopColor;
@property NSUInteger visibleParts;
@property NSUInteger scaleMode;
@property NSUInteger disabledParts;
@property NSUInteger desiredParts;

+ (BOOL)isPlayingToTVOut;
+ (id)sharedVideoView:(BOOL)arg1;

- (id)init;
- (void)dealloc;
- (void)showAlternateTracksController:(id)arg1;
- (void)showChaptersControllerAndFadeViews:(id)arg1;
- (void)showChaptersController;
- (void)_updateIdleTimerDisabledFromPlaybackState:(NSUInteger)arg1;
- (id)backgroundView;
- (BOOL)canChangeScaleMode;
- (BOOL)disableControlsAutohide;
- (BOOL)ownsStatusBar;
- (void)_updateAlwaysPlayWheneverPossible;
- (void)setItem:(id)arg1;
- (void)setDesiredParts:(NSUInteger)arg1;
- (void)setDesiredParts:(NSUInteger)arg1 animate:(BOOL)arg2;
- (void)setDisableControlsAutohide:(BOOL)arg1;
- (void)setOwnsStatusBar:(BOOL)arg1;
- (void)setScaleMode:(NSUInteger)arg1;
- (void)setScaleMode:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)setVisibleParts:(NSUInteger)arg1;
- (void)setVisibleParts:(NSUInteger)arg1 animate:(BOOL)arg2;
- (void)toggleScaleMode:(BOOL)arg1;
- (BOOL)allowsDetailScrubbing;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;
- (BOOL)attemptAutoPlayWhenControlsHidden;
- (void)setAttemptAutoPlayWhenControlsHidden:(BOOL)arg1;
- (void)loadView;
- (void)noteIgnoredChangeTypes:(NSUInteger)arg1;
- (void)removeChildViewController:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)setTVOutEnabled:(BOOL)arg1;
- (BOOL)TVOutEnabled;
- (id)videoView;
- (BOOL)displayPlaybackErrorAlerts;
- (void)setDisplayPlaybackErrorAlerts:(BOOL)arg1;
- (void)chapterList:(id)arg1 selectedChapter:(NSUInteger)arg2;
- (void)chapterListDidDisappear:(id)arg1;
- (BOOL)viewControllerWillRequestExit;
- (void)modalView:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)modalView:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (void)_videoView_playbackErrorNotification:(id)arg1;
- (void)_videoView_playbackStateChangedNotification:(id)arg1;
- (void)_videoVideo_batteryStateDidChangeNotification:(id)arg1;
- (void)_videoView_resumeEventsOnlyNotification:(id)arg1;
- (void)_videoView_scaleModeChangedNotification:(id)arg1;
- (void)_videoView_effectiveScaleModeChangedNotification:(id)arg1;
- (void)_videoView_validityChangedNotification:(id)arg1;
- (void)_videoView_sizeChangedNotification:(id)arg1;
- (void)_videoView_timedImageMetadataAvailableNotification:(id)arg1;
- (void)_delayedUpdateBackgroundView;
- (void)_updateBackgroundView:(BOOL)arg1;
- (void)_hideLoadingForStateChange:(id)arg1;
- (void)_popForTimeJump:(id)arg1;
- (void)_tvOutCapabilityChangedNotification;
- (void)_itemDurationDidChange:(id)arg1;
- (void)_delayedPopForTimeJump;
- (void)_delayedShowLoading;
- (BOOL)canAnimateControlsOverlay;
- (BOOL)canShowControlsOverlay;
- (void)displayVideoView;
- (void)displayVideoViewOnScreen;
- (void)displayVideoViewOnTV;
- (void)handleScaleModeChange;
- (void)_scheduleLoadingIndicatorIfNeeded;
- (void)setCanAnimateControlsOverlay:(BOOL)arg1;
- (void)setCanShowControlsOverlay:(BOOL)arg1;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setOwnsVideoView:(BOOL)arg1;
- (id)createAlternateTracksTransition;
- (id)createChapterFlipTransition;
- (void)setBackstopColor:(id)arg1;
- (void)backgroundViewDidUpdate;
- (void)_hideLoadingIndicator;
- (void)_updateProgressControlForItem:(id)arg1;
- (id)backstopColor;
- (NSUInteger)visibleParts;
- (NSUInteger)scaleMode;
- (NSUInteger)disabledParts;
- (void)setDisabledParts:(NSUInteger)arg1;
- (NSUInteger)desiredParts;

@end
