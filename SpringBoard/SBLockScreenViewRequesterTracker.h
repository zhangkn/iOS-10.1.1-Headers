//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface SBLockScreenViewRequesterTracker : NSObject
{
    NSMutableSet *_requesters;
}

- (void).cxx_destruct;
- (_Bool)hasRequesters;
- (void)setRequested:(_Bool)arg1 forRequester:(id)arg2;
- (void)removeRequester:(id)arg1;
- (void)addRequester:(id)arg1;

@end

