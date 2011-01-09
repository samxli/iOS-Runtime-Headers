/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary;



@interface EBGraphic : NSObject 
{
    NSMutableDictionary *mIDsToShapes;
}

+ (void)readGraphicsWithState:(id)arg1;
+ (void)writeChartGlobals:(id)arg1 state:(id)arg2;
+ (void)copyBinary:(NSUInteger)arg1 size:(NSUInteger)arg2 owner:(NSInteger)arg3 to:(id)arg4 state:(id)arg5;
+ (id)readMainGraphicWithState:(id)arg1;
+ (NSInteger)objectTypeForShape:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)readGraphicWithState:(id)arg1;
- (void)readNotes:(id)arg1;

@end
