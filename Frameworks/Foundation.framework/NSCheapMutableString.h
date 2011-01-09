/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSCheapMutableString : NSMutableString 
{
    union { 
        unsigned short *fat; 
        char *thin; 
    } contents;
    struct { 
        unsigned int isFat : 1; 
        unsigned int freeWhenDone : 1; 
        unsigned int refs : 30; 
    } flags;
    NSUInteger numCharacters;
    void *_reserved;
}


- (void)setContentsNoCopy:(void*)arg1 length:(NSUInteger)arg2 freeWhenDone:(BOOL)arg3 isUnicode:(BOOL)arg4;
- (void)dealloc;
- (void)finalize;
- (unsigned short)characterAtIndex:(NSUInteger)arg1;
- (NSUInteger)length;
- (BOOL)getBytes:(char *)arg1 maxLength:(NSUInteger)arg2 usedLength:(NSUInteger*)arg3 encoding:(NSUInteger)arg4 options:(NSUInteger)arg5 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg6 remainingRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg7;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (NSUInteger)fastestEncoding;
- (const char *)cString;
- (const char *)lossyCString;
- (NSUInteger)cStringLength;

@end
