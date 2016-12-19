//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BSDescriptionProviding-Protocol.h"
#import "SBAppViewHostRequester-Protocol.h"
#import "SBDisplayLayoutContext-Protocol.h"
#import "SBLayoutElementViewControllerDelegate-Protocol.h"
#import "SBWorkspaceTransitionLayoutDelegate-Protocol.h"

@class FBDisplayLayoutElement, FBDisplayLayoutTransition, FBSDisplay, NSArray, NSMutableDictionary, NSString, SBLayoutElementViewController, SBLayoutState, SBWorkspaceTransitionContext, UIView;
@protocol SBSceneLayoutViewControllerDelegate;

@interface SBSceneLayoutViewController : UIViewController <SBAppViewHostRequester, SBLayoutElementViewControllerDelegate, SBDisplayLayoutContext, SBWorkspaceTransitionLayoutDelegate, BSDescriptionProviding>
{
    FBSDisplay *_display;
    SBLayoutState *_layoutState;
    id <SBSceneLayoutViewControllerDelegate> _delegate;
    SBLayoutState *_transitioningFromLayoutState;
    SBLayoutState *_transitioningToLayoutState;
    SBWorkspaceTransitionContext *_transitionContext;
    FBDisplayLayoutTransition *_displayLayoutTransition;
    NSMutableDictionary *_layoutElementControllersByRole;
    NSMutableDictionary *_previousLayoutElementControllersByRole;
    NSMutableDictionary *_reusableLayoutElementControllers;
    FBDisplayLayoutElement *_homescreenLayoutElement;
    _Bool _userResizing;
    UIView *_sceneContainerView;
}

+ (Class)_layoutStateClass;
+ (id)mainDisplayLayoutViewController;
@property(retain, nonatomic) UIView *sceneContainerView; // @synthesize sceneContainerView=_sceneContainerView;
@property(nonatomic, getter=isUserResizing) _Bool userResizing; // @synthesize userResizing=_userResizing;
@property(retain, nonatomic) SBLayoutState *layoutState; // @synthesize layoutState=_layoutState;
@property(nonatomic) __weak id <SBSceneLayoutViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FBSDisplay *display; // @synthesize display=_display;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (struct CGRect)transitionContext:(id)arg1 referenceFrameForEntity:(id)arg2;
- (id)originalLayoutStateForTransitionContext:(id)arg1;
- (id)layoutStateForTransitionContext:(id)arg1;
- (void)layoutElementViewController:(id)arg1 configureDisplayLayoutElement:(id)arg2;
- (_Bool)shouldAllowSwipeInDimmingViewAtStartLocation:(struct CGPoint)arg1 forLayoutElementViewController:(id)arg2;
- (void)handleDimmingViewTapForLayoutElementViewController:(id)arg1;
- (_Bool)handleMenuButtonPress;
- (void)_configureVisibilityForCurrentLayoutState;
- (void)_verifyLayoutElementControllersAreValidForCurrentLayoutState;
- (long long)_layoutOrientationForInterfaceOrientation:(long long)arg1;
- (_Bool)_shouldRotateToLayoutOrientation:(long long)arg1;
- (_Bool)_isCurrentlyRotating;
- (long long)_transitioningToLayoutOrientation;
- (long long)_transitioningFromLayoutOrientation;
- (long long)_layoutOrientation;
- (_Bool)_shouldAdjustViewAffordancesAfterTransition:(id)arg1;
- (_Bool)_shouldRepositionViewAfterTransition:(id)arg1;
- (void)_doCommonCleanupUponEndingLayoutTransitionWithContext:(id)arg1;
- (void)_endLayoutStateTransitionForFailedTransactionWithContext:(id)arg1;
- (void)_endLayoutStateTransitionForContext:(id)arg1;
- (long long)_dimmingLevelForElement:(id)arg1 inLayout:(id)arg2;
- (_Bool)_presentationChangesSignificantlyOnTransitioningFromLayoutElement:(id)arg1 toLayoutElement:(id)arg2;
- (void)_beginLayoutStateTransitionWithContext:(id)arg1;
- (void)_updateLayoutStateWithContext:(id)arg1;
- (_Bool)_isCurrentlyTransitioning;
- (id)_transitionContext;
- (id)_transitioningToLayoutState;
- (id)_transitioningFromLayoutState;
- (struct CGSize)_referenceSizeForRole:(long long)arg1 withLayoutContext:(id)arg2;
- (struct CGRect)referenceFrameForIdentifier:(id)arg1 inLayoutState:(id)arg2;
- (struct CGRect)referenceFrameForEntity:(id)arg1 inLayoutState:(id)arg2;
- (struct CGRect)referenceFrameForEntity:(id)arg1;
- (struct CGRect)referenceBoundsForIdentifier:(id)arg1 inLayoutState:(id)arg2;
- (struct CGRect)referenceBoundsForEntity:(id)arg1 inLayoutState:(id)arg2;
- (struct CGRect)referenceBoundsForEntity:(id)arg1;
- (void)__testCoordinateSpaceStuff;
- (id)coordinateSpaceForInterfaceOrientation:(long long)arg1;
- (id)coordinateSpaceForLayoutContext:(id)arg1;
- (id)coordinateSpace;
- (long long)appViewRequesterPriority:(id)arg1;
- (id)appViewRequesterIdentifier:(id)arg1;
- (id)appViewForApplication:(id)arg1 inLayoutRole:(long long)arg2 withLayoutContext:(id)arg3 hostRequester:(id)arg4;
- (id)appViewForApplication:(id)arg1 inLayoutRole:(long long)arg2 withLayoutContext:(id)arg3;
- (id)appViewForWorkspaceApplication:(id)arg1 inLayoutState:(id)arg2;
- (id)appViewForWorkspaceApplication:(id)arg1;
- (id)adornmentViewForApplication:(id)arg1 inLayoutRole:(long long)arg2 withLayoutContext:(id)arg3;
- (id)_animationWrapperViewForElement:(id)arg1 layoutState:(id)arg2;
- (id)animationWrapperViewForLayoutState:(id)arg1 roleMask:(unsigned long long)arg2 interfaceOrientation:(long long)arg3;
- (id)animationWrapperViewForLayoutState:(id)arg1 roleMask:(unsigned long long)arg2;
- (id)animationWrapperViewForLayoutState:(id)arg1 interfaceOrientation:(long long)arg2;
- (id)animationWrapperViewForLayoutState:(id)arg1;
- (id)composedAnimationControllerForDosidoWithTransitionRequest:(id)arg1 using:(id)arg2;
- (id)animationControllerForRotatingWithTransitionRequest:(id)arg1;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (_Bool)shouldPerformFullscreenAnimationForTransitionRequest:(id)arg1;
- (void)_placeAppViewControllersInDisplayMode:(long long)arg1 options:(unsigned long long)arg2 withAnimationFactory:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_cleanupDisappearedLayoutElementController:(id)arg1;
- (void)_addViewControllerForLayoutElement:(id)arg1 entity:(id)arg2;
- (void)_addLayoutElementViewController:(id)arg1 forLayoutElement:(id)arg2 entity:(id)arg3;
- (void)_layoutElementViewController:(id)arg1 transitioningFromLayoutElement:(id)arg2 toLayoutElement:(id)arg3;
- (id)_dequeueLayoutElementControllerForReuseOfClass:(Class)arg1;
- (void)_enqueueLayoutViewControllerForReuse:(id)arg1;
@property(readonly, nonatomic) SBLayoutElementViewController *primaryLayoutElementController;
- (id)_transitioningFromLayoutElementControllerForLayoutRole:(long long)arg1;
- (id)_layoutElementControllerForLayoutRole:(long long)arg1;
- (id)_previousLayoutElementControllerWithElementIdentifier:(id)arg1;
- (id)_existingLayoutElementControllerWithElementIdentifier:(id)arg1;
- (id)_transitioningAppViewControllers;
- (id)_transitioningLayoutElementControllers;
@property(readonly, nonatomic) _Bool hasVisibleElements;
@property(readonly, nonatomic) NSArray *appViewControllers;
@property(readonly, nonatomic) NSArray *layoutElementControllers;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewWillLayoutSubviews;
- (void)loadView;
@property(readonly, copy) NSString *description;
- (void)_invalidate;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithDisplay:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

