/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface AVController : NSObject 
{

  /* Error parsing encoded ivar type info: ^{AVControllerPrivate=@"NSString"@"NSString"@"NSNumber"@#@"AVQueueFeeder"ii@"NSString"fffi@"CALayer"ccc@"NSObject"^{OpaqueFigVisualContext}@"NSString"^{__CFRunLoop}Iiiiccccc@"NSMutableDictionary"^{OpaqueFigPlayer}@"AVQueue"@"AVPlaybackQueue"@"AVPlaybackItem"cc@"NSDictionary"@"NSDictionary"@"NSRecursiveLock"cci} */
    struct AVControllerPrivate { id x1; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x2; inout unsigned short x3; unsigned short x4; void*x5; const NSInteger x6; in void*x7; void*x8; id x9; void*x10; inout unsigned short x11; unsigned short x12; void*x13; const NSInteger x14; in void*x15; void*x16; id x17; void*x18; inout unsigned short x19; inout void*x20; void*x21; unsigned int x22/* : ? */; void*x23; const void*x24; id x25; Class x26; id x27; void*x28; void*x29; oneway unsigned long long x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; double x38; void*x39; const void*x40; NSInteger x41; NSInteger x42; id x43; void*x44; inout unsigned short x45; unsigned short x46; void*x47; const NSInteger x48; in void*x49; void*x50; float x51; float x52; float x53; NSInteger x54; id x55; void*x56; unsigned char x57; void*x58; unsigned long x59; void*x60; void*x61; void*x62; const void*x63; BOOL x64; BOOL x65; BOOL x66; id x67; void*x68; inout unsigned short x69; bycopy unsigned int x70/* : ? */; void*x71; void*x72; BOOL x73; void*x74; void*x75; struct OpaqueFigVisualContext {} *x76; id x77; void*x78; inout unsigned short x79; unsigned short x80; void*x81; const NSInteger x82; in void*x83; void*x84; struct __CFRunLoop {} *x85; NSUInteger x86; NSInteger x87; NSInteger x88; NSInteger x89; BOOL x90; BOOL x91; BOOL x92; BOOL x93; BOOL x94; id x95; void*x96; inout unsigned short x97; void*x98; void*x99; void*x100; void*x101; unsigned int x102/* : ? */; long x103; void*x104; void*x105; NSInteger x106; BOOL x107; void*x108; NSInteger x109; out in void*x110; const void*x111; void*x112; struct OpaqueFigPlayer {} *x113; id x114; void*x115; void*x116; oneway unsigned long long x117; void*x118; void*x119; void*x120; void*x121; void*x122; id x123; void*x124; void*x125; oneway void*x126; long x127; void*x128; void*x129; unsigned int x130/* : ? */; void*x131; BOOL x132; void*x133; unsigned long long x134; void*x135; void*x136; void*x137; void*x138; void*x139; id x140; void*x141; void*x142; oneway void*x143; long x144; void*x145; void*x146; unsigned int x147/* : ? */; void*x148; BOOL x149; void*x150; NSUInteger x151; void*x152; void*x153; void*x154; void*x155; BOOL x156; BOOL x157; id x158; void*x159; inout unsigned short x160; void*x161; NSInteger x162; BOOL x163; void*x164; NSInteger x165; out in void*x166; const void*x167; void*x168; id x169; void*x170; inout unsigned short x171; void*x172; NSInteger x173; BOOL x174; void*x175; NSInteger x176; out in void*x177; const void*x178; void*x179; id x180; void*x181; inout unsigned short x182; void*x183; void*x184; BOOL x185; void*x186; const short x187; NSInteger x188; void x189; void*x190; unsigned long x191; out BOOL x192; void*x193; void*x194; BOOL x195; BOOL x196; NSInteger x197; } *_priv;

}

+ (id)compatibleAudioRouteForRoute:(id)arg1;
+ (void)setEnableNetworkMode:(BOOL)arg1;
+ (BOOL)isSupportedMimeType:(id)arg1;
+ (BOOL)isSupportedFileExtension:(id)arg1;
+ (BOOL)isNetworkSupportedPath:(id)arg1;
+ (id)avController;
+ (id)avControllerWithQueue:(id)arg1 error:(id*)arg2;

- (id)initWithError:(id*)arg1;
- (void)setAVItemClass:(Class)arg1;
- (id)init;
- (id)initForStreaming;
- (void)dealloc;
- (struct AVControllerPrivate { id x1; id x2; id x3; id x4; Class x5; id x6; NSInteger x7; NSInteger x8; id x9; float x10; float x11; float x12; NSInteger x13; id x14; BOOL x15; BOOL x16; BOOL x17; id x18; struct OpaqueFigVisualContext {} *x19; id x20; struct __CFRunLoop {} *x21; NSUInteger x22; NSInteger x23; NSInteger x24; NSInteger x25; BOOL x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; id x31; struct OpaqueFigPlayer {} *x32; id x33; id x34; id x35; BOOL x36; BOOL x37; id x38; id x39; id x40; BOOL x41; BOOL x42; NSInteger x43; }*)privateStorage;
- (BOOL)isNewImageAvailableForTime:(const struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; }*)arg1 willNeverBeAvailable:(BOOL*)arg2;
- (long)copyImageForTime:(struct __CVBuffer {}**)arg1 time:(const struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; }*)arg2;
- (void)scheduleQueueSpaceCheck;
- (void)checkQueueSpace;
- (id)queue;
- (void)feederRangeWasInserted:(id)arg1;
- (void)feederRangeWasRemoved:(id)arg1;
- (void)feederInvalidatedWithCurrentItemMoved:(id)arg1;
- (void)setQueueFeeder:(id)arg1 withIndex:(NSInteger)arg2;
- (void)setQueueFeeder:(id)arg1;
- (id)queueFeeder;
- (BOOL)setRepeatMode:(NSInteger)arg1;
- (NSInteger)repeatMode;
- (BOOL)havePlayedCurrentItem;
- (void)continueAfterRepeatGap;
- (void)cancelContinueAfterRepeatGap;
- (BOOL)beginRepeatGap;
- (BOOL)play:(id*)arg1;
- (void)pause;
- (void)dequeueFirstItem;
- (NSUInteger)indexOfCurrentQueueFeederItem;
- (BOOL)setIndexOfCurrentQueueFeederItem:(NSUInteger)arg1 error:(id*)arg2;
- (id)addNextFeederItemToQueue;
- (BOOL)playNextItem:(id*)arg1;
- (float)rate;
- (BOOL)shouldBeginPlayingItem:(id)arg1 error:(id*)arg2;
- (BOOL)setRate:(float)arg1 error:(id*)arg2;
- (BOOL)resumePlayback:(double)arg1 error:(id*)arg2;
- (id)errorWithDescription:(id)arg1 code:(long)arg2;
- (void)makeError:(id*)arg1 withDescription:(id)arg2 code:(long)arg3;
- (BOOL)beginInterruption:(id*)arg1;
- (BOOL)canBeginInterruption;
- (BOOL)activate:(id*)arg1;
- (void)endInterruptionWithStatus:(id)arg1;
- (float)volume;
- (void)setVolume:(float)arg1;
- (double)currentTime;
- (void)setCurrentTime:(double)arg1;
- (void)setCurrentTime:(double)arg1 options:(NSInteger)arg2;
- (void)stepByCount:(NSInteger)arg1;
- (BOOL)muted;
- (void)setMuted:(BOOL)arg1;
- (void)setEQPreset:(NSInteger)arg1;
- (NSInteger)eqPreset;
- (struct OpaqueFigVisualContext { }*)visualContext;
- (void)setVisualContext:(struct OpaqueFigVisualContext { }*)arg1;
- (id)outputQTESFilePath;
- (void)setOutputQTESFilePath:(id)arg1;
- (id)lkLayer;
- (void)setLayer:(id)arg1;
- (BOOL)shouldDisplayClosedCaptions;
- (void)setShouldDisplayClosedCaptions:(BOOL)arg1;
- (void)setSubtitleRecipient:(id)arg1;
- (id)attributeForKey:(id)arg1;
- (void)setApplyVideoTrackMatrix;
- (BOOL)setAttribute:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (long)updateActionAtEnd;
- (BOOL)okToNotifyFromThisThread;
- (struct CGImage { }*)grabCGImageAtTime:(double)arg1 withTimeOptions:(NSInteger)arg2 withImageOptions:(id)arg3 actualTime:(double*)arg4;
- (void)requestAsyncCGImagesAtTimes:(id)arg1 withTimeOptions:(NSInteger)arg2 withImageOptions:(id)arg3;
- (void)requestAsyncCGImagesAtTimes:(id)arg1 requestIDs:(id)arg2 withTimeOptions:(NSInteger)arg3 withImageOptions:(id)arg4;
- (void)cancelAllCGImageRequests;
- (void)fmpUserVolumeDidChange:(id)arg1;
- (void)fmpRateDidChange;
- (void)fmpRateDidChangeToRate:(id)arg1;
- (void)rateDidChangeToRate:(float)arg1;
- (void)applyDesiredRepeatMode;
- (void)currentItemWillChangeToItem:(id)arg1 oldItemCurrentTime:(double)arg2;
- (void)currentItemHasChanged:(id)arg1;
- (void)itemHasFinishedPlayingNotification:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)safeSubtitleCommandPosted:(void*)arg1;
- (id)initWithQueue:(id)arg1 error:(id*)arg2;
- (BOOL)isValid;
- (id)initWithQueue:(id)arg1 fmpType:(NSUInteger)arg2 error:(id*)arg3;
- (void)logPerformanceDataForCurrentItem;
- (void)setQueue:(id)arg1;
- (void)updateTimeMarkerObservations;
- (void)scheduleUpdateTimeMarkerObservations;
- (void)registerTimeMarkerObserver:(id)arg1 forItem:(id)arg2 times:(id)arg3 context:(id)arg4;
- (void)removeObserver:(id)arg1 fromTMOArray:(id)arg2;
- (void)unregisterTimeMarkerObserver:(id)arg1 forItem:(id)arg2;
- (BOOL)isCurrentItemReady;
- (void)makeCurrentItemReady;
- (id)currentItem;
- (struct OpaqueFigPlaybackItem { }*)currentFPItem;
- (void)ensurePlaybackQueueImmed;
- (id)bookmarkGroupIDForAVItem:(id)arg1;
- (double)bookmarkTimeForAVItem:(id)arg1;
- (struct OpaqueFigPlaybackItem { }*)createItemWithURL:(id)arg1 flags:(unsigned long)arg2 error:(NSInteger*)arg3;
- (void)avPlaybackQueueCurrentItemChangedNotification:(id)arg1;
- (void)fpItemNotification:(id)arg1 sender:(id)arg2;
- (BOOL)vibrationEnabled;
- (void)setVibrationEnabled:(BOOL)arg1;
- (void)setVibrationPattern:(id)arg1;
- (id)vibrationPattern;
- (void)setBuzzerPattern:(id)arg1;
- (id)buzzerPattern;

@end
