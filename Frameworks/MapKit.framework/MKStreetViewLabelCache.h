/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSMutableDictionary, UIFont;



@interface MKStreetViewLabelCache : NSObject 
{
    NSMutableDictionary *current;
    NSMutableDictionary *previous;
    NSUInteger labelWidth;
    NSUInteger labelHeight;
    UIFont *font;
    struct CGContext { } *scratchContext;
    void *scratchBytes;
    NSUInteger arrowTexture;
}

@property(readonly) NSUInteger arrowTexture;


- (id)init;
- (NSUInteger)textureForName:(id)arg1;
- (void)ageLabels;
- (void)dealloc;
- (NSUInteger)arrowTexture;

@end
