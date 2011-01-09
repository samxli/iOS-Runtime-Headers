/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@class PBDataReader, NSDictionary, NSString, NSArray, NSMutableArray, NSMutableData, NSURLConnection, NSURL, <PBRequesterDelegate>;



@interface PBRequester : NSObject 
{
    NSURL *_URL;
    <PBRequesterDelegate> *_delegate;
    NSURLConnection *_connection;
    BOOL _ignoresResponse;
    BOOL _loading;
    BOOL _silentLoading;
    BOOL _needsCancel;
    NSMutableData *_data;
    PBDataReader *_dataReader;
    NSUInteger _lastGoodDataOffset;
    BOOL _responseStatusSet;
    NSInteger _responseStatusCode;
    NSMutableArray *_requests;
    NSMutableArray *_responses;
    NSMutableArray *_internalRequests;
    NSMutableArray *_internalResponses;
    NSDictionary *_httpResponseHeaders;
    NSDictionary *_httpRequestHeaders;
    BOOL _parsedResponseHeader;
    double _timeoutSeconds;
    struct __CFRunLoopTimer { } *_timeoutTimer;
    NSString *_logRequestToFile;
    NSString *_logResponseToFile;
    NSArray *_clientCertificates;
}

@property(readonly) NSArray *requests;
@property(readonly) NSArray *internalRequests;
@property(retain) NSArray *clientCertificates;
@property(retain) NSString *logResponseToFile;
@property(retain) NSString *logRequestToFile;
@property double timeoutSeconds;
@property BOOL needsCancel;
@property BOOL silentLoading;
@property(getter=isLoading) BOOL loading;
@property(retain) NSDictionary *httpRequestHeaders;
@property(retain) NSDictionary *httpResponseHeaders;
@property BOOL ignoresResponse;
@property(retain) NSURLConnection *connection;
@property id delegate;
@property(retain) NSURL *URL;


- (id)initWithURL:(id)arg1 andDelegate:(id)arg2;
- (void)dealloc;
- (void)_cleanup;
- (void)setNeedsCancel;
- (void)setLoading:(BOOL)arg1;
- (id)requests;
- (void)addRequest:(id)arg1;
- (id)responseForRequest:(id)arg1;
- (id)internalRequests;
- (void)addInternalRequest:(id)arg1;
- (id)responseForInternalRequest:(id)arg1;
- (void)handleResponse:(id)arg1 forInternalRequest:(id)arg2;
- (id)_languageLocale;
- (id)_applicationID;
- (id)_osVersion;
- (id)requestPreamble;
- (void)writeRequest:(id)arg1 into:(id)arg2;
- (void)start;
- (void)cancel;
- (void)_failWithError:(id)arg1;
- (void)_failWithErrorDomain:(id)arg1 errorCode:(NSInteger)arg2;
- (void)_cancelWithErrorDomain:(id)arg1 errorCode:(NSInteger)arg2;
- (void)cancelWithErrorCode:(NSInteger)arg1;
- (BOOL)readResponsePreamble:(id)arg1;
- (id)tryReadResponseData:(id)arg1 forRequest:(id)arg2;
- (BOOL)_tryParseData;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)_startTimeoutTimer;
- (void)_removeTimeoutTimer;
- (void)_resetTimeoutTimer;
- (void)_timeoutTimerFired;
- (id)clientCertificates;
- (void)setClientCertificates:(id)arg1;
- (id)logResponseToFile;
- (void)setLogResponseToFile:(id)arg1;
- (id)logRequestToFile;
- (void)setLogRequestToFile:(id)arg1;
- (double)timeoutSeconds;
- (void)setTimeoutSeconds:(double)arg1;
- (BOOL)needsCancel;
- (void)setNeedsCancel:(BOOL)arg1;
- (BOOL)silentLoading;
- (void)setSilentLoading:(BOOL)arg1;
- (BOOL)isLoading;
- (id)httpRequestHeaders;
- (void)setHttpRequestHeaders:(id)arg1;
- (id)httpResponseHeaders;
- (void)setHttpResponseHeaders:(id)arg1;
- (BOOL)ignoresResponse;
- (void)setIgnoresResponse:(BOOL)arg1;
- (id)connection;
- (void)setConnection:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)URL;
- (void)setURL:(id)arg1;

@end
