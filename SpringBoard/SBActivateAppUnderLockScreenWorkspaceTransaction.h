//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBToAppsWorkspaceTransaction.h"

#import "SBAlertChangeTransactionDelegate-Protocol.h"

@class NSString, SBAlertChangeTransaction, SBDisableActiveInterfaceOrientationChangeAssertion, SBLockScreenViewControllerBase;

@interface SBActivateAppUnderLockScreenWorkspaceTransaction : SBToAppsWorkspaceTransaction <SBAlertChangeTransactionDelegate>
{
    SBLockScreenViewControllerBase *_lockScreenController;
    SBDisableActiveInterfaceOrientationChangeAssertion *_disableActiveOrientationChangeAssertion;
    SBAlertChangeTransaction *_toLockscreenAlertTransaction;
    CDUnknownBlockType _alertActivationCompletion;
}

- (void).cxx_destruct;
- (void)alert:(id)arg1 didActivateWithCompletion:(CDUnknownBlockType)arg2;
- (_Bool)_shouldUpdateUnderLockStateForForegroundScenes;
- (void)_callAndClearAlertActivationCompletionIfNecessary;
- (void)_endTransition;
- (void)_didComplete;
- (void)_alertDidActivate;
- (void)_setupAndActivate;
- (void)_kickoffAlertActivation;
- (void)_begin;
- (_Bool)shouldPlaceOutgoingScenesUnderLockOnCompletion;
- (_Bool)shouldPerformToAppStateCleanupOnCompletion;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1 lockScreenController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

