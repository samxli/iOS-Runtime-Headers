/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSHTTPURLResponseInternal;



@interface NSHTTPURLResponse : NSURLResponse 
{
    NSHTTPURLResponseInternal *_httpInternal;
}

+ (id)localizedStringForStatusCode:(NSInteger)arg1;
+ (BOOL)isErrorStatusCode:(NSInteger)arg1;

- (id)_initWithCFURLResponse:(struct _CFURLResponse { }*)arg1;
- (id)initWithURL:(id)arg1 statusCode:(NSInteger)arg2 headerFields:(id)arg3 requestTime:(double)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)allHeaderFields;
- (NSInteger)statusCode;
- (void)dealloc;
- (id)_peerCertificateChain;
- (id)_clientCertificateChain;
- (id)_clientCertificateState;
- (void)_setPeerTrust:(struct __SecTrust { }*)arg1;
- (struct __SecTrust { }*)_peerTrust;
- (id)_webcore_MIMEType;
- (BOOL)_getCacheControlMaxAge:(double*)arg1;
- (id)_dateFromExpires;
- (id)expirationDate;
- (double)expirationInterval;
- (BOOL)getAppleMaxAge:(double*)arg1;
- (long long)maxExpectedContentLength;

@end
