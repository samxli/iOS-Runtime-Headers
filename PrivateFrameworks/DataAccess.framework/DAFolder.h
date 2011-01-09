/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;



@interface DAFolder : NSObject 
{
    NSString *_folderName;
    NSString *_folderID;
    NSString *_parentFolderID;
    NSInteger _folderType;
    BOOL _isDefault;
    BOOL _hasRemoteChanges;
}


- (void)dealloc;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)folderName;
- (void)setFolderName:(id)arg1;
- (id)folderID;
- (void)setFolderID:(id)arg1;
- (id)parentFolderID;
- (void)setParentFolderID:(id)arg1;
- (NSInteger)folderType;
- (void)setFolderType:(NSInteger)arg1;
- (BOOL)isDefault;
- (void)setIsDefault:(BOOL)arg1;
- (BOOL)hasRemoteChanges;
- (void)setHasRemoteChanges:(BOOL)arg1;
- (id)mailboxID;
- (id)parentMailboxID;

@end
