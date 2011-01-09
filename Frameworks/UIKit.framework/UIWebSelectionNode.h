/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWebSelectionNode, UIWebSelection, UIWebSelectionGraph;



@interface UIWebSelectionNode : NSObject 
{
    UIWebSelectionNode *_fromTopByExpanding;
    UIWebSelectionNode *_fromTopByContracting;
    UIWebSelectionNode *_fromBottomByExpanding;
    UIWebSelectionNode *_fromBottomByContracting;
    UIWebSelectionNode *_fromRightByExpanding;
    UIWebSelectionNode *_fromRightByContracting;
    UIWebSelectionNode *_fromLeftByExpanding;
    UIWebSelectionNode *_fromLeftByContracting;
    UIWebSelectionGraph *_sharedGraph;
    UIWebSelection *_selection;
    BOOL _invalid;
}

@property(retain) UIWebSelection *selection;


- (id)initWithSelection:(id)arg1 inGraph:(id)arg2;
- (void)dealloc;
- (id*)nodeByReferenceFromEdge:(NSInteger)arg1 outwards:(BOOL)arg2;
- (NSInteger)oppositeEdge:(NSInteger)arg1;
- (id)nodeByMovingEdge:(NSInteger)arg1 outwards:(BOOL)arg2;
- (void)invalidate;
- (id)selection;
- (void)setSelection:(id)arg1;

@end
