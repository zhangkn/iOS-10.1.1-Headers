//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SBFolderViewDelegate-Protocol.h"

@class NSString, SBFolderView, SBIconViewMap;

@interface SBHomeScreenPreviewView : UIView <SBFolderViewDelegate>
{
    SBIconViewMap *_viewMap;
    SBFolderView *_folderContent;
}

- (void).cxx_destruct;
- (void)folderViewShouldBeginEditing:(id)arg1;
- (void)folderViewShouldClose:(id)arg1 withPinchGesture:(id)arg2;
- (void)folderViewDidEndScrolling:(id)arg1;
- (void)folderViewWillBeginScrolling:(id)arg1;
- (void)folderView:(id)arg1 currentPageIndexDidChange:(long long)arg2;
- (Class)iconListViewClassForFolderView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 iconController:(id)arg2 wallpaperController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

