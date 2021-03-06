//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TiltedTabItemLayoutInfo, TiltedTabView, UIColor;

@interface TiltedTabItem : NSObject
{
    NSString *_title;
    UIColor *_titleColor;
    TiltedTabItemLayoutInfo *_layoutInfo;
    TiltedTabView *_tiltedTabView;
}

@property(nonatomic) __weak TiltedTabView *tiltedTabView; // @synthesize tiltedTabView=_tiltedTabView;
@property(readonly, nonatomic) TiltedTabItemLayoutInfo *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property(copy, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

