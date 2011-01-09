/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSArray, NSString;



@interface ISHashedDownloadProvider : ISDataProvider 
{
    NSInteger _fileDescriptor;
    NSArray *_hashes;
    NSString *_localFilePath;
    struct CC_MD5state_st { 
        NSUInteger A; 
        NSUInteger B; 
        NSUInteger C; 
        NSUInteger D; 
        NSUInteger Nl; 
        NSUInteger Nh; 
        NSUInteger data[16]; 
        NSInteger num; 
    } _md5Context;
    long long _numberOfBytesToHash;
    long long _totalBytesWritten;
    long long _validatedBytes;
}

@property long long validatedBytes;
@property long long streamedBytes;
@property long long numberOfBytesToHash;
@property(retain) NSString *localFilePath;
@property(retain) NSArray *hashes;


- (id)init;
- (void)dealloc;
- (void)closeStream;
- (BOOL)isStream;
- (BOOL)parseData:(id)arg1 returningError:(id*)arg2;
- (void)setup;
- (BOOL)_checkHashForByteCount:(long long)arg1;
- (void)_closeFile;
- (BOOL)_openFile;
- (BOOL)_truncateToSize:(long long)arg1;
- (long long)_verifiedBytesByInitializingHashForFileSize:(long long)arg1;
- (BOOL)_writeDataWithHashing:(id)arg1 returningError:(id*)arg2;
- (BOOL)_writeDataWithoutHashing:(id)arg1 returningError:(id*)arg2;
- (long long)validatedBytes;
- (void)setValidatedBytes:(long long)arg1;
- (long long)streamedBytes;
- (void)setStreamedBytes:(long long)arg1;
- (long long)numberOfBytesToHash;
- (void)setNumberOfBytesToHash:(long long)arg1;
- (id)localFilePath;
- (void)setLocalFilePath:(id)arg1;
- (id)hashes;
- (void)setHashes:(id)arg1;

@end
