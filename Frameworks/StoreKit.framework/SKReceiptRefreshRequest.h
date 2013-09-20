/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class NSDictionary;

@interface SKReceiptRefreshRequest : SKRequest {
    NSDictionary *_properties;
}

@property(readonly) NSDictionary * receiptProperties;

- (void)_handleReply:(id)arg1;
- (void)_sendXPCMessage;
- (BOOL)_wantsExpired;
- (BOOL)_wantsRevoked;
- (BOOL)_wantsVPP;
- (void)dealloc;
- (id)initWithReceiptProperties:(id)arg1;
- (id)receiptProperties;

@end