/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */



@interface DAVListMembers : DAVRequest 
{
    BOOL showHidden;
}

+ (id)listMembersRequestWithURL:(id)arg1 showHidden:(BOOL)arg2;
+ (id)listMembersRequestWithSession:(id)arg1 path:(id)arg2 showHidden:(BOOL)arg3;

- (id)initListMembersWithURL:(id)arg1 showHidden:(BOOL)arg2;
- (id)initListMembersWithSession:(id)arg1 path:(id)arg2 showHidden:(BOOL)arg3;
- (void)finalizeOperation;
- (id)members;

@end