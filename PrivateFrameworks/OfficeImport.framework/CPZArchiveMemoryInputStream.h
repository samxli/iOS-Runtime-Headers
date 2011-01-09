/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSData;



@interface CPZArchiveMemoryInputStream : NSObject <CPZArchiveInputStream>
{
    NSData *mData;
    char *mBytes;
    long long mSize;
}


- (id)initWithData:(id)arg1;
- (void)dealloc;
- (const char *)dataAtOffset:(long long)arg1 size:(unsigned long)arg2 end:(long long)arg3 readSize:(NSUInteger*)arg4;
- (void)readFromOffset:(long long)arg1 size:(unsigned long)arg2 buffer:(char *)arg3;
- (long long)size;

@end
