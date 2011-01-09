/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableData, NSString, NSURLConnection, NSFileHandle, NSURL, <SubCalURLRequestDelegate>;



@interface SubCalURLRequest : NSObject 
{
    NSURL *_url;
    <SubCalURLRequestDelegate> *_delegate;
    NSString *_username;
    NSString *_password;
    double _timestamp;
    NSURLConnection *_connection;
    NSMutableData *_connectionData;
    BOOL _useFileCache;
    NSString *_filePath;
    NSFileHandle *_fileHandle;
    BOOL _sendDataUpdateCallback;
}

@property(retain) NSMutableData *connectionData;
@property(retain,readonly) NSString *filePath;
@property BOOL useFileCache;
@property double timestamp;
@property(retain) NSString *password;
@property(retain) NSString *username;
@property <SubCalURLRequestDelegate> *delegate;
@property(retain,readonly) NSURL *url;

+ (id)_cachedICSFilesDirectory;
+ (void)_initializeFileCache;

- (id)initWithURL:(id)arg1;
- (void)dealloc;
- (void)_setHeadersOnRequest:(id)arg1;
- (void)startConnection;
- (void)cancel;
- (void)_finishWithError:(id)arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)_openFileHandle;
- (void)_receivedDataForFile:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (id)connectionData;
- (void)setConnectionData:(id)arg1;
- (id)filePath;
- (BOOL)useFileCache;
- (void)setUseFileCache:(BOOL)arg1;
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
- (id)password;
- (void)setPassword:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)delegate;
- (id)url;

@end
