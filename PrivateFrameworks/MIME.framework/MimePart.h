/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSMutableDictionary, NSString, PartialNetworkData, NSData, MimePart, MFData;



@interface MimePart : WRObject <WeakReferenceHolder>
{
    NSString *_type;
    NSString *_subtype;
    NSMutableDictionary *_bodyParameters;
    NSString *_contentTransferEncoding;
    NSMutableDictionary *_otherIvars;
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    } _range;
    id _parentOrBody;
    MimePart *_nextPart;
    PartialNetworkData *_partialData;
    NSData *_fullData;
    MFData *_decodedData;
}

+ (void)initialize;
+ (BOOL)parseContentTypeHeader:(id)arg1 type:(id*)arg2 subtype:(id*)arg3;
+ (Class)attachmentClass;
+ (BOOL)isRecognizedClassForContent:(id)arg1;

- (void)dealloc;
- (id)init;
- (id)type;
- (void)setType:(id)arg1;
- (id)subtype;
- (void)setSubtype:(id)arg1;
- (id)bodyParameterForKey:(id)arg1;
- (void)setBodyParameter:(id)arg1 forKey:(id)arg2;
- (id)bodyParameterKeys;
- (id)preservedHeaderValueForKey:(id)arg1;
- (id)contentTransferEncoding;
- (void)setContentTransferEncoding:(id)arg1;
- (id)disposition;
- (void)setDisposition:(id)arg1;
- (id)dispositionParameterForKey:(id)arg1;
- (void)setDispositionParameter:(id)arg1 forKey:(id)arg2;
- (id)dispositionParameterKeys;
- (id)contentDescription;
- (void)setContentDescription:(id)arg1;
- (id)contentID;
- (void)setContentID:(id)arg1;
- (id)contentLocation;
- (void)setContentLocation:(id)arg1;
- (id)languages;
- (void)setLanguages:(id)arg1;
- (id)parentPart;
- (id)firstChildPart;
- (id)nextSiblingPart;
- (id)subparts;
- (id)subpartAtIndex:(NSInteger)arg1;
- (void)objectWillBeDeallocated:(id)arg1;
- (void)setSubparts:(id)arg1;
- (void)addSubpart:(id)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })range;
- (void)setRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)decodedDataForData:(id)arg1;
- (id)mimeBody;
- (void)setMimeBody:(id)arg1;
- (id)description;
- (id)attachmentFilename;
- (unsigned long)textEncoding;
- (NSUInteger)approximateRawSize;
- (BOOL)isReadableText;
- (id)_partThatIsAttachment;
- (BOOL)shouldConsiderInlineOverridingExchangeServer;
- (BOOL)isAttachment;
- (BOOL)isRich;
- (BOOL)isHTML;
- (BOOL)usesKnownSignatureProtocol;
- (NSUInteger)totalTextSize;
- (id)startPart;
- (NSInteger)numberOfAlternatives;
- (id)alternativeAtIndex:(NSInteger)arg1;
- (id)signedData;
- (id)textHtmlPart;
- (id)decryptedMessageBodyIsEncrypted:(BOOL*)arg1 isSigned:(BOOL*)arg2;
- (void)clearCachedDescryptedMessageBody;
- (id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id*)arg2;
- (void)configureFileWrapper:(id)arg1;
- (id)fileWrapperForcingDownload:(BOOL)arg1;
- (id)fileWrapper;
- (void)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(BOOL)arg3;
- (id)copyBodyDataToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2 downloadIfNecessary:(BOOL)arg3 isComplete:(BOOL*)arg4;
- (id)copyBodyDataToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2;
- (id)copyBodyDataToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)bodyDataToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)bodyDataForcingDownload:(BOOL)arg1;
- (BOOL)_shouldContinueDecodingProcess;
- (id)contentToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5;
- (id)contentToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2 asHTML:(BOOL)arg3;
- (id)contentToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4;
- (NSUInteger)numberOfAttachments;
- (void)getNumberOfAttachments:(NSUInteger*)arg1 isSigned:(BOOL*)arg2 isEncrypted:(BOOL*)arg3;
- (id)attachments;
- (id)chosenAlternativePart;
- (id)_fullMimeTypeEvenInsideAppleDouble;
- (id)decodeText;
- (id)contentsForTextSystemToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5;
- (id)contentsForTextSystemToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4;
- (id)contentsForTextSystemToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)contentsForTextSystemToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2;
- (id)contentsForTextSystemForcingDownload:(BOOL)arg1;
- (id)contentsForTextSystem;
- (id)decodeApplicationZip;
- (id)decodeApplicationOctet_stream;
- (id)decodeMultipartRelated;
- (id)decodeMultipartAlternative;
- (id)decodeMultipart;
- (id)bodyDataToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2;
- (id)bodyData;
- (BOOL)parseIMAPPropertyList:(id)arg1;
- (id)partNumber;
- (BOOL)parseMimeBody;
- (id)YahooXMLContent;

@end
