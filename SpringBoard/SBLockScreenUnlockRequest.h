//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class FBSProcessHandle, NSString;

@interface SBLockScreenUnlockRequest : NSObject <NSCopying>
{
    int _source;
    int _intent;
    NSString *_name;
    FBSProcessHandle *_process;
}

@property(retain, nonatomic) FBSProcessHandle *process; // @synthesize process=_process;
@property(nonatomic) int intent; // @synthesize intent=_intent;
@property(nonatomic) int source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

