//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SBWallpaperObserver-Protocol.h"
#import "_SBFakeBlur-Protocol.h"

@class NSString;
@protocol _SBFakeBlurObserver;

@interface _SBAccessibilityTintView : UIView <_SBFakeBlur, SBWallpaperObserver>
{
    long long _variant;
    _Bool _fullscreen;
    unsigned long long _transformOptions;
    id <_SBFakeBlurObserver> _observer;
}

@property(nonatomic) __weak id <_SBFakeBlurObserver> observer; // @synthesize observer=_observer;
@property(nonatomic) unsigned long long transformOptions; // @synthesize transformOptions=_transformOptions;
@property(nonatomic) _Bool fullscreen; // @synthesize fullscreen=_fullscreen;
- (void).cxx_destruct;
- (void)_updateBackgroundColor;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (long long)effectiveStyle;
- (void)requestStyle:(long long)arg1;
- (void)offsetWallpaperBy:(struct CGPoint)arg1;
- (void)dealloc;
- (id)initWithVariant:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

