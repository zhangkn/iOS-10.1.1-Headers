//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIWindow;

@interface CatalogViewControllerState : NSObject
{
    _Bool _showingCompletions;
    _Bool _showingUniversalFirstTimeExperience;
    long long _favoritesState;
    NSString *_queryString;
    UIWindow *_detailWindow;
}

@property(retain, nonatomic) UIWindow *detailWindow; // @synthesize detailWindow=_detailWindow;
@property(nonatomic, getter=isShowingUniversalFirstTimeExperience) _Bool showingUniversalFirstTimeExperience; // @synthesize showingUniversalFirstTimeExperience=_showingUniversalFirstTimeExperience;
@property(nonatomic, getter=isShowingCompletions) _Bool showingCompletions; // @synthesize showingCompletions=_showingCompletions;
@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(nonatomic) long long favoritesState; // @synthesize favoritesState=_favoritesState;
- (void).cxx_destruct;

@end
