//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BSUIScrollViewDelegate-Protocol.h"

@class NSString, SBPagedScrollView, SBSearchEtceteraLayoutContentView, SBSearchEtceteraNotificationsLayoutContentView, SBSearchEtceteraSearchLayoutContentView, SBSearchEtceteraTodayLayoutContentView, UIPageControl;
@protocol SBSearchEtceteraLayoutViewDelegate;

@interface SBSearchEtceteraLayoutView : UIView <BSUIScrollViewDelegate>
{
    SBSearchEtceteraTodayLayoutContentView *_todayContentView;
    SBSearchEtceteraSearchLayoutContentView *_searchContentView;
    SBSearchEtceteraNotificationsLayoutContentView *_notificationsContentView;
    SBSearchEtceteraLayoutContentView *_visibleView;
    unsigned long long _currentMode;
    SBPagedScrollView *_scrollView;
    UIView *_notificationsPageView;
    UIView *_todayPageView;
    UIPageControl *_pageControl;
    _Bool _todayContentUnderlapsNavBar;
    unsigned long long _currentStyle;
    double _navigationBarTopInset;
    double _contentBottomInset;
    id <SBSearchEtceteraLayoutViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SBSearchEtceteraLayoutViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double contentBottomInset; // @synthesize contentBottomInset=_contentBottomInset;
@property(nonatomic) double navigationBarTopInset; // @synthesize navigationBarTopInset=_navigationBarTopInset;
@property(nonatomic) _Bool todayContentUnderlapsNavBar; // @synthesize todayContentUnderlapsNavBar=_todayContentUnderlapsNavBar;
@property(nonatomic) unsigned long long currentStyle; // @synthesize currentStyle=_currentStyle;
@property(nonatomic) unsigned long long currentMode; // @synthesize currentMode=_currentMode;
@property(retain, nonatomic) SBSearchEtceteraNotificationsLayoutContentView *notificationsContentView; // @synthesize notificationsContentView=_notificationsContentView;
@property(retain, nonatomic) SBSearchEtceteraSearchLayoutContentView *searchContentView; // @synthesize searchContentView=_searchContentView;
@property(retain, nonatomic) SBSearchEtceteraTodayLayoutContentView *todayContentView; // @synthesize todayContentView=_todayContentView;
@property(readonly, retain, nonatomic, getter=_pageControl) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(readonly, retain, nonatomic, getter=_visibleView) SBSearchEtceteraLayoutContentView *visibleView; // @synthesize visibleView=_visibleView;
- (void).cxx_destruct;
- (void)_delegateCurrentModeDidChange:(unsigned long long)arg1;
- (void)_delegateCurrentModeWillChange:(unsigned long long)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1 withContext:(CDStruct_3b09cf25)arg2;
- (void)scrollViewWillBeginScrolling:(id)arg1;
- (unsigned long long)_indexOfTodayPageView;
- (unsigned long long)_indexOfNotificationsPageView;
- (void)updateVisiblePages;
- (void)_updateScrollingEnabledForSupportedModes;
- (void)_updateScrollViewVisibilityForSupportedModes;
- (void)_resetContentOffsetForSupportedModes;
- (_Bool)_shouldAllowScrollingForStyle:(unsigned long long)arg1;
- (unsigned long long)_currentScrollViewMode;
- (unsigned long long)_scrollViewModeForIndex:(unsigned long long)arg1;
- (unsigned long long)_nextLogicalModeIfResigningSearch;
- (id)_contentViewForControllerMode:(unsigned long long)arg1;
- (void)_setCurrentMode:(unsigned long long)arg1 force:(_Bool)arg2;
- (void)updateViewForInitialPresentation;
- (void)_layoutPageControl;
- (void)layoutSubviews;
- (void)_addPageControl;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

