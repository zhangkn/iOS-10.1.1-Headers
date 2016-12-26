//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CloudTabItemDeleteConfirmationView, NSString, UIPanGestureRecognizer, UIView, WBSCloudTab;
@protocol CloudTabItemViewDelegate;

@interface CloudTabItemView : UIButton <UIGestureRecognizerDelegate>
{
    UIView *_separatorView;
    UIView *_highlightView;
    _Bool _editing;
    double _startingSwipeOffset;
    double _swipeOffset;
    UIPanGestureRecognizer *_panGestureRecognizer;
    CloudTabItemDeleteConfirmationView *_deleteConfirmationView;
    double _leftEdgeInset;
    _Bool _editable;
    long long _style;
    id <CloudTabItemViewDelegate> _delegate;
    WBSCloudTab *_cloudTab;
}

+ (double)defaultHeight;
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
@property(retain, nonatomic) WBSCloudTab *cloudTab; // @synthesize cloudTab=_cloudTab;
@property(nonatomic) __weak id <CloudTabItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_deleteButtonTapped:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_panRecognized:(id)arg1;
- (double)_swipeOffsetFromPanGestureRecognizer;
- (void)_setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setUpDeleteConfirmationViewIfNecessary;
- (void)setHighlighted:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool showsSeparator;
- (void)layoutSubviews;
- (void)_updateStyle;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

