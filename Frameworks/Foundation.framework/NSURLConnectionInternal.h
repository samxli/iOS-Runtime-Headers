/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSURLAuthenticationChallenge, NSURL;



@interface NSURLConnectionInternal : NSObject 
{
    struct _CFURLConnection { } *cfConn;
    struct _CFURLAuthChallenge { } *currCFChallenge;
    NSURLAuthenticationChallenge *currNSChallenge;
    NSURL *url;
    id delegate;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*shouldSkipCancelOnRelease;

    BOOL connectionActive;
}



@end
