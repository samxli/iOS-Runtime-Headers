/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */



@interface CPZFileOutputStream : NSObject <CPZSeekableOutputStream>
{
    struct __sFILE { char *x1; NSInteger x2; NSInteger x3; short x4; short x5; struct __sbuf { 
            char *_base; 
            NSInteger _size; 
        } x6; NSInteger x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { 
            char *_base; 
            NSInteger _size; 
        } x13; struct __sFILEX {} *x14; NSInteger x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { 
            char *_base; 
            NSInteger _size; 
        } x18; NSInteger x19; long long x20; } *mFile;
}


- (id)initWithPath:(id)arg1;
- (void)dealloc;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long)arg2;
- (long long)offset;
- (void)seekToOffset:(long long)arg1 whence:(NSInteger)arg2;

@end
