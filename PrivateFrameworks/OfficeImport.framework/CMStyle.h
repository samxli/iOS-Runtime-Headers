/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary, NSMutableString;



@interface CMStyle : NSObject 
{
    NSMutableDictionary *properties;
    NSMutableString *mStyleString;
}


- (id)init;
- (id)initWithStyle:(id)arg1;
- (void)dealloc;
- (id)properties;
- (void)addProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForName:(id)arg1;
- (id)attributeForName:(id)arg1;
- (id)cssStyleString;
- (void)appendPropertyForName:(id)arg1 oadTextSpacing:(id)arg2;
- (void)appendPropertyForName:(id)arg1 oadTextSpacing:(id)arg2 unit:(NSInteger)arg3;
- (void)appendPropertyForName:(id)arg1 oadTextSpacing:(id)arg2 lineHeight:(float)arg3 unit:(NSInteger)arg4;
- (void)appendPropertyForName:(id)arg1 stringWithColons:(id)arg2;
- (void)appendPropertyForName:(id)arg1 stringValue:(id)arg2;
- (void)appendPropertyForName:(id)arg1 intValue:(NSInteger)arg2;
- (void)appendPropertyForName:(id)arg1 length:(double)arg2 unit:(NSInteger)arg3;
- (void)appendPropertyForName:(id)arg1 color:(id)arg2;
- (void)appendPropertyString:(id)arg1;
- (void)appendPositionInfoFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)appendSizeInfoFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)appendDefaultBorderStyle;

@end
