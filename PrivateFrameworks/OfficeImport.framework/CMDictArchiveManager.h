/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSString, NSMutableString;



@interface CMDictArchiveManager : CMArchiveManager 
{
    NSMutableString *mCssString;
    NSMutableDictionary *mStyleCache;
    NSMutableDictionary *mResources;
    NSString *mPrefix;
    NSString *mResourceUrlProtocol;
    NSMutableString *mMainHtml;
    NSString *mName;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mIsFrameset;

}


- (id)initWithName:(id)arg1 resourcePathPrefix:(id)arg2;
- (void)dealloc;
- (void)setIsFrameset;
- (id)name;
- (id)createResourceWithName:(id)arg1;
- (void)pushData:(id)arg1 toPath:(id)arg2;
- (void)pushText:(id)arg1 toPath:(id)arg2;
- (id)createDictionaryWithSizeInfos:(BOOL)arg1;
- (NSInteger)resourceCount;
- (id)resourceUrlProtocol;
- (id)addCssStyle:(id)arg1;
- (void)addCssStyle:(id)arg1 withName:(id)arg2;
- (void)pushCssToPath:(id)arg1;
- (id)cssStylesheetString;

@end
