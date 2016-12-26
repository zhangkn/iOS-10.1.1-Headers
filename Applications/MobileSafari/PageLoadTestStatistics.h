//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSError, NSTimer, WKNavigation;

@interface PageLoadTestStatistics : NSObject
{
    long long _framesToLoad;
    long long _onloadEventsHandled;
    _Bool _pendingResourceLoad;
    NSTimer *_waitForNewPageLoadEventsTimer;
    WKNavigation *_navigation;
    NSDate *_firstVisualLayoutDate;
    NSDate *_loadStartDate;
    NSDate *_lastOnloadEventDate;
    NSDate *_mainFrameLoadDate;
    NSDate *_lastResourceLoadDate;
    NSDate *_lastPageLoadEventDate;
    NSError *_loadError;
    CDUnknownBlockType _callbackBlock;
    unsigned long long _memoryBeforeWarning;
    unsigned long long _memoryAfterWarning;
}

+ (void)setRestInterval:(double)arg1;
@property(nonatomic) unsigned long long memoryAfterWarning; // @synthesize memoryAfterWarning=_memoryAfterWarning;
@property(nonatomic) unsigned long long memoryBeforeWarning; // @synthesize memoryBeforeWarning=_memoryBeforeWarning;
@property(copy, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
@property(retain, nonatomic) NSError *loadError; // @synthesize loadError=_loadError;
@property(retain, nonatomic) NSDate *lastPageLoadEventDate; // @synthesize lastPageLoadEventDate=_lastPageLoadEventDate;
@property(retain, nonatomic) NSDate *lastResourceLoadDate; // @synthesize lastResourceLoadDate=_lastResourceLoadDate;
@property(retain, nonatomic) NSDate *mainFrameLoadDate; // @synthesize mainFrameLoadDate=_mainFrameLoadDate;
@property(retain, nonatomic) NSDate *lastOnloadEventDate; // @synthesize lastOnloadEventDate=_lastOnloadEventDate;
@property(retain, nonatomic) NSDate *loadStartDate; // @synthesize loadStartDate=_loadStartDate;
@property(retain, nonatomic) NSDate *firstVisualLayoutDate; // @synthesize firstVisualLayoutDate=_firstVisualLayoutDate;
@property(retain, nonatomic) WKNavigation *navigation; // @synthesize navigation=_navigation;
- (void).cxx_destruct;
- (void)_scheduleWaitForNewPageLoadEventsTimer;
- (void)_cancelWaitForNewPageLoadEventsTimer;
- (_Bool)_pageLoadEventsAreStillPending;
- (void)_pageLoadFinishedForTests;
- (void)_waitForNewPageLoadEventsTimerFired:(id)arg1;
- (void)_maybePageLoadFinishedForTests;
- (void)pageLoadFinishedForTestsWK2WithLoadData:(id)arg1;
- (void)finishedNavigation:(id)arg1;
- (void)failedNavigation:(id)arg1 withError:(id)arg2;
- (void)finishedFirstVisualLayout;
- (void)startedLoadingResources;
- (void)finishedLoadingResources;
- (void)startedNavigation:(id)arg1;
- (void)startedPageLoad;
- (void)handledOnloadEvents;
- (void)dealloc;
- (id)initWithCallback:(CDUnknownBlockType)arg1;

@end

