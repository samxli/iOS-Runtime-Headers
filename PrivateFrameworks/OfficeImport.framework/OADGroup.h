/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;



@interface OADGroup : OADDrawable <OADDrawableContainer>
{
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mLogicalBounds;
    NSMutableArray *mChildren;
}


- (id)init;
- (void)dealloc;
- (id)groupProperties;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })logicalBounds;
- (void)setLogicalBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSUInteger)childCount;
- (void)addChild:(id)arg1;
- (void)addChildren:(id)arg1;
- (id)childAtIndex:(NSUInteger)arg1;
- (id)children;
- (void)setParentTextListStyle:(id)arg1;

@end
