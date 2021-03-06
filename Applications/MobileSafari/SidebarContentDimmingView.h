//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UITapGestureRecognizer;
@protocol SidebarContentDimmingViewDelegate;

@interface SidebarContentDimmingView : UIView <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_dismissRecognizer;
    UIView *_dimmingView;
    UIView *_passthroughView;
    id <SidebarContentDimmingViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SidebarContentDimmingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *passthroughView; // @synthesize passthroughView=_passthroughView;
- (void).cxx_destruct;
- (void)_dismissRecognized:(id)arg1;
- (void)setTransparent:(_Bool)arg1;
- (void)setDimmedContentFrame:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 dimmedContentFrame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

