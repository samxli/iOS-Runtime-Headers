/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString;



@interface MPVolumeSettingsController : UITwoSidedAlertController <UITwoSidedAlertControllerDelegate>
{
    NSString *_audioCategory;
}


- (id)initWithAudioCategory:(id)arg1;
- (void)dealloc;
- (id)createFrontAlert;
- (id)createBackAlert;
- (void)twoSidedAlertControllerDidDismiss:(id)arg1;
- (void)audioRoutingPicker:(id)arg1 didSelectRouteAtIndex:(NSInteger)arg2;

@end
