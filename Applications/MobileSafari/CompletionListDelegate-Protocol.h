//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CompletionList, NSString, WBSCompletionQuery;

@protocol CompletionListDelegate <NSObject>
- (void)completionList:(CompletionList *)arg1 topHitDidBecomeReadyForString:(NSString *)arg2;
- (void)completionListDidUpdate:(CompletionList *)arg1 forQuery:(WBSCompletionQuery *)arg2;
@end
