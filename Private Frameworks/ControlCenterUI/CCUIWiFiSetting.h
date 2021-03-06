//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUI/CCUISettingModule.h>

@interface CCUIWiFiSetting : CCUISettingModule
{
    _Bool _wifiEnabled;
    _Bool _wifiInoperative;
}

+ (id)statusOffString;
+ (id)statusOnString;
+ (id)displayName;
+ (id)identifier;
@property(nonatomic, getter=_isWifiInoperative, setter=_setWifiInoperative:) _Bool wifiInoperative; // @synthesize wifiInoperative=_wifiInoperative;
@property(nonatomic, getter=_isWifiEnabled, setter=_setWifiEnabled:) _Bool wifiEnabled; // @synthesize wifiEnabled=_wifiEnabled;
- (_Bool)_isStateOverridden;
- (_Bool)_inoperativeWithEffectiveOverrides;
- (_Bool)_stateWithEffectiveOverrides;
- (id)glyphImageForState:(int)arg1;
- (void)_updateState;
- (_Bool)_toggleState;
- (void)_updateWifiNotification:(id)arg1;
- (void)_tearDown;
- (void)deactivate;
- (void)activate;
- (id)selectedStateColor;
- (id)aggdKey;
- (void)dealloc;

@end

