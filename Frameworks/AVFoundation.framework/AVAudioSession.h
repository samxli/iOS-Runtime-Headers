/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */



@interface AVAudioSession : NSObject 
{
    void *_impl;
}

@property(readonly) NSInteger currentHardwareOutputNumberOfChannels;
@property(readonly) NSInteger currentHardwareInputNumberOfChannels;
@property(readonly) double preferredIOBufferDuration;
@property(readonly) double preferredHardwareSampleRate;
@property(readonly) double currentHardwareSampleRate;
@property(readonly) BOOL inputIsAvailable;
@property(readonly) NSString *category;
@property <AVAudioSessionDelegate> *delegate;

+ (id)sharedInstance;

- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)category;
- (BOOL)setCategory:(id)arg1 error:(id*)arg2;
- (BOOL)setActive:(BOOL)arg1 error:(id*)arg2;
- (BOOL)setPreferredHardwareSampleRate:(double)arg1 error:(id*)arg2;
- (BOOL)setPreferredIOBufferDuration:(double)arg1 error:(id*)arg2;
- (BOOL)inputIsAvailable;
- (double)currentHardwareSampleRate;
- (double)preferredHardwareSampleRate;
- (double)preferredIOBufferDuration;
- (NSInteger)currentHardwareInputNumberOfChannels;
- (NSInteger)currentHardwareOutputNumberOfChannels;
- (void)privateInputIsAvailableChanged:(id)arg1;
- (void)privateCurrentHardwareSampleRateChanged:(id)arg1;
- (void)privateCurrentHardwareInputNumberOfChannelsChanged:(id)arg1;
- (void)privateCurrentHardwareOutputNumberOfChannelsChanged:(id)arg1;
- (void)privateCategoryChanged:(id)arg1;
- (void)privateBeginInterruption;
- (void)privateEndInterruption;

@end
