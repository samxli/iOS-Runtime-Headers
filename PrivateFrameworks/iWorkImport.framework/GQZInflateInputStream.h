/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <GQZEntryInputStream>;



@interface GQZInflateInputStream : NSObject <GQZEntryInputStream>
{
    struct z_stream_s { 
        char *next_in; 
        NSUInteger avail_in; 
        NSUInteger total_in; 
        char *next_out; 
        NSUInteger avail_out; 
        NSUInteger total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        NSInteger data_type; 
        NSUInteger adler; 
        NSUInteger reserved; 
    } mStream;
    <GQZEntryInputStream> *mInput;
}


- (id)initWithInput:(id)arg1;
- (void)dealloc;
- (void)readToOwnBuffer:(const char **)arg1 size:(NSUInteger*)arg2;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;

@end
