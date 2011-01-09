/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/MobileQuickLook.framework/MobileQuickLook
 */

@class NSMutableDictionary, NSString, NSData, NSThread, NSURLConnection, NSURL, NSMutableSet, NSError;



@interface QLPreviewParts : NSObject 
{
    NSURL *_url;
    NSData *_data;
    NSString *_uti;
    BOOL _progressive;
    void *_convertFunction;
    NSURLConnection *_connection;
    id _delegate;
    int (*_dataCallback)();
    int (*_urlCallback)();
    NSURL *previewURL;
    NSMutableSet *registeredURLs;
    NSMutableSet *outstandingURLs;
    NSMutableDictionary *encodingsForURLs;
    NSThread *delegateCallbackThread;
    NSError *mainError;
}

@property(readonly) NSURLRequest *previewRequest;
@property(readonly) NSURLResponse *previewResponse;
@property(readonly) NSURL *previewURL;
@property(retain) id delegate;
@property(retain) NSURLConnection *connection;
@property unknown type *urlCallback;
@property unknown type *dataCallback;
@property BOOL progressive;
@property(retain) NSString *uti;
@property(retain) NSData *data;
@property(retain) NSURL *url;

+ (void)registerPreview:(id)arg1;
+ (void)unregisterPreview:(id)arg1;
+ (id)safeURLScheme;
+ (BOOL)isSafeURL:(id)arg1;
+ (BOOL)isSafeRequest:(id)arg1;
+ (id)relativeStringForSafeURL:(id)arg1;

- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)computePreview;
- (id)_voidRequest;
- (id)_requestForURL:(id)arg1;
- (id)safeRequestForRequest:(id)arg1;
- (void)startComputingPreview;
- (void)computePreviewInThread;
- (void)_registerURL:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
- (void)startDataRepresentationWithContentType:(id)arg1 properties:(id)arg2;
- (id)createAttachmentURLWithID:(id)arg1 properties:(id)arg2;
- (id)createSafeAttachmentURLWithID:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
- (void)appendData:(id)arg1 forURL:(id)arg2 lastChunk:(BOOL)arg3;
- (void)setError:(id)arg1;
- (id)previewRequest;
- (id)previewResponse;
- (unsigned long)cfEncodingForAttachmentURL:(id)arg1;
- (id)previewURL;
- (id)delegate;
- (id)connection;
- (void)setConnection:(id)arg1;
- (int (*)())urlCallback;
- (void)setUrlCallback:(int (*)())arg1;
- (int (*)())dataCallback;
- (void)setDataCallback:(int (*)())arg1;
- (BOOL)progressive;
- (void)setProgressive:(BOOL)arg1;
- (id)uti;
- (void)setUti:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;

@end
