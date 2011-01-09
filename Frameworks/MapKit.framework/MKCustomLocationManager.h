/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */



@interface MKCustomLocationManager : NSObject <MKReverseGeocoderDelegate>
{
    struct __CFDictionary { } *_reverseGeocodersForSearchResults;
    struct __CFDictionary { } *_searchResultsForReverseGeocoders;
}

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)processSearchResult:(id)arg1;
- (void)cancelProcessingSearchResult:(id)arg1;
- (void)reverseGeocoder:(id)arg1 didFindPlacemark:(id)arg2;
- (void)reverseGeocoder:(id)arg1 didFailWithError:(id)arg2;

@end
