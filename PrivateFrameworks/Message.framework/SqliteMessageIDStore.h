/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString, MailMessageLibrary;



@interface SqliteMessageIDStore : NSObject 
{
    NSString *_url;
    NSInteger _mailboxRowid;
    MailMessageLibrary *_library;
}


- (id)initWithLibrary:(id)arg1 URLString:(id)arg2;
- (void)_loadMailboxRowidIfNecessary:(struct sqlite3 { }*)arg1;
- (id)knownMessageIDsFromSet:(id)arg1;
- (id)messageIDsAddedBeforeDate:(double)arg1;
- (void)deleteUIDsNotInArray:(id)arg1;
- (NSUInteger)numberOfMessageIDs;
- (void)deleteAllUIDs;
- (unsigned long long)flagsForUID:(id)arg1;
- (void)dealloc;

@end
