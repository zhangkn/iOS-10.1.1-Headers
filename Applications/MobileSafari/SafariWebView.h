//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/_SFWebView.h>

@class NSTimer, UIImageView;

@interface SafariWebView : _SFWebView
{
    NSTimer *_placeholderViewRemovalTimer;
    UIImageView *_placeholderView;
    struct UIEdgeInsets _hitTestInsets;
}

@property(nonatomic) struct UIEdgeInsets hitTestInsets; // @synthesize hitTestInsets=_hitTestInsets;
- (void).cxx_destruct;
- (void)setPlaceholderImage:(id)arg1;
- (void)_setObscuredInsets:(struct UIEdgeInsets)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;

@end

