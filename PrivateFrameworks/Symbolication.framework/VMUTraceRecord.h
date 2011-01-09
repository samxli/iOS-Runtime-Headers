/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */



@interface VMUTraceRecord : NSObject 
{
    NSUInteger seqnum;
    NSUInteger type;
    NSUInteger address;
    NSUInteger argument;
    NSUInteger depth;
    NSUInteger *frames;
}


- (id)initWithLoggingRecord:(struct { NSUInteger x1; NSUInteger x2; NSUInteger x3; NSUInteger x4; }*)arg1 forTask:(NSUInteger)arg2;
- (id)initWithBacktrace:(id)arg1 forTask:(NSUInteger)arg2;
- (id)initWithTraceRecord:(id)arg1 withDepth:(NSUInteger)arg2;
- (id)initWithTraceRecord:(id)arg1;
- (NSUInteger)seqnum;
- (NSUInteger)threadID;
- (NSUInteger)type;
- (NSUInteger)address;
- (NSUInteger)argument;
- (NSUInteger)depth;
- (NSUInteger*)frames;

@end
