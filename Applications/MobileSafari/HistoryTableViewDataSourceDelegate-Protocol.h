//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HistoryTableViewDataSource, NSIndexPath;

@protocol HistoryTableViewDataSourceDelegate <NSObject>
- (void)historyTableViewDataSource:(HistoryTableViewDataSource *)arg1 didChangeRowAtIndexPath:(NSIndexPath *)arg2 forChangeType:(long long)arg3;
- (void)historyTableViewDataSource:(HistoryTableViewDataSource *)arg1 didChangeSectionAtIndex:(long long)arg2 forChangeType:(long long)arg3;
- (void)historyTableViewDataSourceDidChangeContent:(HistoryTableViewDataSource *)arg1;
- (void)historyTableViewDataSourceWillChangeContent:(HistoryTableViewDataSource *)arg1;
- (void)historyTableViewDataSourceDidLoadContent:(HistoryTableViewDataSource *)arg1;
@end

