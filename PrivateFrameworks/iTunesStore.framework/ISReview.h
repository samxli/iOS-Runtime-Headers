/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSURL, NSString;



@interface ISReview : NSObject <NSCopying>
{
    NSString *_body;
    NSUInteger _bodyMaxLength;
    BOOL _metadataIsValid;
    NSString *_nickname;
    NSUInteger _nicknameMaxLength;
    float _rating;
    NSURL *_submitURL;
    NSString *_title;
    NSUInteger _titleMaxLength;
}

@property NSUInteger titleMaxLength;
@property(retain) NSString *title;
@property(retain) NSURL *submitURL;
@property float rating;
@property NSUInteger nicknameMaxLength;
@property(retain) NSString *nickname;
@property(readonly) BOOL metadataIsValid;
@property NSUInteger bodyMaxLength;
@property(retain) NSString *body;


- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)loadFromDictionary:(id)arg1;
- (NSUInteger)titleMaxLength;
- (void)setTitleMaxLength:(NSUInteger)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)submitURL;
- (void)setSubmitURL:(id)arg1;
- (float)rating;
- (void)setRating:(float)arg1;
- (NSUInteger)nicknameMaxLength;
- (void)setNicknameMaxLength:(NSUInteger)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (BOOL)metadataIsValid;
- (NSUInteger)bodyMaxLength;
- (void)setBodyMaxLength:(NSUInteger)arg1;
- (id)body;
- (void)setBody:(id)arg1;

@end
