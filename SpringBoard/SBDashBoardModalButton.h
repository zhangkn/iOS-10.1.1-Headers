//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSLayoutYAxisAnchor, UIVisualEffect, UIVisualEffectView;

@interface SBDashBoardModalButton : UIButton
{
    UIVisualEffectView *_effectView;
    NSLayoutYAxisAnchor *_firstBaselineAnchor;
}

- (void).cxx_destruct;
- (void)_setCornerRadius:(double)arg1;
- (void)_buttonReleased:(id)arg1;
- (void)_buttonPressed:(id)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIVisualEffect *visualEffect;
- (id)initWithEffect:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

