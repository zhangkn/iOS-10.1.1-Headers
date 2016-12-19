//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUI/SBUIBannerItem.h>

@class NSArray, NSDate, NSHashTable, NSMutableSet, NSString, UIImage;
@protocol SBStarkSessionConfiguring;

@interface SBStarkBannerItem : SBUIBannerItem
{
    id <SBStarkSessionConfiguring> _configuration;
    NSHashTable *_observers;
    NSMutableSet *_displayReasons;
}

@property(readonly, nonatomic) id <SBStarkSessionConfiguring> configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)_callOrFaceTimeStateChanged;
- (_Bool)_inCallOrFaceTime;
- (_Bool)isStarkBannerItem;
- (_Bool)matchesContext:(id)arg1;
- (void)reloadDisplayProperties;
@property(readonly, copy, nonatomic) NSArray *subActionLabels;
- (_Bool)shouldShowModalSubActions;
- (CDUnknownBlockType)ignoreAction;
@property(readonly, nonatomic) long long effectiveDefaultActionType;
@property(readonly, nonatomic) long long defaultActionType;
@property(readonly, nonatomic) NSDate *sourceDate;
@property(readonly, nonatomic) UIImage *categoryImage;
@property(readonly, copy, nonatomic) NSString *message;
@property(readonly, copy, nonatomic) NSString *subTitle;
@property(readonly, copy, nonatomic) NSString *title;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

@end
