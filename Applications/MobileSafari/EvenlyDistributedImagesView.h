//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMapTable, NSMutableArray, UIImage;

@interface EvenlyDistributedImagesView : UIView
{
    NSMutableArray *_imageViews;
    NSMutableArray *_imagePlacementConstraints;
    NSMapTable *_aspectRatioConstraints;
    NSMapTable *_absoluteSizeConstraints;
    NSArray *_widthConstraints;
    NSArray *_heightConstraints;
    _Bool _preserveAspectRatio;
    NSArray *_images;
    UIImage *_maskImage;
    double _fixedHeight;
    double _fixedWidth;
    double _horizontalSpaceBetweenImages;
    struct CGSize _absoluteImageSize;
}

@property(nonatomic) _Bool preserveAspectRatio; // @synthesize preserveAspectRatio=_preserveAspectRatio;
@property(nonatomic) double horizontalSpaceBetweenImages; // @synthesize horizontalSpaceBetweenImages=_horizontalSpaceBetweenImages;
@property(nonatomic) double fixedWidth; // @synthesize fixedWidth=_fixedWidth;
@property(nonatomic) double fixedHeight; // @synthesize fixedHeight=_fixedHeight;
@property(nonatomic) struct CGSize absoluteImageSize; // @synthesize absoluteImageSize=_absoluteImageSize;
@property(readonly, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) UIImage *maskImage; // @synthesize maskImage=_maskImage;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
- (void).cxx_destruct;
- (void)_removeSizingConstraintsForImageView:(id)arg1;
- (void)_setAbsoluteSizeConstraintsForImageView:(id)arg1;
- (void)_setAspectRatioConstraintForImageView:(id)arg1;
- (void)_setSizingConstraintsForImageView:(id)arg1;
- (void)_setUpConstraints;

@end

