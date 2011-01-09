/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */



@interface MPAVControllerToAggregateDCommunicator : NSObject 
{
    NSUInteger _lastMediaType;
    double _playbackStartTime;
    BOOL _playbackStartTimeIsValid;
}


- (id)init;
- (void)dealloc;
- (void)_startPlaybackTimer;
- (void)_stopPlaybackTimer;
- (void)_handlePlaybackStateChangedNotification:(id)arg1;
- (void)_handleItemChangedNotification:(id)arg1;

@end
