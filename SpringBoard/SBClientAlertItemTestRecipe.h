//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBTestRecipe-Protocol.h"

@class NSString, SBAlertItem;

@interface SBClientAlertItemTestRecipe : NSObject <SBTestRecipe>
{
    SBAlertItem *_item;
}

+ (id)title;
- (void).cxx_destruct;
- (id)_nextAlertItemToTest;
- (id)_mapsApp;
- (id)_anySUDescriptor;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)_dismissCurrentItem;
- (id)_currentAssistantLanguage;
- (void)educationAlertWasDeactivated:(id)arg1;
- (id)_chatMMSInformationMissingAlert;
- (id)_chatMMSDelayedDownloadAlert;
- (id)_chatCMSBAlert;
- (id)_chatMessageAlert;
- (id)_chatCarrierSMSAlert;
- (id)_mapsThermalAlert;
- (id)_wifiTrustAlert;
- (id)_wifiPasswordAlert;
- (id)_wifiIsEnterpriseAlert;
- (id)_wifiErrorAlert;
- (id)_wifiDontAskAlert;
- (id)_wifiBTSSPAlert;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
