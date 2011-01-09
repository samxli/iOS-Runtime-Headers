/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSMutableArray;



@interface YTHistoryVideoDataSource : YTVideoDataSource 
{
    NSMutableArray *_history;
}


- (id)_history;
- (void)reloadData;
- (void)loadFromDefaults;
- (void)addVideo:(id)arg1;
- (void)removeAllVideos;
- (NSUInteger)maxVideosToSave;
- (void)_saveToDefaults;

@end
