/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSValue, UIView, NSMutableArray, MKMapLevelView, UITextField, MKMapView, MKScrollView, MKRouteView, NSArray, MKMapViewPositioningChange, UIImageView, MKRouteLoader, <MKMapViewDelegate><MKMapViewDelegatePrivate>, MKSearchResult, MKOverlayView, NSTimer, NSMutableSet;



@interface MKMapViewInternal : NSObject <UITextFieldDelegate>
{
    MKMapView *view;
    UIView *contentView;
    MKScrollView *scrollView;
    MKMapLevelView **standardMapLevelViews;
    MKMapLevelView **satelliteMapLevelViews;
    MKMapLevelView **hybridMapLevelViews;
    MKMapLevelView **terrainMapLevelViews;
    MKOverlayView *overlayView;
    UIView *accessoryView;
    UIImageView *badgeView;
    MKRouteView *routeView;
    MKRouteView *destinationRouteView;
    UIImageView *routePositionView;
    MKRouteLoader *routeLoader;
    BOOL showsUserLocation;
    BOOL persistFixedUserLocation;
    BOOL isRunningPositioningChange;
    BOOL ignoreLocationUpdates;
    struct __GSEvent { } *gestureChangedEvent;
    NSValue *mouseDownWindowPoint;
    NSValue *mouseUpWindowPoint;
    NSTimer *accessoryTimer;
    NSTimer *annotationTimer;
    NSTimer *startEffectsTimer;
    <MKMapViewDelegate><MKMapViewDelegatePrivate> *delegate;
    NSInteger animationType;
    NSInteger animationTypeHistory;
    NSUInteger suspendedEffectsCount;
    struct { 
        double latitude; 
        double longitude; 
    } routePositionViewCoordinate;
    struct { 
        double latitude; 
        double longitude; 
    } routeTopLeftCoordinate;
    struct { 
        double latitude; 
        double longitude; 
    } routeBottomRightCoordinate;
    struct { 
        double latitude; 
        double longitude; 
    } routeCenterCoordinate;
    NSInteger routeSummaryZoomLevel;
    NSArray *regionsForRouteSteps;
    NSUInteger routeStepIndex;
    struct CGPoint { 
        float x; 
        float y; 
    } doubleTapStartPosition;
    double doubleTapStartTime;
    double doubleTapDelay;
    NSInteger zoomType;
    BOOL callingScroller;
    NSUInteger eventMode;
    NSUInteger eventModeHistory;
    NSUInteger mapType;
    NSMutableSet *zoomStartLevelViews;
    NSMutableArray *zoomingLevelViews;
    struct { 
        double latitude; 
        double longitude; 
    } zoomCoordinate;
    struct { 
        double latitude; 
        double longitude; 
    } zoomEndCoordinate;
    struct CGPoint { 
        float x; 
        float y; 
    } zoomStartWindowPoint;
    struct CGPoint { 
        float x; 
        float y; 
    } zoomEndWindowPoint;
    float startScale;
    float endScale;
    float targetScale;
    BOOL useTargetScale;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } centeringRect;
    NSUInteger tileCount;
    NSUInteger levelViewLoadingCount;
    NSUInteger levelViewTrafficLoadingCount;
    struct BillingPointTracker { NSInteger x1; NSInteger x2; struct MapPoint { 
            NSInteger latitude_; 
            NSInteger longitude_; 
            NSInteger x_pixels_at_max_zoom_; 
            NSInteger y_pixels_at_max_zoom_; 
        } x3; NSInteger x4; NSInteger x5; unsigned char x6; } *billingPointTracker;
    NSInteger searchMode;
    NSInteger trafficStatus;
    NSTimer *tileExpirationTimer;
    NSTimer *defaultLocationTimer;
    BOOL trafficEnabled;
    BOOL checksForTraffic;
    BOOL isLoadingEnabled;
    BOOL showingRoute;
    BOOL needToShowRoute;
    BOOL pansAndZoomsToRouteStep;
    BOOL allowsPulsatingTraffic;
    BOOL liveTrackingEnabled;
    BOOL liveTrackingSupported;
    BOOL liveTrackingAutoSelectZoomLevel;
    BOOL headingTrackingEnabled;
    BOOL hasUserSpecifiedZoomLevel;
    double hoverStartTime;
    NSTimer *hoverExpirationTimer;
    NSTimer *scrollToReCenterUserTimer;
    NSTimer *positioningChangeTimer;
    UITextField *debugView;
    BOOL debugViewHeading;
    BOOL didCompletePinLayout;
    NSInteger lastGesturePinTransitionZoomLevel;
    BOOL isSuspended;
    MKMapViewPositioningChange *positioningChange;
    BOOL suspendSearchResultProcessing;
    BOOL animateFlagWhileSuspendedResultProcessing;
    NSArray *searchResultsWhileSuspendedResultProcessing;
    MKSearchResult *selectedSearchResultWhileSuspendedResultProcessing;
    BOOL didStartDragging;
    BOOL didStartSmoothScrolling;
    BOOL headingEnabled;
    BOOL headingSupported;
    BOOL shouldRotateForHeading;
    BOOL rotationSupported;
    NSTimer *tapAndHoldTimer;
    BOOL ignoreHeadingUpdates;
    NSInteger rotationDirection;
    double heading;
    double annotationViewPerspectiveHeading;
    BOOL zoomEnabled;
    BOOL scrollEnabled;
    BOOL callsDelegateForAllRegionChanges;
    BOOL regionChangeIsAnimated;
    BOOL needsToCallDelegateForRegionChange;
}

@property(retain) NSValue *mouseUpWindowPoint;
@property(retain) NSValue *mouseDownWindowPoint;


- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)updateExpiredTiles;
- (void)showAccessories:(id)arg1;
- (void)showAddedAnnotationsAndRouteAnimated;
- (void)startEffects;
- (void)goToDefaultLocation;
- (void)stopHoverWithChange:(id)arg1;
- (void)scrollToUserLocation;
- (void)runPositioningChangeIfNeeded;
- (void)runPositioningChangeIfNeeded:(id)arg1;
- (id)mouseUpWindowPoint;
- (void)setMouseUpWindowPoint:(id)arg1;
- (id)mouseDownWindowPoint;
- (void)setMouseDownWindowPoint:(id)arg1;

@end
