/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableArray, CKConversation, CKService;



@interface CKConversationList : NSObject 
{
    NSMutableArray *_conversations;
    CKConversation *_pendingConversation;
    NSMutableArray *_groupsToDelete;
    BOOL _fullyLoaded;
    CKService *_service;
}

@property(readonly) CKService *service;


- (id)initWithService:(id)arg1;
- (void)dealloc;
- (id)conversationForRecipients:(id)arg1 create:(BOOL)arg2;
- (id)_recipientForMessage:(id)arg1;
- (id)_createConversationForMessage:(id)arg1 groupID:(NSInteger)arg2;
- (id)_conversationForMessage:(id)arg1 groupID:(NSInteger)arg2 create:(BOOL)arg3;
- (id)conversationForGroupID:(NSInteger)arg1;
- (id)existingConversationForGroupID:(NSInteger)arg1;
- (id)conversationForMessage:(id)arg1 create:(BOOL)arg2;
- (void)resetCaches;
- (void)fixupNames;
- (id)activeConversations;
- (void)_addGroupToDeletionSchedule:(NSInteger)arg1;
- (void)_deleteGroups;
- (id)loadedConversations;
- (id)conversations;
- (id)existingConversationForAddresses:(id)arg1;
- (void)resort;
- (void)_conversationChanged;
- (void)addConversation:(id)arg1;
- (void)unpendConversation;
- (void)applyPendingConversation;
- (id)pendingConversation:(BOOL)arg1;
- (NSInteger)unreadCount;
- (void)deleteConversationAtIndex:(NSInteger)arg1;
- (id)service;

@end
