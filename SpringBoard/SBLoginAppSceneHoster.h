//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBUISceneDelegate-Protocol.h"
#import "SBLoginAppSceneHoster-Protocol.h"

@class FBUIScene, FBUISceneWorkspace, NSString, SBApplication, SBSUILoginUISceneClientSettingsDiffInspector, UIView;
@protocol SBLoginAppSceneHosterDelegate;

@interface SBLoginAppSceneHoster : NSObject <FBUISceneDelegate, SBLoginAppSceneHoster>
{
    FBUISceneWorkspace *_sceneWorkspace;
    FBUIScene *_loginScene;
    long long _cachedActivationOrientationForInitialClientSettings;
    SBSUILoginUISceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
    _Bool _deferHIDEvents;
    _Bool _hidEventDeferralsInstalled;
    id <SBLoginAppSceneHosterDelegate> _delegate;
}

@property(nonatomic) __weak id <SBLoginAppSceneHosterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool deferHIDEvents; // @synthesize deferHIDEvents=_deferHIDEvents;
- (void).cxx_destruct;
- (void)scene:(id)arg1 didDeactivateWithError:(id)arg2;
- (void)scene:(id)arg1 willActivateWithTransitionContext:(id)arg2;
- (_Bool)scene:(id)arg1 handleIncomingActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2;
- (void)scene:(id)arg1 configureInitialClientSettings:(id)arg2;
- (void)_updateHIDEventDeferralsIfNecessary;
- (id)_appClientSettingsDiffInspector;
@property(readonly, nonatomic) SBApplication *hostedApp; // @dynamic hostedApp;
@property(readonly, nonatomic) NSString *hostedSceneIdentifier;
@property(readonly, nonatomic) NSString *hostedAppBundleID;
@property(readonly, nonatomic) UIView *contentView;
- (void)updateSettingsWithTransitionBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)killLoginApp;
- (void)launchLoginAppWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

