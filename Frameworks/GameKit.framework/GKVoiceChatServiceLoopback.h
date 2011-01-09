/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */



@interface GKVoiceChatServiceLoopback : GKVoiceChatServicePrivate <LoopbackSocketTunnelDelegate>
{
    BOOL useLoopback;
}

+ (id)defaultVoiceChatService;

- (BOOL)startVoiceChatWithParticipantID:(id)arg1 error:(id*)arg2;
- (void)stopVoiceChatProc:(id)arg1;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (void)resetState;
- (void)receivedData:(id)arg1 fromParticipantID:(id)arg2;
- (NSUInteger)connectionResultCallbackForCallID:(NSInteger)arg1 result:(struct tagCONNRESULT { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; struct tagIPPORT { NSInteger x_5_1_1; BOOL x_5_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_5_1_3; unsigned short x_5_1_4; } x5; struct tagIPPORT { NSInteger x_6_1_1; BOOL x_6_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_6_1_3; unsigned short x_6_1_4; } x6; struct tagIPPORT { NSInteger x_7_1_1; BOOL x_7_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_7_1_3; unsigned short x_7_1_4; } x7; struct tagIPPORT { NSInteger x_8_1_1; BOOL x_8_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_8_1_3; unsigned short x_8_1_4; } x8; struct tagIPPORT { NSInteger x_9_1_1; BOOL x_9_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; NSUInteger x10; }*)arg2 didReceiveICEPacket:(BOOL)arg3;
- (void)setupLoopback;
- (NSInteger)sipCallbackNotification:(NSInteger)arg1 callID:(NSInteger)arg2 msgIn:(const char *)arg3 msgOut:(char *)arg4 optional:(void*)arg5 confIndex:(NSInteger*)arg6;
- (void)resetLoopback;
- (void)loopbackSocketTunnel:(id)arg1 receivedData:(id)arg2 from:(struct tagIPPORT { NSInteger x1; BOOL x2[16]; union { NSUInteger x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg3;

@end
