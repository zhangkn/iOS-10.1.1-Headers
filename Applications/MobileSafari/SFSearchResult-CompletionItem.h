//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/SFSearchResult.h>

#import "CompletionItem-Protocol.h"

@class NSString;
@protocol CompletionItemActionHandler;

@interface SFSearchResult (CompletionItem) <CompletionItem>
- (id)_cardSectionFeedbackFromMKPlaceViewFeedbackType:(int)arg1;
- (void)placeViewController:(id)arg1 shouldLogFeedbackOfType:(int)arg2;
- (void)didEngageActionItem:(id)arg1 actionPerformed:(_Bool)arg2;
- (void)didEngageCardSection:(id)arg1;
- (void)_postFeedback:(id)arg1;
@property(retain, nonatomic) id <CompletionItemActionHandler> handlerForActionItem;
@property(copy, nonatomic) NSString *completionString;
- (unsigned long long)_searchUIStyleWithNarrowLayout:(_Bool)arg1;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;
- (id)reflectedStringForUserTypedString:(id)arg1;
- (id)completionTableViewCellReuseIdentifier;
@property(readonly, nonatomic) _Bool restoresSearchState;
- (void)auditAcceptedCompletionWithRank:(unsigned long long)arg1;
- (id)userVisibleURLString;
- (void)_punchoutWithHandler:(id)arg1;
- (void)acceptCompletionWithActionHandler:(id)arg1;
- (void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2;
- (id)completionTableViewCellForCompletionList:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *completionTableHeaderViewReuseIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long engagementDestination;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *lastSearchQuery;
@property(nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
@property(readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property(readonly) Class superclass;
@end

