/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray;



@interface MPArrayQueueFeeder : MPQueueFeeder 
{
    NSArray *_queueItems;
}

@property(readonly) NSArray *items;


- (id)initWithItems:(id)arg1;
- (void)dealloc;
- (double)bookmarkTimeForIndex:(NSUInteger)arg1;
- (id)copyRawItemAtIndex:(NSUInteger)arg1;
- (NSUInteger)numberOfPaths;
- (id)pathAtIndex:(NSUInteger)arg1;
- (id)playbackInfoAtIndex:(NSUInteger)arg1;
- (id)items;

@end
