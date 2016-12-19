//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBLeafIconDataSource-Protocol.h"

@class NSString, NSURL, UIWebClip;

@interface SBBookmark : NSObject <SBLeafIconDataSource>
{
    UIWebClip *_webClip;
}

+ (id)bookmarkWithWebClip:(id)arg1;
@property(readonly, nonatomic) UIWebClip *webClip; // @synthesize webClip=_webClip;
- (void).cxx_destruct;
- (_Bool)icon:(id)arg1 launchFromLocation:(int)arg2 context:(id)arg3;
- (_Bool)iconAllowsLaunch:(id)arg1;
- (_Bool)iconCompleteUninstall:(id)arg1;
- (_Bool)iconSupportsUninstall:(id)arg1;
- (_Bool)iconIsBeta:(id)arg1;
- (_Bool)iconIsRecentlyUpdated:(id)arg1;
- (id)iconFormattedAccessoryString:(id)arg1;
- (id)iconBadgeNumberOrString:(id)arg1;
- (int)iconAccessoryType:(id)arg1;
- (_Bool)iconProgressIsPaused:(id)arg1;
- (double)iconProgressPercent:(id)arg1;
- (long long)iconProgressState:(id)arg1;
- (_Bool)iconCanTightenLabel:(id)arg1;
- (_Bool)iconCanEllipsizeLabel:(id)arg1;
- (id)icon:(id)arg1 defaultImageWithFormat:(int)arg2;
- (id)icon:(id)arg1 imageWithFormat:(int)arg2;
- (unsigned long long)iconPriority:(id)arg1;
- (id)iconDisplayName:(id)arg1 forLocation:(int)arg2;
- (_Bool)isUninstallSupported;
- (void)_deviceUnlockedForFirstTime:(id)arg1;
@property(readonly, nonatomic) NSURL *launchURL;
@property(readonly, nonatomic) NSString *identifier;
- (void)dealloc;
- (id)initWithWebClip:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

