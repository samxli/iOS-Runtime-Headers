/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray, NSString;



@interface GMMRating : PBCodable 
{
    NSInteger _starRatingAverage_E3;
    BOOL _hasStarRatingAverage_E3;
    NSInteger _totalReviews;
    BOOL _hasTotalReviews;
    NSMutableArray *_numReviewsStarRating1To5s;
    NSString *_snippet;
}

@property(readonly) NSInteger numReviewsStarRating1To5sCount;
@property(readonly) BOOL hasSnippet;
@property(retain) NSString *snippet;
@property(retain) NSMutableArray *numReviewsStarRating1To5s;
@property(readonly) BOOL hasTotalReviews;
@property NSInteger totalReviews;
@property(readonly) BOOL hasStarRatingAverage_E3;
@property NSInteger starRatingAverage_E3;


- (id)init;
- (void)dealloc;
- (void)setStarRatingAverage_E3:(NSInteger)arg1;
- (void)setTotalReviews:(NSInteger)arg1;
- (NSInteger)numReviewsStarRating1To5sCount;
- (void)setNumReviewsStarRating1To5:(NSInteger)arg1 atIndex:(NSUInteger)arg2;
- (NSInteger)numReviewsStarRating1To5AtIndex:(NSUInteger)arg1;
- (void)addNumReviewsStarRating1To5:(NSInteger)arg1;
- (BOOL)hasSnippet;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)snippet;
- (void)setSnippet:(id)arg1;
- (id)numReviewsStarRating1To5s;
- (void)setNumReviewsStarRating1To5s:(id)arg1;
- (BOOL)hasTotalReviews;
- (NSInteger)totalReviews;
- (BOOL)hasStarRatingAverage_E3;
- (NSInteger)starRatingAverage_E3;

@end
