//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBApplicationPlaceholder;

@protocol FBApplicationPlaceholderObserver <NSObject>

@optional
- (void)placeholderDidChangeSignificantly:(FBApplicationPlaceholder *)arg1;
- (void)placeholderInstallPhaseDidChange:(FBApplicationPlaceholder *)arg1;
- (void)placeholderInstallStateDidChange:(FBApplicationPlaceholder *)arg1;
- (void)placeholderPausabilityDidChange:(FBApplicationPlaceholder *)arg1;
- (void)placeholderCancellabilityDidChange:(FBApplicationPlaceholder *)arg1;
- (void)placeholderPrioritizableDidChange:(FBApplicationPlaceholder *)arg1;
- (void)placeholderPercentCompleteDidChange:(FBApplicationPlaceholder *)arg1;
@end

