//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BookmarksPanelStateRestoring-Protocol.h"
#import "BookmarksToolbarItemProvider-Protocol.h"
#import "PreviewTableViewControllerDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WebBookmarksClientDelegateProtocol-Protocol.h"

@class NSString, NSTimer, PreviewTableViewController, SafariFetcherServerProxy, UIBarButtonItem, UITableView, WebBookmarkCollection, WebBookmarkList, _UIContentUnavailableView;
@protocol LinkPreviewProvider, ReadingListViewControllerDelegate;

@interface ReadingListViewController : UIViewController <BookmarksToolbarItemProvider, PreviewTableViewControllerDelegate, UISearchBarDelegate, WebBookmarksClientDelegateProtocol, BookmarksPanelStateRestoring, UITableViewDelegate, UITableViewDataSource>
{
    UIBarButtonItem *_unreadFilterButton;
    WebBookmarkCollection *_collection;
    _Bool _networkIsReachable;
    WebBookmarkList *_readingList;
    SafariFetcherServerProxy *_safariFetcherServerProxy;
    NSString *_archivingBookmarkUUID;
    _UIContentUnavailableView *_explanationView;
    NSTimer *_deletionNotificationTimer;
    PreviewTableViewController *_tableViewController;
    _Bool _loadIconsSynchronously;
    NSString *_userTypedFilter;
    _Bool _showingAllBookmarks;
    id <ReadingListViewControllerDelegate> _delegate;
    id <LinkPreviewProvider> _linkPreviewProvider;
    UITableView *_tableView;
}

@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <LinkPreviewProvider> linkPreviewProvider; // @synthesize linkPreviewProvider=_linkPreviewProvider;
@property(nonatomic) __weak id <ReadingListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool showingAllBookmarks; // @synthesize showingAllBookmarks=_showingAllBookmarks;
- (void).cxx_destruct;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)previewTableViewController:(id)arg1 URLForRowAtIndexPath:(id)arg2;
- (id)safari_tableViewScrollPositionSaveIdentifier;
- (id)safari_tableViewForScrollPositionSaving;
- (void)bookmarksServerProxy:(id)arg1 didStopFetchingReadingListItem:(id)arg2;
- (void)bookmarksServerProxy:(id)arg1 didStartFetchingReadingListItem:(id)arg2;
- (void)bookmarksServerProxyConnectionInvalidated:(id)arg1;
- (void)bookmarksServerProxyDidFinishFetching:(id)arg1;
@property(readonly, nonatomic) NSString *collectionType;
- (void)restoreScrollPosition:(double)arg1;
- (double)currentScrollPosition;
- (_Bool)restoreStateWithDictionary:(id)arg1;
- (id)currentStateDictionary;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_readingListItemAtIndexPath:(id)arg1 setUnread:(_Bool)arg2;
- (void)_readingListItemAtIndexPathDelete:(id)arg1;
- (void)_updateTableViewByRemovingReadingListItemAtIndexPath:(id)arg1;
- (void)_readingListItemAtIndexPath:(id)arg1 lockAndPerformUpdates:(CDUnknownBlockType)arg2 performBlockIfLockFailed:(CDUnknownBlockType)arg3;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateCurrentSelectedItemIfNeeded;
- (id)_currentReadingListBookmark;
- (void)_readingListBookmarkDidUpdate:(id)arg1;
- (void)_webBookmarksDidReload:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_disconnectSafariFetcherServerProxy;
- (void)_connectSafariFetcherServerProxy;
- (void)_postChangeNotification;
- (void)_scheduleDelayedChangeNotification;
- (void)didMarkBookmarkUnreadAtIndex:(unsigned long long)arg1;
- (void)didAddNewReadingListBookmark;
- (id)bookmarksRightBarButtonItem;
- (id)_unreadFilterButtonTitle;
- (void)_didChangeUnreadFilter;
- (void)_reloadReadingListAndTable;
- (void)_reloadReadingList;
- (void)_networkReachabilityChanged:(id)arg1;
- (id)_bookmarkAtIndexPath:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)_clearExplanationView;
- (void)_showExplanationView;
- (id)bookmarksNavigationController;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

