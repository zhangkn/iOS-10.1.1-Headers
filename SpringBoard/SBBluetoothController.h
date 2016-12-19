//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SBBluetoothController : NSObject
{
    NSMutableArray *_devices;
    _Bool _tetheringConnected;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)bluetoothDeviceEndedVoiceControl:(id)arg1;
- (void)bluetoothDeviceInitiatedVoiceControl:(id)arg1;
- (_Bool)tetheringConnected;
- (id)deviceForAudioRoute:(id)arg1;
- (void)updateBattery;
- (void)batteryChanged:(id)arg1;
- (void)connectionChanged:(id)arg1;
- (void)updateTetheringConnected;
- (void)removeDeviceNotification:(id)arg1;
- (void)addDeviceNotification:(id)arg1;
- (void)iapDeviceChanged:(id)arg1;
- (void)stopWatchingForDevices;
- (void)startWatchingForDevices;
- (void)noteDevicesChanged;
- (int)batteryLevel;
- (_Bool)canReportBatteryLevel;
- (id)firstBTDeviceToReportBatteryLevel;
- (void)dealloc;

@end

