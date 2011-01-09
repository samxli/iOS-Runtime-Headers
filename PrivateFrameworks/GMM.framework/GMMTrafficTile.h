/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray;



@interface GMMTrafficTile : NSObject 
{
    double expirationTime;
    NSMutableArray *roadsAtSpeed[4];
}

+ (double)defaultExpirationTime;

- (id)init;
- (void)dealloc;
- (double)expirationTime;
- (id)getRoadsAtSpeed:(NSInteger)arg1;
- (BOOL)readFromStream:(struct InputDataStream { char *x1; NSUInteger x2; NSUInteger x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; }*)arg1 tile:(const struct Tile { unsigned char x1; unsigned char x2; NSInteger x3; NSInteger x4; NSInteger x5; }*)arg2;
     /* Encoded args for previous method: c16@0:4^{InputDataStream=*IIBB}8r^{Tile=CCiii}12 */

- (void)invalidate;

@end
