//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSHTTPCookieStorage.h>

@interface NSHTTPCookieStorage (Extras)
- (void)deleteAllCookies;
- (void)deleteCookiesForDomains:(id)arg1;
- (void)_deleteCookiesForDomain:(id)arg1;
- (id)newDomainDiskUsageDictionary;
- (unsigned long long)_diskUsageForCookie:(id)arg1;
@end
