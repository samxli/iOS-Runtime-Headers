/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSArray, NSMutableData, NSString;



@interface MFBufferedDataConsumer : NSObject <MFCollectingDataConsumer>
{
    NSMutableData *_data;
    NSInteger _fd;
    NSString *_path;
    NSArray *_stack;
}


- (NSInteger)appendData:(id)arg1;
- (void)done;
- (id)data;
- (id)init;
- (void)dealloc;

@end