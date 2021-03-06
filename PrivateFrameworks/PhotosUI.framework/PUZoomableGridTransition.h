/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class <UIViewControllerContextTransitioning>, NSIndexPath, PUMomentsZoomLevelManager, UICollectionView, UICollectionViewTransitionLayout;

@interface PUZoomableGridTransition : NSObject <UIViewControllerInteractiveTransitioning> {
    struct CGSize { 
        float width; 
        float height; 
    UICollectionViewTransitionLayout *__transitionLayout;
    NSIndexPath *_anchorItemIndexPath;
    UICollectionView *_collectionView;
    } _currentInteractiveCenterOffset;
    float _currentInteractiveProgress;
    BOOL _interactive;
    unsigned int _originZoomLevel;
    unsigned int _targetZoomLevel;
    <UIViewControllerContextTransitioning> *_transitionContext;
    unsigned int _transitionState;
    PUMomentsZoomLevelManager *_zoomLevelManager;
}

@property(setter=_setTransitionLayout:,retain) UICollectionViewTransitionLayout * _transitionLayout;
@property(retain) NSIndexPath * anchorItemIndexPath;
@property struct CGSize { float x1; float x2; } currentInteractiveCenterOffset;
@property float currentInteractiveProgress;
@property(getter=isInteractive,readonly) BOOL interactive;
@property unsigned int originZoomLevel;
@property unsigned int targetZoomLevel;
@property(retain) <UIViewControllerContextTransitioning> * transitionContext;
@property unsigned int transitionState;
@property(readonly) PUMomentsZoomLevelManager * zoomLevelManager;

- (void).cxx_destruct;
- (void)_setCurrentInteractiveCenterOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)_setCurrentInteractiveProgress:(float)arg1;
- (void)_setOriginZoomLevel:(unsigned int)arg1;
- (void)_setTargetZoomLevel:(unsigned int)arg1;
- (void)_setTransitionLayout:(id)arg1;
- (void)_setTransitionState:(unsigned int)arg1;
- (id)_transitionLayout;
- (id)anchorItemIndexPath;
- (void)cancelInteractiveTransitionAnimated;
- (struct CGSize { float x1; float x2; })currentInteractiveCenterOffset;
- (float)currentInteractiveProgress;
- (void)finishInteractiveTransitionAnimated;
- (id)initWithOriginLevel:(unsigned int)arg1 targetLevel:(unsigned int)arg2 zoomLevelManager:(id)arg3 interactive:(BOOL)arg4;
- (BOOL)isInteractive;
- (unsigned int)originZoomLevel;
- (void)setAnchorItemIndexPath:(id)arg1;
- (void)setTransitionContext:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (unsigned int)targetZoomLevel;
- (id)transitionContext;
- (unsigned int)transitionState;
- (void)updateInteractiveTransitionForProgress:(float)arg1 centerOffset:(struct CGSize { float x1; float x2; })arg2;
- (id)zoomLevelManager;

@end
