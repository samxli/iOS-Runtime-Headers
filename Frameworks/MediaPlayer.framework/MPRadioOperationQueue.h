/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class AVAssetCache, MPPrepareRadioPlaybackOperation, NSCache, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue, RadioRequestContext;

@interface MPRadioOperationQueue : NSObject {
    AVAssetCache *_assetCache;
    NSMutableArray *_bagLoadBlocks;
    NSMutableArray *_deferredOperations;
    BOOL _hasLoadedServerStoreBag;
    NSMutableDictionary *_inflightAssetLoads;
    NSOperationQueue *_operationQueue;
    MPPrepareRadioPlaybackOperation *_playbackOperation;
    int _queueState;
    RadioRequestContext *_requestContext;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSCache *_warmAssetCache;
}

@property(readonly) AVAssetCache * assetCache;

+ (id)sharedQueue;

- (void).cxx_destruct;
- (void)_addOperationWhenWarm:(id)arg1;
- (void)_finishAssetLoadWithKey:(id)arg1 asset:(id)arg2 error:(id)arg3;
- (void)_finishAssetWarmWithKey:(id)arg1 asset:(id)arg2 error:(id)arg3;
- (void)_finishBagLoadWithBag:(id)arg1 error:(id)arg2;
- (void)_finishWarmingWithContext:(id)arg1 error:(id)arg2;
- (void)_popAssetLoadBlocksWithKey:(id)arg1 asset:(id)arg2 error:(id)arg3;
- (id)_storeBag;
- (void)_warmAssetForStation:(id)arg1 trackStoreID:(long long)arg2;
- (void)_warmRadio;
- (void)addStationWithRequest:(id)arg1 completionBlock:(id)arg2;
- (id)assetCache;
- (void)cancelPlaybackPreparation;
- (void)getTracksWithRequest:(id)arg1 completionBlock:(id)arg2;
- (id)init;
- (void)loadAssetForItem:(id)arg1 withCompletionBlock:(id)arg2;
- (void)loadRadioConfigurationWithCompletionBlock:(id)arg1;
- (void)preparePlaybackForStation:(id)arg1 withCompletionBlock:(id)arg2;
- (void)sendPlayEvents:(id)arg1 forStationHash:(id)arg2 stationID:(long long)arg3 completionBlock:(id)arg4;
- (void)warmRadioQueue;

@end
