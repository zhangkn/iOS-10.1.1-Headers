//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface SafariClearBrowsingDataController : NSObject
{
    NSArray *_availableIntervals;
}

@property(readonly) NSArray *availableIntervals; // @synthesize availableIntervals=_availableIntervals;
- (void).cxx_destruct;
- (void)_clearBrowsingDataAddedAfterDate:(id)arg1;
- (void)clearAllBrowsingData;
- (void)clearDataFromInterval:(id)arg1;
- (id)init;

@end
