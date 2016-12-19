//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSTransactionObserver-Protocol.h"

@class NSString, SBMainSwitcherViewController, SBSwitcherForcePressSystemGestureTransaction;

@interface SBMainSwitcherGestureCoordinator : NSObject <BSTransactionObserver>
{
    SBSwitcherForcePressSystemGestureTransaction *_switcherForcePressTransaction;
    _Bool _waitingForTransactionCreation;
    SBMainSwitcherViewController *_switcherController;
    _Bool _switcherAnimationRevealing;
    _Bool _slideUpGestureRevealedOrDismissedSwitcher;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)transactionDidComplete:(id)arg1;
- (void)_releaseOrientationLock;
- (void)_lockOrientation;
- (_Bool)isAppSwitcherShowing;
- (void)_slideUpGestureCancelled;
- (void)_slideUpGestureEndedWithCompletionType:(long long)arg1 cumulativePercentage:(double)arg2;
- (void)_slideUpGestureChanged:(double)arg1;
- (void)_slideUpGestureBegan;
- (void)_handleSwitcherSlideUpGesture:(id)arg1;
- (void)_forcePressGestureBeganWithGesture:(id)arg1;
- (void)_handleSwitcherForcePressGesture:(id)arg1;
- (void)handleSwitcherSlideUpGesture:(id)arg1;
- (void)handleSwitcherForcePressGesture:(id)arg1;
- (id)initWithMainSwitcherController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

