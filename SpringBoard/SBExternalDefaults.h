//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBAbstractDefaults.h>

@class SBExternalCarrierDefaults, SBExternalDemoDefaults, SBExternalDuetDefaults, SBExternalGlobalDefaults, SBExternalOperatorDefaults, SBExternalPhoneDefaults, SBExternalSMSDefaults, SBExternalSettingsDefaults, SBExternalSetupDefaults, SBExternalSoundsDefaults, SBExternalUIKitDefaults, SBExternalWifiDefaults;

@interface SBExternalDefaults : SBAbstractDefaults
{
    SBExternalGlobalDefaults *_lazy_globalDefaults;
    SBExternalCarrierDefaults *_lazy_carrierDefaults;
    SBExternalOperatorDefaults *_lazy_operatorDefaults;
    SBExternalUIKitDefaults *_lazy_uikitDefaults;
    SBExternalDuetDefaults *_lazy_duetDefaults;
    SBExternalDemoDefaults *_lazy_demoDefaults;
    SBExternalSetupDefaults *_lazy_setupDefaults;
    SBExternalSettingsDefaults *_lazy_settingsDefaults;
    SBExternalSMSDefaults *_lazy_smsDefaults;
    SBExternalPhoneDefaults *_lazy_phoneDefaults;
    SBExternalWifiDefaults *_lazy_networkDefaults;
    SBExternalSoundsDefaults *_lazy_soundDefaults;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) SBExternalSoundsDefaults *soundDefaults;
@property(readonly, retain, nonatomic) SBExternalWifiDefaults *networkDefaults;
@property(readonly, retain, nonatomic) SBExternalPhoneDefaults *phoneDefaults;
@property(readonly, retain, nonatomic) SBExternalSMSDefaults *smsDefaults;
@property(readonly, retain, nonatomic) SBExternalSettingsDefaults *settingsDefaults;
@property(readonly, retain, nonatomic) SBExternalSetupDefaults *setupDefaults;
@property(readonly, retain, nonatomic) SBExternalDemoDefaults *demoDefaults;
@property(readonly, retain, nonatomic) SBExternalDuetDefaults *duetDefaults;
@property(readonly, retain, nonatomic) SBExternalUIKitDefaults *uikitDefaults;
@property(readonly, retain, nonatomic) SBExternalOperatorDefaults *operatorDefaults;
@property(readonly, retain, nonatomic) SBExternalCarrierDefaults *carrierDefaults;
@property(readonly, retain, nonatomic) SBExternalGlobalDefaults *globalDefaults;

@end

