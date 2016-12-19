//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SBLockOverlayViewController;

@interface SBLockOverlayContext : NSObject
{
    SBLockOverlayViewController *_viewController;
    unsigned long long _priority;
    CDUnknownBlockType _activationBlock;
    CDUnknownBlockType _deactivationBlock;
}

@property(copy, nonatomic) CDUnknownBlockType deactivationBlock; // @synthesize deactivationBlock=_deactivationBlock;
@property(copy, nonatomic) CDUnknownBlockType activationBlock; // @synthesize activationBlock=_activationBlock;
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) SBLockOverlayViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)initWithOverlayViewController:(id)arg1 priority:(unsigned long long)arg2;

@end

