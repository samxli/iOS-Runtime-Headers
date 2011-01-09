/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@class NSOutputStream;



@interface PBStreamWriter : PBDataWriter 
{
    NSOutputStream *_stream;
}

@property(retain) NSOutputStream *stream;

+ (id)writeProtoBuffers:(id)arg1 toFile:(id)arg2;

- (id)initWithOutputStream:(id)arg1;
- (void)dealloc;
- (NSInteger)write:(char *)arg1 maxLength:(NSUInteger)arg2;
- (id)stream;
- (void)setStream:(id)arg1;

@end
