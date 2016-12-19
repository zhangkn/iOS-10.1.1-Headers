//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBAlert, SBAppStatusBarSettingsAssertion, SBMainAlertManager, SBRemoteAlertAdapter;

@interface SBUIAnimationRemoteAlertToAlert : SBUIMainScreenAnimationController
{
    SBRemoteAlertAdapter *_remoteAlert;
    SBAlert *_toAlert;
    SBMainAlertManager *_alertManager;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    _Bool _initialFakeStatusBarNeeded;
    double _animationDuration;
}

- (void).cxx_destruct;
- (void)_animationFinished;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (id)animationSettings;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

