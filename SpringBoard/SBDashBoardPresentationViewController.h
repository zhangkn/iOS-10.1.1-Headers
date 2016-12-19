//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

#import "BSDescriptionProviding-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface SBDashBoardPresentationViewController : SBDashBoardViewControllerBase <BSDescriptionProviding>
{
    unsigned long long _mutatingPresentation;
    unsigned long long _transitioning;
    NSMutableArray *_contentViewControllers;
    NSArray *_activeContentViewControllers;
    SBDashBoardPresentationViewController *_isolatedPresentationViewController;
}

- (void).cxx_destruct;
- (void)_updatePresentationForViewController:(id)arg1 presentation:(id)arg2 animationSettings:(id)arg3;
- (void)_reflowPresentationWithAnimationSettings:(id)arg1;
- (void)_updateContentViewControllersAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (_Bool)handleEvent:(id)arg1;
- (_Bool)handleAppearanceUpdateFromController:(id)arg1 animationSettings:(inout id *)arg2;
- (long long)participantState;
- (void)rebuildEverythingForReason:(id)arg1;
- (void)aggregatePresentation:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)updatePresentationAnimated:(_Bool)arg1;
- (void)dismissPresentationAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissPresentationAnimated:(_Bool)arg1;
- (void)dismissContentViewControllers:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissContentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissContentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)presentContentViewControllers:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentContentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentContentViewController:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning;
@property(readonly, nonatomic, getter=isPresentingContent) _Bool presentingContent;
@property(readonly, nonatomic, getter=hasContent) _Bool hasContent;
@property(readonly, copy, nonatomic) NSArray *presentedViewControllers; // @synthesize presentedViewControllers=_activeContentViewControllers;
@property(readonly, copy, nonatomic) NSArray *contentViewControllers; // @synthesize contentViewControllers=_contentViewControllers;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

