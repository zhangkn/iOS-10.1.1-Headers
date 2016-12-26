//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL, WBSAutomaticReadingListItem, WebBookmark;

@interface ContinuousReadingItem : NSObject
{
    WebBookmark *_readingListBookmark;
    WBSAutomaticReadingListItem *_automaticReadingListItem;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)itemWithAutomaticReadingListItem:(id)arg1;
+ (id)itemWithReadingListItem:(id)arg1;
@property(readonly, retain, nonatomic) WBSAutomaticReadingListItem *automaticReadingListItem; // @synthesize automaticReadingListItem=_automaticReadingListItem;
@property(retain, nonatomic, setter=_setReadingListBookmark:) WebBookmark *readingListBookmark; // @synthesize readingListBookmark=_readingListBookmark;
- (void).cxx_destruct;
- (void)_readingListItemDidUpdate:(id)arg1;
- (id)_initWithAutomaticReadingListItem:(id)arg1;
- (id)_initWithReadingListItem:(id)arg1;
- (id)_siteNameForReadingListItem;
@property(readonly, copy, nonatomic) NSString *extraTitleInfo;
@property(readonly, nonatomic) _Bool wantsTopBanner;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, retain, nonatomic) NSURL *URL;
@property(readonly, copy, nonatomic) NSString *previewText;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) int type;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;

@end

