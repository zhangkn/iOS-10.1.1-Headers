//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSOrderedSet, NSString, WBSHistorySessionController;
@protocol HistoryTableViewDataSourceDelegate;

@interface HistoryTableViewDataSource : NSObject
{
    WBSHistorySessionController *_sessionController;
    NSOrderedSet *_currentSessions;
    NSOrderedSet *_currentUnfilteredSessions;
    CDUnknownBlockType _deleteCompletionBlock;
    NSString *_filterString;
    struct {
        _Bool updating;
        _Bool didChangeFilter;
        _Bool didChangeExternally;
        unsigned long long progressiveFilterState;
    } _needsUpdateFlags;
    id <HistoryTableViewDataSourceDelegate> _delegate;
}

+ (void)initialize;
@property(nonatomic) __weak id <HistoryTableViewDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_historyItemURL:(id)arg1 matchesFilter:(id)arg2;
- (_Bool)_historyItemTitle:(id)arg1 matchesFilterTokens:(id)arg2;
- (id)_historySession:(id)arg1 filteredUsingHistoryItemsPredicate:(id)arg2;
- (id)_browsingSessions:(id)arg1 filteredUsingString:(id)arg2;
- (id)_computeChangeSetBetweenOldHistorySession:(id)arg1 newHistorySession:(id)arg2 oldSectionIndex:(long long)arg3 newSectionIndex:(long long)arg4;
- (id)_computeChangeSetBetweenOldHistorySessions:(id)arg1 newHistorySessions:(id)arg2;
- (id)_browsingSessions;
- (void)_reportChangeToDelegate:(id)arg1;
- (void)_setCurrentBrowsingSessions:(id)arg1 computingIndividualChanges:(_Bool)arg2;
- (void)_updateIfNeeded;
- (void)historyChanged:(id)arg1;
- (void)filterUsingString:(id)arg1;
- (void)deleteHistoryItemAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)historyItemForRowAtIndexPath:(id)arg1;
- (unsigned long long)numberOfRowsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

