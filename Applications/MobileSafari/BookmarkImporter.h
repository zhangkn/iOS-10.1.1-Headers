//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, WebBookmarkCollection;

@interface BookmarkImporter : NSObject
{
    WebBookmarkCollection *_collection;
    NSDictionary *_carrierBookmarkInfo;
    NSArray *_oldDeletedStaticBookmarks;
}

- (void).cxx_destruct;
- (void)migrateYouTubeBookmarks;
- (id)_uniqueYouTubeBookmarkFolderName;
- (void)importBuiltinBookmarks;
- (void)_importFavoritesFolderBuiltinBookmarks;
- (void)_setLastImportedCarrierBookmarkInfo:(id)arg1;
- (id)_lastImportedCarrierBookmarkInfo;
- (void)_importCarrierBookmarksIfNecessaryAsync;
- (void)_importCarrierBookmarksIfNecessary;
- (void)_importRootFolderBuiltinBookmarks;
- (void)_appendBuiltinBookmarkWithInfo:(id)arg1 toParent:(int)arg2 asCarrierBookmark:(_Bool)arg3;
- (void)_appendBookmarksFromSource:(id)arg1 toParent:(int)arg2;
- (id)_builtinBookmarkWithInfo:(id)arg1 asCarrierBookmark:(_Bool)arg2;
- (id)_myAccountBookmarkInfo;
- (void)_getCarrierBundleBuiltinBookmarkInfoWithCompletion:(CDUnknownBlockType)arg1;
- (id)_carrierBundleBuiltinBookmarkInfo;
- (id)_builtInBookmarkItemWithPath:(id)arg1 forLocale:(id)arg2;
- (id)_builtinFavoritesForLocale:(id)arg1;
- (void)_clearOldDeletedStaticBookmarks;
- (id)_oldDeletedStaticBookmarks;
- (id)initWithBookmarkCollection:(id)arg1;

@end

