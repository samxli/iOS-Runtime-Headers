/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKAnnotationViewInternal;



@interface MKAnnotationView : UIView 
{
    MKAnnotationViewInternal *_internal;
}

@property(readonly) NSString *reuseIdentifier;
@property(retain) <MKAnnotation> *annotation;
@property(retain) UIImage *image;
@property CGPoint centerOffset;
@property CGPoint calloutOffset;
@property(getter=isEnabled) BOOL enabled;
@property(getter=isHighlighted) BOOL highlighted;
@property(getter=isSelected) BOOL selected;
@property BOOL canShowCallout;
@property(retain) UIView *leftCalloutAccessoryView;
@property(retain) UIView *rightCalloutAccessoryView;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (NSUInteger)_zIndex;
+ (NSUInteger)_selectedZIndex;
+ (id)_streetViewButtonImage;
+ (id)_streetViewButtonDisabledImage;
+ (id)_streetViewButtonPressedImage;
+ (id)_disclosureCalloutButton;
+ (id)_streetViewCalloutButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (id)reuseIdentifier;
- (void)prepareForReuse;
- (id)annotation;
- (void)setAnnotation:(id)arg1;
- (id)_calloutView;
- (void)_setCalloutView:(id)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)_contentLayer;
- (id)image;
- (void)setImage:(id)arg1;
- (void)_updateZIndex;
- (BOOL)isSelected;
- (void)setSelected:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)canShowCallout;
- (void)setCanShowCallout:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })centerOffset;
- (void)setCenterOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })calloutOffset;
- (void)setCalloutOffset:(struct CGPoint { float x1; float x2; })arg1;
- (NSInteger)_annotationViewType;
- (id)_searchResult;
- (struct { double x1; double x2; })coordinate;
- (void)setPanoramaID:(id)arg1;
- (id)panoramaID;
- (BOOL)_hasSearchResult;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_significantBounds;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)_canDisplayDisclosureInCallout;
- (void)_setCanDisplayDisclosureInCallout:(BOOL)arg1;
- (BOOL)_canDisplayPlacemarkInCallout;
- (void)_setCanDisplayPlacemarkInCallout:(BOOL)arg1;
- (BOOL)_canDisplayStreetViewInCallout;
- (void)_setCanDisplayStreetViewInCallout:(BOOL)arg1;
- (NSUInteger)_mapType;
- (void)_setMapType:(NSUInteger)arg1;
- (id)leftCalloutAccessoryView;
- (void)setLeftCalloutAccessoryView:(id)arg1;
- (id)rightCalloutAccessoryView;
- (void)setRightCalloutAccessoryView:(id)arg1;
- (NSUInteger)_zIndex;
- (void)_setZIndex:(NSUInteger)arg1 notify:(BOOL)arg2;
- (void)_setZIndex:(NSUInteger)arg1;
- (void)_resetZIndex;
- (void)_resetZIndexNotify:(BOOL)arg1;
- (id)_overlayView;
- (BOOL)_hasAlternateOrientation;
- (NSUInteger)_orientationCount;
- (BOOL)_canChangeOrientation;

@end
