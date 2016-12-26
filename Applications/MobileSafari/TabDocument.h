//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AppBannerMetaTagContentObserver-Protocol.h"
#import "LoadingControllerDelegate-Protocol.h"
#import "MergeableItem-Protocol.h"
#import "QuickWebsiteSearchEventListener-Protocol.h"
#import "StoreBannerDelegate-Protocol.h"
#import "WBSFluidProgressControllerWindowDelegate-Protocol.h"
#import "WBSFluidProgressStateSource-Protocol.h"
#import "WBUFormAutoFillControllerDelegate-Protocol.h"
#import "WKNavigationDelegatePrivate-Protocol.h"
#import "WKUIDelegatePrivate-Protocol.h"
#import "_SFDialogControllerDelegate-Protocol.h"
#import "_SFFindOnPageViewDelegate-Protocol.h"
#import "_SFPageLoadErrorControllerDelegate-Protocol.h"
#import "_SFSafeBrowsingControllerDelegate-Protocol.h"
#import "_SFTelephonyNavigationMitigationPolicyDelegate-Protocol.h"
#import "_WKDiagnosticLoggingDelegate-Protocol.h"
#import "_WKFormDelegate-Protocol.h"

@class BrowserController, CSSearchableItemAttributeSet, FindOnPageCompletionProvider, FindOnPageView, LinkPreviewViewController, LoadingController, NSDictionary, NSError, NSMutableArray, NSString, NSURL, NSUUID, NSUserActivity, PageLoadTest, PageLoadTestStatistics, PinnableBanner, ReaderContextWK2, SafariWebView, StoreBanner, TabBarItem, TabOverviewItem, TiltedTabItem, TouchIconFetcher, UIImage, UIView, WBSAutomaticReadingListItem, WBSFluidProgressController, WBSFluidProgressState, WBSHistoryVisit, WBSSameDocumentNavigationToHistoryVisitCorrelator, WBUFormAutoFillController, WBUInjectedJavaScriptController, WBUWebClipMetadataFetcher, WKBackForwardListItem, WebBookmark, _SFDialogController, _SFDownloadController, _SFFluidProgressView, _SFNavigationBarItem, _SFPageLoadErrorController, _SFQuickLookDocument, _SFQuickLookDocumentController, _SFQuickLookDocumentWriter, _SFReloadOptionsController, _SFSafariSharingExtensionController, _SFSafeBrowsingController, _SFTabStateData, _SFTelephonyNavigationMitigationPolicy, _SFURLSpoofingMitigator, _WKDownload, _WKRemoteObjectInterface, _WKSessionState;
@protocol TabDocumentDelegate, WBSFluidProgressStateSource;

@interface TabDocument : NSObject <_SFSafeBrowsingControllerDelegate, _SFPageLoadErrorControllerDelegate, AppBannerMetaTagContentObserver, LoadingControllerDelegate, QuickWebsiteSearchEventListener, StoreBannerDelegate, WBSFluidProgressStateSource, WBSFluidProgressControllerWindowDelegate, WBUFormAutoFillControllerDelegate, WKNavigationDelegatePrivate, WKUIDelegatePrivate, _SFDialogControllerDelegate, _SFFindOnPageViewDelegate, _WKFormDelegate, _WKDiagnosticLoggingDelegate, _SFTelephonyNavigationMitigationPolicyDelegate, MergeableItem>
{
    id <TabDocumentDelegate> _delegate;
    BrowserController *_browserController;
    _SFQuickLookDocumentController *_quickLookDocumentController;
    TabBarItem *_tabBarItem;
    LoadingController *_loadingController;
    _SFQuickLookDocument *_quickLookDocument;
    _Bool _hibernated;
    _Bool _allowURLAsTitle;
    WBSFluidProgressState *_fluidProgressState;
    WBSFluidProgressController *_fluidProgressController;
    _Bool _isClosed;
    ReaderContextWK2 *_readerContext;
    _Bool _hasDoneReaderAvailabilityDetection;
    _Bool _wasOpenedFromLink;
    _Bool _wasOpenedFromHistory;
    unsigned long long _downloadBackgroundTaskIdentifier;
    PageLoadTestStatistics *_pageLoadStatistics;
    PageLoadTest *_pageLoadTest;
    _Bool _showingReader;
    _Bool _shouldRestoreReader;
    long long _readerViewTopScrollOffset;
    long long _externalAppRedirectState;
    NSDictionary *_initialArticleScrollDictionaryForCloudTab;
    SafariWebView *_readerWebView;
    unsigned long long _progressAnimationSuppressedCount;
    _Bool _EVOrganizationNameIsValid;
    NSString *_EVOrganizationName;
    NSUserActivity *_userActivity;
    _Bool _forwardActivityToCoreSpotlight;
    SafariWebView *_webView;
    NSError *_lastLoadError;
    _SFURLSpoofingMitigator *_URLSpoofingMitigator;
    _WKSessionState *_savedSessionState;
    _WKRemoteObjectInterface *_siteSpecificSearchEventListenerInterface;
    _WKRemoteObjectInterface *_appBannerMetaTagContentObserverInterface;
    _SFSafariSharingExtensionController *_sharingExtensionController;
    _SFReloadOptionsController *_reloadOptionsController;
    _SFQuickLookDocumentWriter *_quickLookDocumentWriter;
    WBUInjectedJavaScriptController *_activityJSController;
    WBUWebClipMetadataFetcher *_webClipMetadataFetcher;
    TouchIconFetcher *_touchIconFetcher;
    NSMutableArray *_fallbackURLs;
    _Bool _loadWasUserDriven;
    FindOnPageCompletionProvider *_findCompletionProvider;
    WBUFormAutoFillController *_autoFillController;
    _SFFluidProgressView *_progressView;
    _SFNavigationBarItem *_navigationBarItem;
    _Bool _displayingStandaloneImage;
    _Bool _displayingStandaloneMedia;
    _Bool _quickLookDocumentCheckCompleted;
    _Bool _privateBrowsingEnabled;
    _Bool _didFirstPaint;
    _SFDialogController *_dialogController;
    _Bool _shouldSuppressDialogsThatBlockWebProcess;
    WebBookmark *_bookmarkForIconFetching;
    WKBackForwardListItem *_backForwardListItemForCurrentAppLinkBannerCheck;
    StoreBanner *_storeBanner;
    PinnableBanner *_appBannerPendingFirstPaint;
    _Bool _sourceApplicationIsValid;
    _Bool _isDisplayingTelephonyPrompt;
    _SFTelephonyNavigationMitigationPolicy *_telephonyNavigationPolicy;
    _Bool siteCustomIconPrecomposed;
    _Bool _shouldRevealAppLinkBannerForNextCommit;
    _Bool _storeBannersAreDisabled;
    _Bool _suppressingProgressAnimationForNavigationGesture;
    _Bool _wantsReaderWhenActivated;
    _Bool _hibernatedDueToMemoryWarning;
    _Bool _showingContinuous;
    _Bool _persistWhenHibernated;
    _Bool _active;
    _Bool _blankDocument;
    _Bool _preparingForNewUserActivity;
    _Bool _didFinishDocumentLoad;
    _Bool _didFirstLayout;
    _Bool _contentIsReadyForSnapshot;
    _Bool _downloadedFileTypeIsQuickLookDocument;
    _WKDownload *_fileDownload;
    UIImage *siteCustomIcon;
    FindOnPageView *_findOnPageView;
    _SFDownloadController *_downloadController;
    PinnableBanner *_appBanner;
    NSString *_sourceApplicationBundleIdentifierForNextCommit;
    TabOverviewItem *_tabOverviewItem;
    TiltedTabItem *_tiltedTabItem;
    WebBookmark *_readingListBookmark;
    unsigned long long _sessionStateRestorationSource;
    WBSAutomaticReadingListItem *_automaticReadingListItem;
    NSURL *_webFeedURL;
    NSURL *_URLFromExternalApplication;
    _SFPageLoadErrorController *_pageLoadErrorController;
    WBSSameDocumentNavigationToHistoryVisitCorrelator *_sameDocumentNavigationToHistoryVisitCorrelator;
    _SFSafeBrowsingController *_safeBrowsingController;
    NSURL *_tabReuseURL;
    NSUUID *_UUID;
    double _lastViewedTime;
    WBSHistoryVisit *_lastVisit;
    LinkPreviewViewController *_previewViewController;
    NSUUID *_ownerUUID;
    CSSearchableItemAttributeSet *_searchableItemAttributes;
    struct CGPoint _scrollPoint;
}

+ (id)tabDocumentForWKWebView:(id)arg1;
@property(retain, nonatomic) CSSearchableItemAttributeSet *searchableItemAttributes; // @synthesize searchableItemAttributes=_searchableItemAttributes;
@property(nonatomic) __weak NSUUID *ownerUUID; // @synthesize ownerUUID=_ownerUUID;
@property(nonatomic) _Bool downloadedFileTypeIsQuickLookDocument; // @synthesize downloadedFileTypeIsQuickLookDocument=_downloadedFileTypeIsQuickLookDocument;
@property(retain, nonatomic) LinkPreviewViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
@property(readonly, nonatomic) _Bool contentIsReadyForSnapshot; // @synthesize contentIsReadyForSnapshot=_contentIsReadyForSnapshot;
@property(readonly, nonatomic) _Bool didFirstLayout; // @synthesize didFirstLayout=_didFirstLayout;
@property(readonly, nonatomic) _Bool didFinishDocumentLoad; // @synthesize didFinishDocumentLoad=_didFinishDocumentLoad;
@property(retain, nonatomic) WBSHistoryVisit *lastVisit; // @synthesize lastVisit=_lastVisit;
@property(nonatomic) double lastViewedTime; // @synthesize lastViewedTime=_lastViewedTime;
@property(copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(copy, nonatomic) NSURL *tabReuseURL; // @synthesize tabReuseURL=_tabReuseURL;
@property(nonatomic) struct CGPoint scrollPoint; // @synthesize scrollPoint=_scrollPoint;
@property(readonly, nonatomic) _SFSafeBrowsingController *safeBrowsingController; // @synthesize safeBrowsingController=_safeBrowsingController;
@property(readonly, nonatomic) TabBarItem *tabBarItem; // @synthesize tabBarItem=_tabBarItem;
@property(nonatomic, getter=isPreparingForNewUserActivity) _Bool preparingForNewUserActivity; // @synthesize preparingForNewUserActivity=_preparingForNewUserActivity;
@property(nonatomic, getter=isBlankDocument) _Bool blankDocument; // @synthesize blankDocument=_blankDocument;
@property(readonly, nonatomic) SafariWebView *webView; // @synthesize webView=_webView;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool persistWhenHibernated; // @synthesize persistWhenHibernated=_persistWhenHibernated;
@property(readonly, nonatomic) WBSSameDocumentNavigationToHistoryVisitCorrelator *sameDocumentNavigationToHistoryVisitCorrelator; // @synthesize sameDocumentNavigationToHistoryVisitCorrelator=_sameDocumentNavigationToHistoryVisitCorrelator;
@property(readonly, nonatomic) _SFPageLoadErrorController *pageLoadErrorController; // @synthesize pageLoadErrorController=_pageLoadErrorController;
@property(retain, nonatomic) NSURL *URLFromExternalApplication; // @synthesize URLFromExternalApplication=_URLFromExternalApplication;
@property(retain, nonatomic) NSURL *webFeedURL; // @synthesize webFeedURL=_webFeedURL;
@property(nonatomic, getter=isShowingContinuous) _Bool showingContinuous; // @synthesize showingContinuous=_showingContinuous;
@property(readonly, retain, nonatomic) WBSAutomaticReadingListItem *automaticReadingListItem; // @synthesize automaticReadingListItem=_automaticReadingListItem;
@property(nonatomic) unsigned long long sessionStateRestorationSource; // @synthesize sessionStateRestorationSource=_sessionStateRestorationSource;
@property(nonatomic, getter=wasHibernatedDueToMemoryWarning) _Bool hibernatedDueToMemoryWarning; // @synthesize hibernatedDueToMemoryWarning=_hibernatedDueToMemoryWarning;
@property(nonatomic, getter=isDisplayingStandaloneMedia) _Bool displayingStandaloneMedia; // @synthesize displayingStandaloneMedia=_displayingStandaloneMedia;
@property(nonatomic, getter=isDisplayingStandaloneImage) _Bool displayingStandaloneImage; // @synthesize displayingStandaloneImage=_displayingStandaloneImage;
@property(readonly, nonatomic) _Bool privateBrowsingEnabled; // @synthesize privateBrowsingEnabled=_privateBrowsingEnabled;
@property(nonatomic) _Bool wantsReaderWhenActivated; // @synthesize wantsReaderWhenActivated=_wantsReaderWhenActivated;
@property(nonatomic) _Bool suppressingProgressAnimationForNavigationGesture; // @synthesize suppressingProgressAnimationForNavigationGesture=_suppressingProgressAnimationForNavigationGesture;
@property(retain, nonatomic) WebBookmark *readingListBookmark; // @synthesize readingListBookmark=_readingListBookmark;
@property(readonly, nonatomic) TiltedTabItem *tiltedTabItem; // @synthesize tiltedTabItem=_tiltedTabItem;
@property(readonly, nonatomic) TabOverviewItem *tabOverviewItem; // @synthesize tabOverviewItem=_tabOverviewItem;
@property(nonatomic) _Bool storeBannersAreDisabled; // @synthesize storeBannersAreDisabled=_storeBannersAreDisabled;
@property(copy, nonatomic) NSString *sourceApplicationBundleIdentifierForNextCommit; // @synthesize sourceApplicationBundleIdentifierForNextCommit=_sourceApplicationBundleIdentifierForNextCommit;
@property(nonatomic) _Bool shouldRevealAppLinkBannerForNextCommit; // @synthesize shouldRevealAppLinkBannerForNextCommit=_shouldRevealAppLinkBannerForNextCommit;
@property(retain, nonatomic) PinnableBanner *appBanner; // @synthesize appBanner=_appBanner;
@property(retain, nonatomic) _SFDownloadController *downloadController; // @synthesize downloadController=_downloadController;
@property(readonly, nonatomic) FindOnPageView *findOnPageView; // @synthesize findOnPageView=_findOnPageView;
@property(readonly, nonatomic) _SFReloadOptionsController *reloadOptionsController; // @synthesize reloadOptionsController=_reloadOptionsController;
@property(readonly, nonatomic) WBSFluidProgressState *progressState; // @synthesize progressState=_fluidProgressState;
@property(retain, nonatomic) PageLoadTestStatistics *pageLoadStatistics; // @synthesize pageLoadStatistics=_pageLoadStatistics;
@property(nonatomic) long long externalAppRedirectState; // @synthesize externalAppRedirectState=_externalAppRedirectState;
@property(nonatomic) _Bool siteCustomIconPrecomposed; // @synthesize siteCustomIconPrecomposed;
@property(retain, nonatomic) UIImage *siteCustomIcon; // @synthesize siteCustomIcon;
@property(nonatomic) long long readerViewTopScrollOffset; // @synthesize readerViewTopScrollOffset=_readerViewTopScrollOffset;
@property(nonatomic) _Bool shouldRestoreReader; // @synthesize shouldRestoreReader=_shouldRestoreReader;
@property(nonatomic, getter=isShowingReader) _Bool showingReader; // @synthesize showingReader=_showingReader;
@property(readonly, retain, nonatomic) _SFQuickLookDocumentController *quickLookDocumentController; // @synthesize quickLookDocumentController=_quickLookDocumentController;
@property(nonatomic) _Bool wasOpenedFromLink; // @synthesize wasOpenedFromLink=_wasOpenedFromLink;
@property(retain, nonatomic) _SFQuickLookDocument *quickLookDocument; // @synthesize quickLookDocument=_quickLookDocument;
@property(retain, nonatomic) _WKDownload *fileDownload; // @synthesize fileDownload=_fileDownload;
@property(nonatomic) __weak BrowserController *browserController; // @synthesize browserController=_browserController;
- (void).cxx_destruct;
- (void)presentDialog:(id)arg1 forTelephonyNavigationPolicy:(id)arg2;
- (void)dialogController:(id)arg1 willPresentDialog:(id)arg2;
- (_Bool)dialogController:(id)arg1 shouldSuppressDialog:(id)arg2;
- (void)_showPreparePrintInteractionControllerDuringLoadAlertForUse:(long long)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_preparePrintInteractionController:(id)arg1 withPrintRenderer:(id)arg2 frame:(id)arg3 forUse:(long long)arg4 onlyIfLoaded:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)preparePrintInteractionController:(id)arg1 withPrintRenderer:(id)arg2 frame:(id)arg3 forUse:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)printInfoWithPrintRenderer:(id)arg1;
- (_Bool)formAutoFillControllerShouldDisableAutoFill:(id)arg1;
- (id)formAutoFillControllerURLForFormAutoFill:(id)arg1;
- (_Bool)formAutoFillControllerCanPrefillForm:(id)arg1;
- (struct UIEdgeInsets)_webView:(id)arg1 finalObscuredInsetsForScrollView:(id)arg2 withVelocity:(struct CGPoint)arg3 targetContentOffset:(inout struct CGPoint *)arg4;
- (void)findOnPageCompletionProvider:(id)arg1 setStringToComplete:(id)arg2;
- (void)updateFindCompletionProviderWithMatchesCount:(unsigned long long)arg1 forString:(id)arg2 forFindOnPageView:(id)arg3;
- (void)visibilityWillChangeForFindOnPageView:(id)arg1;
- (id)webViewForFindOnPageView:(id)arg1;
- (void)didFindAppBannerWithContent:(id)arg1;
- (void)didAutoDetectSiteSpecificSearchProviderWithOriginatingURL:(id)arg1 searchURLTemplate:(id)arg2;
- (void)_webView:(id)arg1 logDiagnosticMessageWithValue:(id)arg2 description:(id)arg3 value:(id)arg4;
- (void)_webView:(id)arg1 logDiagnosticMessageWithResult:(id)arg2 description:(id)arg3 result:(long long)arg4;
- (void)_webView:(id)arg1 logDiagnosticMessage:(id)arg2 description:(id)arg3;
- (void)loadingControllerWillStartUserDrivenLoad:(id)arg1;
- (void)loadingController:(id)arg1 willLoadRequest:(id)arg2 userDriven:(_Bool)arg3;
- (void)_webView:(id)arg1 insertTextSuggestion:(id)arg2 inInputSession:(id)arg3;
- (void)_webView:(id)arg1 accessoryViewCustomButtonTappedInFormInputSession:(id)arg2;
- (void)_webView:(id)arg1 willSubmitFormValues:(id)arg2 userObject:(id)arg3 submissionHandler:(CDUnknownBlockType)arg4;
- (void)_webView:(id)arg1 didStartInputSession:(id)arg2;
- (void)_webView:(id)arg1 imageOrMediaDocumentSizeChanged:(struct CGSize)arg2;
- (void)_webView:(id)arg1 printFrame:(id)arg2;
- (void)_webView:(id)arg1 decideWebApplicationCacheQuotaForSecurityOrigin:(id)arg2 currentQuota:(unsigned long long)arg3 totalBytesNeeded:(unsigned long long)arg4 decisionHandler:(CDUnknownBlockType)arg5;
- (void)_webView:(id)arg1 decideDatabaseQuotaForSecurityOrigin:(id)arg2 currentQuota:(unsigned long long)arg3 currentOriginUsage:(unsigned long long)arg4 currentDatabaseUsage:(unsigned long long)arg5 expectedUsage:(unsigned long long)arg6 decisionHandler:(CDUnknownBlockType)arg7;
- (id)_presentingViewControllerForWebView:(id)arg1;
- (void)_webView:(id)arg1 didNotHandleTapAsClickAtPoint:(struct CGPoint)arg2;
- (id)_webView:(id)arg1 actionsForElement:(id)arg2 defaultActions:(id)arg3;
- (_Bool)_webView:(id)arg1 shouldIncludeAppLinkActionsForElement:(id)arg2;
- (id)_actionsForElement:(id)arg1 defaultActions:(id)arg2 previewViewController:(id)arg3;
- (id)actionsForElement:(id)arg1 defaultActions:(id)arg2;
- (id)_addToReadingListActionForElement:(id)arg1 withURL:(id)arg2;
- (id)_openInNewPageActionForElement:(id)arg1 previewViewController:(id)arg2;
- (void)_animateElement:(id)arg1 toToolbarButton:(int)arg2;
- (struct CGRect)_convertRectFromDocumentToWebView:(struct CGRect)arg1;
- (void)_webViewDidExitFullscreen:(id)arg1;
- (void)_webViewDidEnterFullscreen:(id)arg1;
- (void)_webViewFullscreenMayReturnToInline:(id)arg1;
- (void)webViewDidClose:(id)arg1;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_webView:(id)arg1 willSnapshotBackForwardListItem:(id)arg2;
- (void)_webViewDidEndNavigationGesture:(id)arg1 withNavigationToBackForwardListItem:(id)arg2;
- (void)_webViewWillEndNavigationGesture:(id)arg1 withNavigationToBackForwardListItem:(id)arg2;
- (void)_webViewDidBeginNavigationGesture:(id)arg1;
- (void)_webView:(id)arg1 didFinishLoadForQuickLookDocumentInMainFrame:(id)arg2;
- (void)_webView:(id)arg1 didStartLoadForQuickLookDocumentInMainFrameWithFileName:(id)arg2 uti:(id)arg3;
- (id)_webCryptoMasterKeyForWebView:(id)arg1;
- (void)_webViewWebProcessDidCrash:(id)arg1;
- (void)_webView:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2;
- (void)_webView:(id)arg1 navigation:(id)arg2 didSameDocumentNavigation:(long long)arg3;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (id)touchIconFetcher;
@property(readonly, nonatomic) WBUWebClipMetadataFetcher *webClipMetadataFetcher;
@property(readonly, nonatomic) WBUInjectedJavaScriptController *activityJSController;
- (void)_webView:(id)arg1 didDismissPreviewViewController:(id)arg2;
- (void)_webView:(id)arg1 commitPreviewedImageWithURL:(id)arg2;
- (void)_webView:(id)arg1 willPreviewImageWithURL:(id)arg2;
- (void)_webView:(id)arg1 commitPreviewedViewController:(id)arg2;
- (id)_webView:(id)arg1 previewViewControllerForAnimatedImageAtURL:(id)arg2 defaultActions:(id)arg3 elementInfo:(id)arg4 imageSize:(struct CGSize)arg5;
- (id)_webView:(id)arg1 previewViewControllerForURL:(id)arg2 defaultActions:(id)arg3 elementInfo:(id)arg4;
- (id)_webView:(id)arg1 previewViewControllerForURL:(id)arg2;
- (id)tabDocumentForPreviewURL:(id)arg1 relatedToWebView:(id)arg2;
- (void)_willCommitPreviewViewController:(id)arg1;
- (void)_webView:(id)arg1 navigationDidFinishDocumentLoad:(id)arg2;
- (void)_webView:(id)arg1 navigation:(id)arg2 didFailProvisionalLoadInSubframe:(id)arg3 withError:(id)arg4;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)_clearNavigationSource;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)_checkForAppLink;
- (id)tabStateDataForQuickUpdate;
@property(readonly, nonatomic) _SFTabStateData *tabStateData;
- (void)invalidateSourceApplication;
- (void)subscribeToWebFeed;
- (void)saveWebArchiveToPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setQuickLookDocumentFromCurrentBackForwardListItem:(id)arg1;
- (id)quickLookDocumentFromCurrentBackForwardListItem;
- (void)_performSafeBrowsingCheckForURL:(id)arg1;
- (_Bool)quickLookDocumentIsReady;
@property(readonly, nonatomic) _SFSafariSharingExtensionController *sharingExtensionController;
- (void)loadTestURL:(id)arg1 withCallback:(CDUnknownBlockType)arg2 pagesNeedingMemoryWarningSent:(id)arg3;
- (void)loadTestURL:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (id)standaloneImageData;
- (id)suggestedFilenameForDisplayedPDF;
- (id)dataForDisplayedPDF;
@property(copy, nonatomic) NSString *customUserAgent;
- (id)_addTitlePrefixToString:(id)arg1;
- (_Bool)_shouldAskAboutInsecureFormSubmissionForAction:(id)arg1 andURL:(id)arg2;
- (void)_forceStopLoading;
- (void)_loadStartedDuringSimulatedClickForURL:(id)arg1;
- (void)_updateInitialZoomScaleForPPT;
- (id)_backForwardList;
- (void)loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3;
- (void)_destroyDocumentView;
- (void)_createDocumentViewWithConfiguration:(id)arg1;
- (void)_createDocumentViewRelatedTo:(id)arg1;
- (id)_webViewConfiguration;
- (void)performAutoFillAction;
- (void)setAllowsRemoteInspection:(_Bool)arg1;
- (_Bool)hasFailedURL;
- (id)expectedOrCurrentURL;
- (id)committedURL;
- (void)setLoading;
- (void)becomeFirstResponderWithSelectionMovingForward:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (struct __SecTrust *)_serverTrust;
- (_Bool)mustShowBarsForBackForwardListItem:(id)arg1;
- (void)restoreSessionState:(id)arg1 andNavigate:(_Bool)arg2 fromSafariViewService:(_Bool)arg3;
- (void)restoreSessionState:(id)arg1 andNavigate:(_Bool)arg2;
@property(readonly, nonatomic) _WKSessionState *sessionState;
@property(readonly, nonatomic, getter=isAlive) _Bool alive;
- (void)unhibernateWithRelatedWebView:(id)arg1;
- (void)unhibernate;
- (void)hibernate;
- (void)clearBackForwardList;
- (void)clearBackForwardListKeepingCurrentItem;
- (void)goToBackForwardListItem:(id)arg1;
- (id)_forwardListWithLimit:(unsigned long long)arg1;
- (id)_backListWithLimit:(unsigned long long)arg1;
- (_Bool)isPDFDocument;
- (void)stopLoading;
- (id)_loadNextFallbackURLWithWebClip:(id)arg1;
- (id)loadWebClip:(id)arg1 userDriven:(_Bool)arg2;
- (void)_updateFallbackURLsForUserTypedAddress:(id)arg1;
- (id)loadUserTypedAddress:(id)arg1;
- (void)setOverlaidAccessoryViewsInset:(struct CGSize)arg1;
- (id)pdfView;
- (id)URLString;
- (void)updateInternalPreferences;
- (void)_loadingControllerDidStopLoadingWithError:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_initWithBrowserController:(id)arg1 configuration:(id)arg2;
- (void)doneWaitingToContinueUserActivity;
- (void)didFailToContinueUserActivity;
- (void)prepareToContinueUserActivity;
- (void)_showProfileInstallAlert;
- (void)setStoreBanner:(id)arg1 isPinned:(_Bool)arg2;
- (void)dismissStoreBanner:(id)arg1;
- (_Bool)supportsFindOnPage;
- (void)setClosed:(_Bool)arg1 userDriven:(_Bool)arg2;
- (void)setClosed:(_Bool)arg1;
- (_Bool)isClosed;
- (void)userDidManipulateVisibleRegion;
- (_Bool)canSubscribeToWebFeed;
- (void)_showGenericDownloadAlert;
- (id)resultOfLoadingURL:(id)arg1;
- (id)_resultOfLoadingRequest:(id)arg1 inMainFrame:(_Bool)arg2 userInitiated:(_Bool)arg3;
- (_Bool)_navigationIsRedirectToAppStore:(id)arg1;
- (id)_readingListArchiveNextPageLinkForRequest:(id)arg1 targetFrame:(id)arg2;
- (void)_redirectToExternalNavigationResult:(id)arg1 fromOriginalRequest:(id)arg2 promptPolicy:(long long)arg3 isMainFrame:(_Bool)arg4 userAction:(id)arg5;
- (_Bool)_shouldPromptUserForExternalNavigationResult:(id)arg1 policy:(long long)arg2 userAction:(id)arg3;
- (void)_queueAlertForRedirectToExternalNavigationResult:(id)arg1 fromOriginalRequest:(id)arg2 isMainFrame:(_Bool)arg3 promptPolicy:(long long)arg4 userAction:(id)arg5;
- (void)_addNoFeedAppSupportAlert;
- (void)_completeRedirectToExternalNavigationResult:(id)arg1 fromOriginalRequest:(id)arg2 userCancelled:(_Bool)arg3;
- (void)_stoppedLoadingResources;
- (void)_startedLoadingResources;
- (void)_setAppBannerWhenPainted:(id)arg1;
- (void)_clearAppBannerIfNotCurrentStoreBanner;
- (id)_EVOrganizationName;
- (void)_invalidateEVOrganizationName;
- (_Bool)_isSecure;
- (id)forwardListControllerWithLimit:(int)arg1;
- (id)backListControllerWithLimit:(int)arg1;
- (_Bool)canGoForward;
- (_Bool)canGoBack;
- (void)_updateShowingContinuous;
- (void)setAutomaticReadingListItem:(id)arg1;
- (int)readingListBookmarkID;
@property(readonly, nonatomic, getter=isShowingErrorPage) _Bool showingErrorPage;
- (void)readerContentIsReadyForDisplay;
- (_Bool)shouldActivateReaderWhenAvailable;
- (_Bool)currentPageLoadedFromReadingList;
- (void)reloadAllowingContentBlockers:(_Bool)arg1;
- (void)reload;
- (void)goForward;
- (void)goBack;
- (void)restoreScrollPositionWithCloudTab:(id)arg1;
- (id)loadCloudTab:(id)arg1;
- (id)loadAutomaticReadingListItem:(id)arg1;
- (id)loadURL:(id)arg1 fromBookmark:(id)arg2;
- (void)clearPageLoadStatistics;
- (id)_loadURLInternal:(id)arg1 userDriven:(_Bool)arg2;
- (id)loadURL:(id)arg1 userDriven:(_Bool)arg2;
- (void)snapshotWithSize:(struct CGSize)arg1 topBackdropHeight:(double)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)snapshotWithSize:(struct CGSize)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)snapshotForWebClipIcon:(CDUnknownBlockType)arg1;
- (void)_updateSnapshotForWebClip:(id)arg1;
- (id)loadRequest:(id)arg1 userDriven:(_Bool)arg2;
- (id)titleForSharing;
- (id)titleForNewBookmark;
- (id)title;
- (_Bool)hasQuickLookContent;
- (_Bool)isLoading;
- (void)clearBrowserController;
- (void)clearTabReuseURL;
- (id)URLForSharing;
- (id)URL;
- (id)customUserVisibleStringForReadingListBookmarkURL:(id)arg1;
@property(readonly, nonatomic) __weak id <WBSFluidProgressStateSource> currentFluidProgressStateSource;
- (void)fluidProgressRocketAnimationDidComplete;
- (void)endSuppressingProgressAnimationAnimated:(_Bool)arg1;
- (void)endSuppressingProgressAnimation;
- (void)beginSuppressingProgressAnimation;
- (void)clearFluidProgressState;
- (_Bool)createFluidProgressState;
- (void)animateProgressForCompletedDocument;
- (void)_loadingControllerEstimatedProgressChangedTo:(double)arg1;
- (void)_loadingControllerDidStartLoading;
- (void)_loadingControllerWillLoadRequest:(id)arg1 userDriven:(_Bool)arg2;
- (void)_hideQuickLookDocumentView;
- (void)_showQuickLookDocumentView;
- (void)reinsertQuickLookDocumentView;
- (double)estimatedProgress;
- (void)willClose;
- (void)_closeTabDocumentAnimated:(_Bool)arg1;
- (void)stopAdvertisingProactiveActivityContent;
- (void)invalidateUserActivity;
- (void)updateUserActivity;
- (void)setDelegate:(id)arg1;
@property(readonly, nonatomic) UIView *frontView;
- (void)setNeedsNewTabSnapshot;
- (void)unfreezeAfterNavigationGesture:(_Bool)arg1;
- (void)freezeForNavigationGesture;
- (_Bool)isHibernated;
- (void)_cancelAntiPhishingCheckAndInvalidateSafeBrowsingObserver;
@property(readonly, nonatomic) _SFNavigationBarItem *navigationBarItem;
- (id)initWithTabStateData:(id)arg1 hibernated:(_Bool)arg2 browserController:(id)arg3;
- (id)initWithTitle:(id)arg1 URL:(id)arg2 UUID:(id)arg3 privateBrowsingEnabled:(_Bool)arg4 hibernated:(_Bool)arg5 bookmark:(id)arg6 browserController:(id)arg7 relatedWebView:(id)arg8;
- (void)resetTabViewItems;
- (id)_initWithTitle:(id)arg1 URL:(id)arg2 UUID:(id)arg3 privateBrowsingEnabled:(_Bool)arg4 bookmark:(id)arg5 browserController:(id)arg6 createDocumentView:(CDUnknownBlockType)arg7;
- (void)_updateNavigationBarItem;
- (void)_updateStackName;
- (void)_searchEngineControllerDidBecomeAvailable:(id)arg1;
- (void)updateTabTitle;
- (id)tabBarTitle;
- (id)rawTitle;
- (id)_titleIncludeLoading:(_Bool)arg1 allowURLStringFallback:(_Bool)arg2;
- (id)_titleIncludeLoading:(_Bool)arg1 allowURLStringFallback:(_Bool)arg2 allowUntitled:(_Bool)arg3;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)initWithTitle:(id)arg1 URL:(id)arg2 UUID:(id)arg3 privateBrowsingEnabled:(_Bool)arg4 hibernated:(_Bool)arg5 bookmark:(id)arg6 browserController:(id)arg7;
- (id)initWithBrowserController:(id)arg1;
- (void)safeBrowsingControllerDidShowSecurityWarningPage:(id)arg1;
- (void)safeBrowsingControllerClosePage:(id)arg1;
- (void)safeBrowsingControllerGoBack:(id)arg1;
- (void)safeBrowsingController:(id)arg1 didIgnoreWarningWithURL:(id)arg2;
- (void)startCheckingFraudulentWebSitesWithURL:(id)arg1;
- (void)cancelCheckForFraudulentWebsites;
- (_Bool)addReadingListBookmarkWithBlock:(CDUnknownBlockType)arg1;
- (void)collectReadingListItemInfo;
- (id)readerContext;
- (void)clearReaderContext;
- (void)clearReaderView;
- (void)createBrowserReaderViewIfNeeded;
- (id)readerPageArchiveURL;
- (_Bool)isShowingReadingListArchive;
- (void)didClickLinkRequestingNewWindowInReaderWithRequest:(id)arg1;
- (void)didClickLinkInReaderWithRequest:(id)arg1;
- (void)didDeactivateReaderWithMode:(unsigned long long)arg1;
- (void)didDetermineReaderAvailability:(_Bool)arg1;
- (void)didActivateReader;
- (_Bool)isReaderAvailable;
- (_Bool)hasDoneReaderDetection;
- (void)updateReadingListItemPreviewText:(id)arg1;
- (id)readerWebView;
- (void)clearReaderScrollInformation;
- (_Bool)shouldShowReaderOnActivate;
- (void)pageLoadErrorController:(id)arg1 didChooseOnlyAvailableIdentityForAuthenticationChallenge:(id)arg2;
- (void)pageLoadErrorController:(id)arg1 setAllowsSpecificHTTPSCertificate:(id)arg2 forHost:(id)arg3;
- (void)pageLoadErrorController:(id)arg1 loadFailedRequestAfterError:(id)arg2;
- (void)pageLoadErrorControllerWillShowPrintingDuringLoadAlert:(id)arg1 action:(int)arg2;
- (_Bool)pageLoadErrorControllerShouldHandleCertificateError:(id)arg1;
- (void)pageLoadErrorControllerDidShowAlert:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

