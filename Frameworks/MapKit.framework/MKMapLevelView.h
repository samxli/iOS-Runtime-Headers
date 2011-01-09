/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, UIView, NSMutableSet;



@interface MKMapLevelView : MKLevelView 
{
    NSMutableSet *_loadingTileViews;
    NSMutableSet *_loadingTrafficViews;
    NSUInteger _tileLoadingCount;
    NSUInteger _trafficTileLoadingCount;
    BOOL _isLoadingEnabled;
    BOOL _trafficEnabled;
    BOOL _checksForTraffic;
    BOOL _suppressLayout;
    BOOL _isPanning;

  /* Error parsing encoded ivar type info: ^{MKHasTrafficRequester=^^?i^{Connection}*BB^{HasTrafficResponse}@} */
    struct MKHasTrafficRequester { int (**x1)(); NSInteger x2; struct Connection {} *x3; char *x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; void*x6; struct HasTrafficResponse {} *x7; id x8; } *_hasTrafficRequester;

    NSInteger _trafficStatus;
    struct CGPoint { 
        float x; 
        float y; 
    } _trafficStatusLongLat;
    struct CGPoint { 
        float x; 
        float y; 
    } _loadingStartPoint;
    struct $_503 { 
        NSMutableArray *tiles; 
        SEL didEndSelector; 
        unsigned int isEnabled : 1; 
        unsigned int isPulsingIn : 1; 
        unsigned int isPulsingOut : 1; 
        unsigned int startingPulse : 1; 
    } _pulsatingTraffic;
    NSMutableSet *_expiringTiles;
    UIView *_visibleView;
}

@property(readonly) BOOL tilesCoverVisibleRect;
@property(getter=isPanning) BOOL panning;
@property(retain) UIView *visibleView;
@property BOOL suppressLayout;
@property BOOL checksForTraffic;
@property BOOL trafficEnabled;

+ (Class)tileClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (BOOL)_allVisibleTilesAreLoaded;
- (BOOL)_visibleTilesHaveTraffic;
- (void)_updateLoadingCountWithError:(id)arg1;
- (void)_removeTrafficRequesterForTileView:(id)arg1 error:(id)arg2;
- (void)_removeTileRequesterForTileView:(id)arg1 error:(id)arg2;
- (void)_removeRequestersForTileView:(id)arg1 error:(id)arg2;
- (void)_removeTile:(id)arg1 cache:(BOOL)arg2;
- (void)updateTileAfterReceivingContentForTile:(id)arg1;
- (void)setTrafficHighlightAlpha:(float)arg1 forAnimation:(BOOL)arg2;
- (void)stopPulsatingTraffic;
- (void)_pulsateTraffic:(BOOL)arg1 delay:(double)arg2 didEndSelector:(SEL)arg3;
- (void)pulsateTrafficInAndOutAfterDelay:(double)arg1 didEndSelector:(SEL)arg2;
- (void)startPulsatingTraffic;
- (void)pulsatedTrafficIn:(id)arg1 finished:(id)arg2;
- (void)_pulsatedTrafficOutFinished:(id)arg1 pulsateAgainSoon:(BOOL)arg2;
- (void)pulsatedTrafficOutFirstTime:(id)arg1 finished:(id)arg2;
- (void)pulsatedTrafficOutSecondTime:(id)arg1 finished:(id)arg2;
- (void)_updatePulsingTraffic;
- (void)setPulsatesTraffic:(BOOL)arg1;
- (void)tileRequesterReceivedMissingImageForTile:(id)arg1;
- (void)tileRequesterReceivedColor:(struct CGColor { }*)arg1 forTile:(id)arg2;
- (void)tileRequesterReceivedTraffic:(id)arg1 forTile:(id)arg2;
- (void)tileRequesterReceivedImage:(struct CGImage { }*)arg1 forTile:(id)arg2;
- (void)tileRequesterProgress:(struct MKTileRequester { int (**x1)(); NSInteger x2; struct Connection {} *x3; char *x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; void*x6; void*x7; void*x8; struct TileResponse {} *x9; struct __CFRunLoop {} *x10; struct __CFRunLoopTimer {} *x11; NSUInteger x12; id x13; struct __CFSet {} *x14; }*)arg1;
     /* Encoded args for previous method: v12@0:4^{MKTileRequester=^^?i^{Connection}*BBBB^{TileResponse}^{__CFRunLoop}^{__CFRunLoopTimer}I@^{__CFSet}}8 */

- (void)tileRequesterFailed:(id)arg1;
- (void)setLoadingEnabled:(BOOL)arg1;
- (void)_setTrafficStatus:(NSInteger)arg1;
- (NSInteger)trafficStatus;
- (void)hasTrafficRequesterReceivedAnswer:(id)arg1;
- (void)hasTrafficRequesterFailed;
- (BOOL)_isTrafficSupported;
- (void)_updateTrafficStatus;
- (void)setZoomLevel:(NSInteger)arg1;
- (void)setChecksForTraffic:(BOOL)arg1;
- (void)startTileLoading;
- (void)_didScroll;
- (void)layoutSubviews;
- (void)stopTileLoading;
- (void)setLoadingStartPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)hasTileNearPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_tilesCoverRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)didMoveToWindow;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleRect;
- (BOOL)tilesCoverVisibleRect;
- (BOOL)hasTilesFromTopLeftLongLat:(struct CGPoint { float x1; float x2; })arg1 bottomRightLongLat:(struct CGPoint { float x1; float x2; })arg2;
- (struct __CFArray { }*)tilesSurroundingCoordinate:(struct { double x1; double x2; })arg1 forVisibleSize:(struct CGSize { float x1; float x2; })arg2;
- (void)setTrafficEnabled:(BOOL)arg1;
- (void)updateExpiredTilesAsFocused:(BOOL)arg1;
- (BOOL)isPanning;
- (void)setPanning:(BOOL)arg1;
- (id)visibleView;
- (void)setVisibleView:(id)arg1;
- (BOOL)suppressLayout;
- (void)setSuppressLayout:(BOOL)arg1;
- (BOOL)checksForTraffic;
- (BOOL)trafficEnabled;

@end
