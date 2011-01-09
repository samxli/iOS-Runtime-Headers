/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */



@interface CAContext : NSObject 
{
}

@property float level;
@property(readonly) BOOL valid;
@property CGColorSpace *colorSpace;
@property(retain) CALayer *layer;
@property(readonly) NSUInteger contextId;

+ (id)allContexts;
+ (id)currentContext;
+ (id)localContext;
+ (id)localContextWithOptions:(id)arg1;
+ (id)remoteContext;
+ (id)remoteContextWithOptions:(id)arg1;
+ (void)setClientPort:(NSUInteger)arg1;
+ (id)objectForSlot:(NSUInteger)arg1;

- (void)invalidate;
- (void)orderAbove:(NSUInteger)arg1;
- (void)orderBelow:(NSUInteger)arg1;
- (void)setFence:(NSUInteger)arg1 count:(NSUInteger)arg2;
- (NSUInteger)createSlot;
- (void)deleteSlot:(NSUInteger)arg1;
- (void)setObject:(id)arg1 forSlot:(NSUInteger)arg2;

@end
