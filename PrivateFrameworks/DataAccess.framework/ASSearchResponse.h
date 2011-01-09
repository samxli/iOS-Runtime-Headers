/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSArray, NSNumber;



@interface ASSearchResponse : ASItem 
{
    NSArray *_stores;
    NSNumber *_status;
    NSInteger _expectedResultType;
}

@property NSInteger expectedResultType;
@property(copy) NSNumber *status;
@property(retain) NSArray *stores;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;

- (void)dealloc;
- (id)description;
- (id)asParseRules;
- (NSInteger)expectedResultType;
- (void)setExpectedResultType:(NSInteger)arg1;
- (id)status;
- (void)setStatus:(id)arg1;
- (id)stores;
- (void)setStores:(id)arg1;

@end
