/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UICollectionView, UICollectionViewLayout;

@interface UICollectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {
    struct { 
        unsigned int clearsSelectionOnViewWillAppear : 1; 
        unsigned int useLayoutToLayoutNavigationTransitions : 1; 
    UICollectionView *_collectionView;
    } _collectionViewControllerFlags;
    UICollectionViewLayout *_layout;
}

@property BOOL clearsSelectionOnViewWillAppear;
@property(retain) UICollectionView * collectionView;
@property(readonly) UICollectionViewLayout * collectionViewLayout;
@property BOOL useLayoutToLayoutNavigationTransitions;

- (void)__viewWillAppear:(BOOL)arg1;
- (id)_animatorForOperation:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)_clearSharedView;
- (id)_newCollectionViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (void)_setSharedCollectionView:(id)arg1;
- (void)_setUseLayoutToLayoutNavigationTransitions:(BOOL)arg1 withCheck:(BOOL)arg2;
- (id)_uiCollectionView;
- (id)_wrappingView;
- (BOOL)clearsSelectionOnViewWillAppear;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)collectionView;
- (id)collectionViewLayout;
- (id)contentScrollView;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)loadView;
- (void)setClearsSelectionOnViewWillAppear:(BOOL)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setUseLayoutToLayoutNavigationTransitions:(BOOL)arg1;
- (void)setView:(id)arg1;
- (BOOL)shouldCrossFadeBottomBars;
- (BOOL)shouldCrossFadeNavigationBar;
- (BOOL)useLayoutToLayoutNavigationTransitions;
- (void)viewWillUnload;

@end
