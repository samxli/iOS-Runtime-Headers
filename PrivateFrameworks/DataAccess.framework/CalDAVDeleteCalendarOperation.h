/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString, DAVSession;



@interface CalDAVDeleteCalendarOperation : AYOperation 
{
    NSString *_uri;
    DAVSession *_session;
    NSString *_inboxURI;
}


- (id)initWithSession:(id)arg1 URI:(id)arg2 inboxURI:(id)arg3;
- (void)dealloc;
- (void)deleteCalendar;

@end
