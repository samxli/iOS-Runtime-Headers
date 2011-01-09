/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
 */

@class NSString;



@interface BluetoothDevice : NSObject 
{
    NSString *_name;
    NSString *_address;
    struct BTDeviceImpl { } *_device;
}


- (id)initWithDevice:(struct BTDeviceImpl { }*)arg1 address:(id)arg2;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSInteger)compare:(id)arg1;
- (struct BTDeviceImpl { }*)device;
- (void)setDevice:(struct BTDeviceImpl { }*)arg1;
- (void)_clearName;
- (BOOL)_isNameCached;
- (id)name;
- (id)address;
- (NSInteger)type;
- (id)description;
- (BOOL)paired;
- (BOOL)connected;
- (NSUInteger)connectedServices;
- (NSUInteger)connectedServicesCount;
- (BOOL)supportsBatteryLevel;
- (NSInteger)batteryLevel;
- (BOOL)isAccessory;
- (BOOL)isServiceSupported:(NSUInteger)arg1;
- (void)connect;
- (void)disconnect;
- (void)setPIN:(id)arg1;
- (void)acceptSSP:(NSInteger)arg1;
- (void)unpair;
- (void)endVoiceCommand;
- (struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; })syncSettings;
- (void)setSyncSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; })arg1;
- (id)syncGroups;
- (void)setSyncGroup:(NSInteger)arg1 enabled:(BOOL)arg2;

@end
