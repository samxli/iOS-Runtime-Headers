/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSString, MFSlicedImageView, UITextLabel;



@interface AddressAtom : UIControl 
{
    struct { 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } left; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } middle; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } right; 
    } _atomImageSlices;
    MFSlicedImageView *_leftCap;
    MFSlicedImageView *_rightCap;
    MFSlicedImageView *_center;
    UITextLabel *_addressLabel;
    id _delegate;
    NSString *_fullAddress;
    void *_person;
    NSString *_displayString;
    NSUInteger _maxWidth;
    NSInteger _identifier;
    unsigned int _addressIsPhoneNumber : 1;
    unsigned int _needsToSendMouseUpEvents : 1;
    unsigned int _dragging : 1;
    unsigned int _updatedABPerson : 1;
}

+ (void)initialize;

- (void)_registerForNotifications;
- (void)_unregisterForNotifications;
- (id)initWithAddress:(id)arg1 isPhoneNumber:(BOOL)arg2 maxWidth:(float)arg3 useDisplayString:(BOOL)arg4;
- (void)setDelegate:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;
- (void)dealloc;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMaxWidth:(NSUInteger)arg1;
- (void)sizeToFit;
- (void)_updateABPerson;
- (void)_addressBookRecordDidChange;
- (void)_updateDisplayStringIncludingABPerson:(BOOL)arg1;
- (void*)ABPerson;
- (NSInteger)ABPropertyType;
- (NSInteger)identifier;
- (id)unmodifiedAddressString;
- (id)displayString;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)_alwaysHandleScrollerMouseEvent;

@end
