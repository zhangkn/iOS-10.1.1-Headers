//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QuickLookBannerViewDelegate-Protocol.h"
#import "UIDocumentInteractionControllerDelegatePrivate-Protocol.h"
#import "UIToolbarDelegate-Protocol.h"

@class NSString, QuickLookBannerView, TabDocument, UIDocumentInteractionController;

@interface QuickLookBannerController : NSObject <QuickLookBannerViewDelegate, UIDocumentInteractionControllerDelegatePrivate, UIToolbarDelegate>
{
    UIDocumentInteractionController *_documentInteractionController;
    TabDocument *_tabDocument;
    _Bool _isShowingQuickLookOpenInMenu;
    QuickLookBannerView *_bannerView;
}

@property(retain, nonatomic) UIDocumentInteractionController *documentInteractionController; // @synthesize documentInteractionController=_documentInteractionController;
@property(readonly, retain, nonatomic) QuickLookBannerView *bannerView; // @synthesize bannerView=_bannerView;
- (void).cxx_destruct;
- (id)documentProxyForPreview:(id)arg1 name:(id)arg2 UTI:(id)arg3;
- (id)documentInteractionControllerURLOfDirectoryForUnzippedDocument:(id)arg1;
- (void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2;
- (void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1;
- (void)documentInteractionControllerWillPresentOptionsMenu:(id)arg1;
- (long long)positionForBar:(id)arg1;
- (void)openInOtherApplications:(id)arg1;
- (void)openInApplication:(id)arg1;
- (id)_urlForQuickLookDocument;
- (void)_savePDFDocumentToFileIfNeeded;
- (void)showBannerView;
- (void)hideBannerView;
- (void)_removeBannerViewTimer;
- (void)_addOrRestartBannerViewTimer;
- (void)dealloc;
- (id)initWithTabDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

