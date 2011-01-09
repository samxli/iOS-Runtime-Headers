/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFError;



@interface DADeliveryConsumer : DAMailAccountConsumer <DAMessageSendConsumer>
{
    NSInteger status;
    MFError *_error;
}

@property(retain) MFError *error;


- (void)messageSentWithContext:(void*)arg1;
- (void)actionFailed:(NSInteger)arg1 forTask:(id)arg2 error:(id)arg3;
- (void)dealloc;
- (id)error;
- (void)setError:(id)arg1;

@end
