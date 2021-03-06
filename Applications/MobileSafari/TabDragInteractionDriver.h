//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DragInteractionDriver-Protocol.h"

@class BrowserController, NSString, TabDragContext, TabDragView;

@interface TabDragInteractionDriver : NSObject <DragInteractionDriver>
{
    TabDragContext *_context;
    TabDragView *_tabDragView;
    unsigned long long _previousDragInteractionState;
    unsigned long long _currentDragInteractionState;
    _Bool _tabHasBeenPulledOutFromTabBar;
    BrowserController *_destinationBrowserController;
    double _maxVerticalPositionToReorderTabsInTabBar;
}

- (void).cxx_destruct;
- (void)_draggingUpdatedAtPointInReferenceSpace:(struct CGPoint)arg1 forBrowserController:(id)arg2 currentDragInteractionState:(unsigned long long)arg3 previousDragInteractionState:(unsigned long long)arg4;
- (void)_draggingExitedBrowserController:(id)arg1 lastDragInteractionState:(unsigned long long)arg2;
- (void)_draggingEnteredBrowserController:(id)arg1 atPointInReferenceSpace:(struct CGPoint)arg2 currentDragInteractionState:(unsigned long long)arg3;
- (void)_updateDragDestinationAtPointInReferenceSpace:(struct CGPoint)arg1 draggingView:(id)arg2;
- (void)_animateTabDragViewBasedOnPointInReferenceSpace:(struct CGPoint)arg1 draggingView:(id)arg2;
- (void)_updateTransformForDraggingView:(id)arg1;
- (unsigned long long)_inferredTabDragInteractionStateAtPoint:(struct CGPoint)arg1;
- (id)_browserControllerAtPoint:(struct CGPoint)arg1;
- (_Bool)_browserHasOneWindow;
- (void)prepareToEndDragInteractionWithPoint:(struct CGPoint)arg1 draggingView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGPoint)adjustedPointForUserDragInteractionPoint:(struct CGPoint)arg1 draggingView:(id)arg2;
- (void)dragInteractionDidUpdateWithPoint:(struct CGPoint)arg1 draggingView:(id)arg2;
- (void)dragInteractionDidBeginWithContext:(id)arg1 draggingView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

