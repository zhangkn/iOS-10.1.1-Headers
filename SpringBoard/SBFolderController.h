//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBTreeNodeViewController.h"

#import "SBFolderControllerDelegate-Protocol.h"
#import "SBFolderObserver-Protocol.h"
#import "SBFolderViewDelegate-Protocol.h"

@class NSArray, NSMapTable, NSString, NSTimer, SBAppStatusBarSettingsAssertion, SBFakeStatusBarView, SBFolder, SBFolderContainerView, SBFolderContext, SBFolderControllerAnimationContext, SBFolderControllerBackgroundView, SBFolderView, SBIcon, SBIconAnimator, SBIconViewMap, _UILegibilitySettings;
@protocol SBFolderControllerDelegate;

@interface SBFolderController : SBTreeNodeViewController <SBFolderControllerDelegate, SBFolderObserver, SBFolderViewDelegate>
{
    SBIconViewMap *_viewMap;
    SBFolderContainerView *_containerView;
    SBFolderView *_contentView;
    SBFolderControllerBackgroundView *_backgroundView;
    _Bool _didAutoScroll;
    NSTimer *_autoScrollTimer;
    struct CGPoint _dragPausePoint;
    NSTimer *_dragPauseTimer;
    NSTimer *_closeFolderTimer;
    _Bool _grabbedIconHasEverEnteredFolderView;
    long long _dropDestinationPageIndex;
    NSMapTable *_editingContextsByFolder;
    SBIconAnimator *_iconAnimator;
    _Bool _isOpen;
    _Bool _isEditing;
    _Bool _isAnimating;
    _Bool _active;
    _Bool _rotating;
    _Bool _wasExpandedAfterLastSizeTransition;
    id <SBFolderControllerDelegate> _folderDelegate;
    SBFolder *_folder;
    long long _orientation;
    _UILegibilitySettings *_legibilitySettings;
    _UILegibilitySettings *_accessibilityLegibilitySettings;
    SBIcon *_grabbedIcon;
    SBFolderContext *_lastContext;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    SBFakeStatusBarView *_fakeStatusBar;
    SBFolderControllerAnimationContext *_animationContext;
}

+ (Class)listViewClass;
@property(retain, nonatomic) SBFolderControllerAnimationContext *animationContext; // @synthesize animationContext=_animationContext;
@property(retain, nonatomic) SBFakeStatusBarView *fakeStatusBar; // @synthesize fakeStatusBar=_fakeStatusBar;
@property(retain, nonatomic) SBAppStatusBarSettingsAssertion *statusBarAssertion; // @synthesize statusBarAssertion=_statusBarAssertion;
@property(retain, nonatomic) SBFolderContext *lastContext; // @synthesize lastContext=_lastContext;
@property(retain, nonatomic) SBIcon *grabbedIcon; // @synthesize grabbedIcon=_grabbedIcon;
@property(nonatomic) _Bool wasExpandedAfterLastSizeTransition; // @synthesize wasExpandedAfterLastSizeTransition=_wasExpandedAfterLastSizeTransition;
@property(nonatomic, getter=isRotating) _Bool rotating; // @synthesize rotating=_rotating;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) SBFolderView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) _UILegibilitySettings *accessibilityLegibilitySettings; // @synthesize accessibilityLegibilitySettings=_accessibilityLegibilitySettings;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(readonly, nonatomic) SBIconViewMap *viewMap; // @synthesize viewMap=_viewMap;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) SBFolder *folder; // @synthesize folder=_folder;
@property(nonatomic) __weak id <SBFolderControllerDelegate> folderDelegate; // @synthesize folderDelegate=_folderDelegate;
@property(nonatomic) long long dropDestinationPageIndex; // @synthesize dropDestinationPageIndex=_dropDestinationPageIndex;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_isAnimating;
@property(readonly, nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_isEditing;
@property(nonatomic, getter=isOpen) _Bool open; // @synthesize open=_isOpen;
- (void).cxx_destruct;
- (void)handleReachabilityActivated:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)folderControllerDidReceiveCancelReachabilityAction:(id)arg1;
- (void)folderViewDidReceiveCancelReachabilityAction:(id)arg1;
- (void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;
- (void)folder:(id)arg1 didAddList:(id)arg2;
- (void)_noteFolderListsDidChange;
- (void)folderViewShouldBeginEditing:(id)arg1;
- (void)folderViewShouldClose:(id)arg1 withPinchGesture:(id)arg2;
- (void)folderViewDidEndScrolling:(id)arg1;
- (void)folderViewWillBeginScrolling:(id)arg1;
- (void)folderView:(id)arg1 currentPageIndexDidChange:(long long)arg2;
- (Class)iconListViewClassForFolderView:(id)arg1;
- (void)folderControllerDidEndScrolling:(id)arg1;
- (void)folderControllerShouldBeginEditing:(id)arg1;
- (void)folderControllerShouldClose:(id)arg1 withPinchGesture:(id)arg2;
- (void)folderController:(id)arg1 draggedIconShouldDropFromListView:(id)arg2;
- (_Bool)folderController:(id)arg1 draggedIconMightDropFromListView:(id)arg2;
- (_Bool)folderController:(id)arg1 draggedIconDidMoveFromListView:(id)arg2 toListView:(id)arg3;
- (_Bool)folderController:(id)arg1 draggedIconDidPauseAtLocation:(struct CGPoint)arg2 inListView:(id)arg3;
- (Class)controllerClassForFolder:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (struct UIEdgeInsets)statusBarInsetsForOrientation:(long long)arg1;
- (void)prepareToLaunchTappedIcon:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)currentIndexPath;
- (_Bool)restoreExpandedIndexPath:(id)arg1;
- (_Bool)shouldOpenFolderIcon:(id)arg1;
- (void)popFolderAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pushFolderIcon:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareToClose;
- (void)prepareToOpen;
- (_Bool)_iconAppearsOnCurrentPage:(id)arg1;
- (_Bool)_listIndexIsVisible:(unsigned long long)arg1;
- (unsigned long long)_depth;
- (id)_newAnimatorForZoomUp:(_Bool)arg1;
- (void)_clearIconAnimator;
- (void)unscatterAnimated:(_Bool)arg1 afterDelay:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)noteGrabbedIcon:(id)arg1 locationDidChangeWithTouch:(id)arg2;
- (void)noteGrabbedIconDidChange:(id)arg1;
- (void)noteUserIsInteractingWithIcons;
- (void)_updateAutoScrollForTouch:(id)arg1;
@property(readonly, nonatomic) struct CGRect _autoscrollExclusionRegion;
- (void)_cancelAutoScroll;
- (void)_doAutoScrollByPageCount:(long long)arg1;
- (void)_scrollRight:(id)arg1;
- (void)_scrollLeft:(id)arg1;
- (void)_updateDragPauseForTouch:(id)arg1;
- (void)_dragPauseTimerFired:(id)arg1;
- (_Bool)_canDropIconInListView:(id)arg1;
- (void)_resetDragPauseTimerForPoint:(struct CGPoint)arg1 inIconListView:(id)arg2;
- (void)_cancelDragPauseTimer;
- (void)_updateDropDestinationForTouch:(id)arg1;
- (void)_updateCloseFolderForTouch:(id)arg1;
- (void)_setCloseFolderTimerIfNecessary;
- (void)_closeFolderTimerFired;
- (void)_cancelCloseFolderTimer;
- (void)_cancelAllInteractionTimers;
- (_Bool)_allowUserInteraction;
- (unsigned long long)_indexOfIconListForIcon:(id)arg1;
- (void)_compactFolder;
- (id)_addEmptyListForce:(_Bool)arg1;
- (id)addEmptyListView;
- (void)layoutIconLists:(double)arg1 domino:(_Bool)arg2 forceRelayout:(_Bool)arg3;
- (void)_resetIconLists;
- (void)prepareToTearDown;
- (void)accessibilityReduceTransparencyDidChange;
- (void)_updateStateOfAssociatedController:(id)arg1 animated:(_Bool)arg2;
- (void)_updateAssociatedControllerStateAnimated:(_Bool)arg1;
- (void)fadeContentForMinificationFraction:(double)arg1;
- (void)fadeContentForMagnificationFraction:(double)arg1;
- (void)endAnimatingDockOffscreenFractionForReason:(id)arg1;
- (void)setDockOffscreenFraction:(double)arg1;
- (void)beginAnimatingDockOffscreenFractionForReason:(id)arg1;
- (id)dockListView;
- (_Bool)hasDock;
- (id)targetIconViewForExpandUnexpandTransitionOfFolderWithIcon:(id)arg1;
- (_Bool)isDisplayingIcon:(id)arg1;
- (id)iconListViewContainingIcon:(id)arg1;
- (id)iconListViewForTouch:(id)arg1;
- (id)iconListViewAtIndex:(unsigned long long)arg1;
- (_Bool)doesPageContainIconListView:(long long)arg1;
- (id)currentIconListView;
@property(readonly, nonatomic) unsigned long long iconListViewCount;
@property(readonly, copy, nonatomic) NSArray *iconListViews;
- (_Bool)_restoreFromContext:(id)arg1;
- (id)_createContext;
- (id)folderControllerForFolder:(id)arg1;
- (id)deepestFolderController;
@property(readonly, nonatomic) __weak SBFolderController *outerFolderController;
@property(readonly, nonatomic) SBFolderController *innerFolderController;
- (void)_configureForInnerFolderController:(id)arg1;
- (void)setCurrentPageIndexToListContainingIcon:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setCurrentPageIndexToListContainingIcon:(id)arg1 animated:(_Bool)arg2;
- (_Bool)setCurrentPageIndex:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)setCurrentPageIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) long long currentPageIndex;
@property(readonly, nonatomic, getter=isScrolling) _Bool scrolling;
- (id)_iconPageIndicatorImageSetCache;
- (Class)_contentViewClass;
- (void)_removeFakeStatusBarAndAssertionIfExists;
- (void)_removeFakeStatusBar;
- (void)_resetFakeStatusBarFrameOnly;
- (void)_resetFakeStatusBarSettingsIfNecessary;
- (void)_addFakeStatusBarView;
- (void)removeViewFromHierarchyForChildTreeNodeViewController:(id)arg1;
- (void)addViewToHierarchyForChildTreeNodeViewController:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withContainingExpandedTreeNode:(id)arg2 transitionCoordinator:(id)arg3;
- (void)treeNodeViewController:(id)arg1 willPerformOperation:(long long)arg2 fromViewController:(id)arg3 fromTreeNode:(id)arg4 toViewController:(id)arg5 toTreeNode:(id)arg6 withTransitionCoordinator:(id)arg7;
- (void)_fadeHomescreenAndDockIfNecessaryForFolderOpen:(_Bool)arg1;
- (void)_updateHomescreenAndDockFade;
- (_Bool)_homescreenAndDockShouldFade;
- (void)_setHomescreenAndDockAlpha:(double)arg1;
- (id)treeNodeViewController:(id)arg1 destinationExpandedTreeNodeForTargetTreeNode:(id)arg2;
- (id)treeNodeViewController:(id)arg1 viewControllerForChildTreeNode:(id)arg2;
- (void)loadView;
- (id)view;
- (void)invalidate;
- (void)_invalidate;
- (void)dealloc;
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 context:(id)arg4;
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

