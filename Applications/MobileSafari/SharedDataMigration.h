//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SharedDataMigration : NSObject
{
}

+ (_Bool)migrateThumbnails;
+ (_Bool)migrateRecentSearches;
+ (void)migratePersistentStorageDefaults;
+ (_Bool)_migrateCacheFileFromSubpath:(id)arg1 toSubpath:(id)arg2 ensureIsDirectory:(_Bool)arg3;
+ (id)_userCachesDirectoryPath;

@end

