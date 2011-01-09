/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class SPSearchQuery, <SPDaemonQueryDelegate>;



@interface SPDaemonQueryToken : NSObject 
{
    struct __CFMachPort { } *_callbackPort;
    SPSearchQuery *_query;
    <SPDaemonQueryDelegate> *_delegate;
    NSUInteger _queryID;
}

@property(readonly) SPSearchQuery *query;
@property(readonly) NSUInteger queryID;
@property <SPDaemonQueryDelegate> *delegate;


- (void)_callbackPipeBrokenCallback:(struct __CFMachPort { }*)arg1;
- (void)_sendResults:(id)arg1;
- (void)_sendError:(id)arg1;
- (void)_sendCompletion;
- (id)initWithQuery:(id)arg1 andCallbackPort:(NSUInteger)arg2;
- (void)dealloc;
- (id)query;
- (NSUInteger)queryID;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
