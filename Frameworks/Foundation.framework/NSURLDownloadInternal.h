/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLAuthenticationChallenge, NSURLConnectionDelegateProxy;



@interface NSURLDownloadInternal : NSObject 
{
    struct _CFURLDownload { } *cfDownload;
    struct _CFURLAuthChallenge { } *currCFChallenge;
    NSURLAuthenticationChallenge *currNSChallenge;
    NSURLConnectionDelegateProxy *proxy;
    id delegate;
    BOOL downloadActive;
}


- (void)dealloc;

@end
