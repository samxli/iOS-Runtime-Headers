/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMachPort;



@interface MPMediaLibraryInternal : MPServerObjectProxy <MPMediaLibrary>
{
    NSMachPort *_launchNotifyPort;
    NSInteger _launchNotifyPortToken;
    unsigned int _didCheckIn : 1;
    NSUInteger _serverPort;
    NSUInteger _clientPort;
    struct __CFRunLoopSource { } *_runLoopSource;
    NSInteger _libraryChangeObservers;
    NSUInteger _serverConnectionDeathCount;
    unsigned int _determinedHasMedia : 1;
    unsigned int _hasMedia : 1;
    unsigned int _determinedHasSongs : 1;
    unsigned int _hasSongs : 1;
}


- (void)prepareForDecodingWithCoder:(id)arg1;
- (void)prepareForRemoteSelectorInvocation;
- (void)serverConnectionDied;

@end
