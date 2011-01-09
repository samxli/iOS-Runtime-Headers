/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSDate, NSString, NSArray;



@interface VMUFatHeader : VMUHeader 
{
    NSDate *_timestamp;
    NSString *_path;
    NSArray *_fatArchs;
}

+ (id)fatHeaderWithMemory:(id)arg1 path:(id)arg2 timestamp:(id)arg3;

- (id)initWithMemory:(id)arg1 path:(id)arg2 timestamp:(id)arg3;
- (BOOL)isFat;
- (id)path;
- (id)timestamp;
- (id)fatArchs;
- (id)fatArchMatchingArchitecture:(id)arg1;
- (void)dealloc;

@end
