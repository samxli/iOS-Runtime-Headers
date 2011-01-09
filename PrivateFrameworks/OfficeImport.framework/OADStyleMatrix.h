/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;



@interface OADStyleMatrix : NSObject 
{
    NSMutableArray *mFills;
    NSMutableArray *mStrokes;
    NSMutableArray *mEffects;
    NSMutableArray *mBgFills;
}


- (id)init;
- (void)dealloc;
- (void)addFill:(id)arg1;
- (NSUInteger)fillCount;
- (id)fillAtIndex:(NSUInteger)arg1;
- (id)fillAtIndex:(NSUInteger)arg1 color:(id)arg2;
- (void)addStroke:(id)arg1;
- (NSUInteger)strokeCount;
- (id)strokeAtIndex:(NSUInteger)arg1;
- (id)strokeAtIndex:(NSUInteger)arg1 color:(id)arg2;
- (void)addEffects:(id)arg1;
- (NSUInteger)effectsCount;
- (id)effectsAtIndex:(NSUInteger)arg1;
- (id)effectsAtIndex:(NSUInteger)arg1 color:(id)arg2;
- (void)addBgFill:(id)arg1;
- (NSUInteger)bgFillCount;
- (id)bgFillAtIndex:(NSUInteger)arg1;

@end
