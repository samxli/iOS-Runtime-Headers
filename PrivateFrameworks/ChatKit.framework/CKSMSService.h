/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableSet;



@interface CKSMSService : CKService 
{
    NSMutableSet *_deliveryObjects;
}

+ (id)sharedSMSService;
+ (id)dbPath;
+ (void)migrate;

- (NSInteger)messageCount;
- (id)userFormattedAlphanumericStringForAddress:(id)arg1;
- (NSInteger)unreadCountForConversation:(id)arg1;
- (BOOL)dbFull;
- (void)markAllMessagesInConversationAsRead:(id)arg1;
- (void)_receivedMessage:(struct __CKSMSRecord { }*)arg1 replace:(BOOL)arg2;
- (void)_sentMessage:(struct __CKSMSRecord { }*)arg1;
- (void)_sendError:(struct __CKSMSRecord { }*)arg1;
- (NSInteger)createConversationWithRecipients:(id)arg1;
- (NSInteger)conversationIDWithRecipients:(id)arg1;
- (void)_registerForCTNotifications;
- (id)init;
- (id)abPropertyTypes;
- (id)_newMMSMessageWithParts:(id)arg1 forConversation:(id)arg2 subject:(id)arg3;
- (id)_newMMSMessageWithComposition:(id)arg1 forConversation:(id)arg2;
- (id)_newSMSMessageWithText:(id)arg1 forConversation:(id)arg2;
- (BOOL)_sendMMSByDefaultForConversation:(id)arg1;
- (id)newMessageWithMessage:(id)arg1 forConversation:(id)arg2 isForward:(BOOL)arg3;
- (id)newMessageWithComposition:(id)arg1 forConversation:(id)arg2;
- (NSInteger)unreadConversationCount;
- (NSInteger)unreadCount;
- (id)placeholderMessageForConversation:(id)arg1 withDate:(id)arg2;
- (void)sendMessage:(id)arg1;
- (void)fixupNames;
- (id)lookupRecipientsForConversation:(id)arg1;
- (id)conversationSummaries:(id*)arg1 groupIDs:(id*)arg2;
- (id)messagesForConversation:(id)arg1 limit:(NSInteger)arg2 moreToLoad:(BOOL*)arg3;
- (void)deleteMessagesForConversationIDs:(id)arg1 removeConversations:(BOOL)arg2;
- (void)dealloc;
- (id)copyEntityForAddressString:(id)arg1;
- (id)unknownEntity;
- (id)headerTitleForEntities:(id)arg1;
- (id)headerTitleForComposeRecipients:(id)arg1 mediaObjects:(id)arg2 subject:(id)arg3;
- (BOOL)restrictsMediaObjects;
- (BOOL)canSendMessageWithMediaObjectTypes:(NSInteger*)arg1;
- (BOOL)canAcceptMediaObjectType:(NSInteger)arg1 givenMediaObjects:(id)arg2;
- (BOOL)canSendToRecipients:(id)arg1 withAttachments:(id)arg2 alertIfUnable:(BOOL)arg3;
- (NSInteger)maxRecipientCount;
- (BOOL)canAcceptMediaObject:(id)arg1 givenMediaObjects:(id)arg2;
- (NSInteger)maxAttachmentCount;
- (BOOL)isValidAddress:(id)arg1;
- (double)maxTrimDurationForMediaType:(NSInteger)arg1;

@end
