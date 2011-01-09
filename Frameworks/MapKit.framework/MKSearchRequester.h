/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class GMMRequester;



@interface MKSearchRequester : NSObject <PBRequesterDelegate>
{
    id _delegate;
    GMMRequester *_requester;
}

@property id delegate;


- (id)initWithSearchDelegate:(id)arg1;
- (void)dealloc;
- (void)startWithRequest:(id)arg1;
- (void)cancel;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidFinish:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
