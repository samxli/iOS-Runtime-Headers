/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSConcreteMutableData : NSMutableData 
{
    unsigned int _reserved : 2;
    unsigned int _hasVM : 1;
    unsigned int _retainCount : 29;
    NSUInteger _length;
    NSUInteger _capacity;
    void *_bytes;
}


- (NSUInteger)length;
- (const void*)bytes;
- (void*)mutableBytes;
- (void)setLength:(NSUInteger)arg1;
- (BOOL)_bytesAreVM;
- (void)appendBytes:(const void*)arg1 length:(NSUInteger)arg2;
- (void)appendData:(id)arg1;
- (void)increaseLengthBy:(NSUInteger)arg1;
- (void)replaceBytesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 withBytes:(const void*)arg2;
- (void)resetBytesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)init;
- (id)initWithCapacity:(NSUInteger)arg1;
- (id)initWithBytes:(void*)arg1 length:(NSUInteger)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5;
- (void)dealloc;
- (void)finalize;

@end
