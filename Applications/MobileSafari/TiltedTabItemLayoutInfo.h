//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TiltedTabItem, TiltedTabThumbnailView, TiltedTabView, UIButton, UIColor, UIImage, UIView;

@interface TiltedTabItemLayoutInfo : NSObject
{
    _Bool _closeButtonUsesOutlineStyle;
    _Bool _reordering;
    _Bool _closing;
    _Bool _finishedClosing;
    UIImage *_blankSnapshot;
    double _borrowedContentScale;
    UIView *_borrowedContentView;
    double _contentOpacity;
    TiltedTabThumbnailView *_contentView;
    double _topBackdropHeight;
    TiltedTabView *_tiltedTabView;
    TiltedTabItem *_item;
    long long _transition;
    unsigned long long _indexForLayout;
    unsigned long long _countForLayout;
    double _verticalScrollAdjustment;
    struct CGRect _closeButtonHitRect;
    struct CGRect _contentFrame;
    struct CATransform3D _contentTransform;
}

@property(nonatomic) double verticalScrollAdjustment; // @synthesize verticalScrollAdjustment=_verticalScrollAdjustment;
@property(nonatomic) unsigned long long countForLayout; // @synthesize countForLayout=_countForLayout;
@property(nonatomic) unsigned long long indexForLayout; // @synthesize indexForLayout=_indexForLayout;
@property(nonatomic) long long transition; // @synthesize transition=_transition;
@property(nonatomic, getter=isFinishedClosing) _Bool finishedClosing; // @synthesize finishedClosing=_finishedClosing;
@property(nonatomic, getter=isClosing) _Bool closing; // @synthesize closing=_closing;
@property(nonatomic, getter=isReordering) _Bool reordering; // @synthesize reordering=_reordering;
@property(readonly, nonatomic) __weak TiltedTabItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) __weak TiltedTabView *tiltedTabView; // @synthesize tiltedTabView=_tiltedTabView;
@property(nonatomic) double topBackdropHeight; // @synthesize topBackdropHeight=_topBackdropHeight;
@property(retain, nonatomic) TiltedTabThumbnailView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) struct CATransform3D contentTransform; // @synthesize contentTransform=_contentTransform;
@property(nonatomic) double contentOpacity; // @synthesize contentOpacity=_contentOpacity;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(nonatomic) _Bool closeButtonUsesOutlineStyle; // @synthesize closeButtonUsesOutlineStyle=_closeButtonUsesOutlineStyle;
@property(nonatomic) struct CGRect closeButtonHitRect; // @synthesize closeButtonHitRect=_closeButtonHitRect;
@property(retain, nonatomic) UIView *borrowedContentView; // @synthesize borrowedContentView=_borrowedContentView;
@property(nonatomic) double borrowedContentScale; // @synthesize borrowedContentScale=_borrowedContentScale;
@property(retain, nonatomic) UIImage *blankSnapshot; // @synthesize blankSnapshot=_blankSnapshot;
- (void).cxx_destruct;
- (void)_updateCloseButtonImage;
- (void)_updateBorrowedContentFrame;
@property(readonly, nonatomic) struct CGRect contentClipperBounds;
- (struct CGRect)clippedContentFrame;
- (void)updateSnapshotViewAnimated:(_Bool)arg1;
- (void)tearDownThumbnailView;
- (void)setUpThumbnailView;
@property(readonly, nonatomic) UIView *contentClipperView;
@property(readonly, nonatomic) UIView *contentShadowView;
@property(readonly, nonatomic) UIButton *closeButton;
@property(copy, nonatomic) UIColor *titleColor;
@property(copy, nonatomic) NSString *title;
- (void)dealloc;
- (id)initWithTiltedTabView:(id)arg1 item:(id)arg2;

@end

