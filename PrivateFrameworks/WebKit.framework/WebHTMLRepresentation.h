/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebHTMLRepresentationPrivate;



@interface WebHTMLRepresentation : NSObject <WebDocumentRepresentation, WebDocumentDOM>
{
    WebHTMLRepresentationPrivate *_private;
}

+ (id)supportedMIMETypes;
+ (id)supportedNonImageMIMETypes;
+ (id)supportedImageMIMETypes;

- (id)init;
- (void)dealloc;
- (void)finalize;
- (void)_redirectDataToManualLoader:(id)arg1 forPluginView:(id)arg2;
- (void)setDataSource:(id)arg1;
- (BOOL)_isDisplayingWebArchive;
- (void)receivedData:(id)arg1 withDataSource:(id)arg2;
- (void)receivedError:(id)arg1 withDataSource:(id)arg2;
- (void)finishedLoadingWithDataSource:(id)arg1;
- (BOOL)canProvideDocumentSource;
- (BOOL)canSaveAsWebArchive;
- (id)documentSource;
- (id)title;
- (id)DOMDocument;
- (id)elementWithName:(id)arg1 inForm:(id)arg2;
- (BOOL)elementDoesAutoComplete:(id)arg1;
- (BOOL)elementIsPassword:(id)arg1;
- (id)formForElement:(id)arg1;
- (id)currentForm;
- (id)controlsInForm:(id)arg1;
- (id)searchForLabels:(id)arg1 beforeElement:(id)arg2;
- (id)matchLabels:(id)arg1 againstElement:(id)arg2;
- (BOOL)formElementLooksLikeCreditCardNumberField:(id)arg1;
- (BOOL)formElementLooksLikeSecurityCodeField:(id)arg1;

@end
