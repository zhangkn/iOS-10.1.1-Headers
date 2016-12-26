//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BookmarksPanelStateRestoring-Protocol.h"
#import "BookmarksToolbarItemProvider-Protocol.h"
#import "PreviewTableViewControllerDelegate-Protocol.h"
#import "SharedLinksSubscriptionsViewControllerDelegate-Protocol.h"
#import "SocialLinksTableViewCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WBSAutomaticReadingListFallbackIconProvider-Protocol.h"

@class NSMutableArray, NSString, PreviewTableViewController, UIBarButtonItem, _UIContentUnavailableView;
@protocol LinkPreviewProvider, SocialLinksViewControllerDelegate;

@interface SocialLinksViewController : UIViewController <WBSAutomaticReadingListFallbackIconProvider, BookmarksToolbarItemProvider, PreviewTableViewControllerDelegate, SharedLinksSubscriptionsViewControllerDelegate, SocialLinksTableViewCellDelegate, BookmarksPanelStateRestoring, UITableViewDelegate, UITableViewDataSource>
{
    PreviewTableViewController *_tableViewController;
    NSMutableArray *_cachedItems;
    _UIContentUnavailableView *_explanationView;
    UIBarButtonItem *_subscriptionsButton;
    _Bool _forceCallToRequestCompleted;
    _Bool _finishedFirstRequest;
    id <SocialLinksViewControllerDelegate> _delegate;
    id <LinkPreviewProvider> _linkPreviewProvider;
}

+ (void)getFallbackIconForAutomaticReadingListItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)initialize;
+ (_Bool)hasAnyAccount;
@property(nonatomic) __weak id <LinkPreviewProvider> linkPreviewProvider; // @synthesize linkPreviewProvider=_linkPreviewProvider;
@property(nonatomic) __weak id <SocialLinksViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)previewTableViewController:(id)arg1 URLForRowAtIndexPath:(id)arg2;
- (void)socialLinksTableViewCellProfilePictureWasTapped:(id)arg1;
- (id)socialLinksTableViewCell:(id)arg1 serviceImageForReadingListItem:(id)arg2;
- (id)sharedLinksSubscriptionsViewControllerServiceIconForAccount:(id)arg1;
- (void)sharedLinksSubscriptionsViewControllerSubscribeToCurrentWebFeed:(id)arg1;
- (id)sharedLinksSubscriptionsViewControllerCurrentWebFeedURL:(id)arg1;
- (id)safari_tableViewScrollPositionSaveIdentifier;
- (id)safari_tableViewForScrollPositionSaving;
- (id)bookmarksRightBarButtonItem;
- (id)_serviceIconForSource:(id)arg1;
- (void)_requestCompleted:(id)arg1;
- (void)_accountsChanged:(id)arg1;
- (void)_itemsChanged:(id)arg1;
- (void)_updateExplanationViewVisibility;
- (void)_clearExplanationView;
- (void)_showExplanationView;
@property(readonly, nonatomic) NSString *collectionType;
- (void)restoreScrollPosition:(double)arg1;
- (double)currentScrollPosition;
- (_Bool)restoreStateWithDictionary:(id)arg1;
- (id)currentStateDictionary;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateCurrentSelectedItemIfNeeded;
- (id)_currentAutomaticReadingListItem;
- (void)_didPressSubscriptionsButton;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)refreshStateChanged:(id)arg1;
- (void)_contentSizeDidChange:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_requestMoreItemsFromAllSources;
- (void)loadView;
- (id)bookmarksNavigationController;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

