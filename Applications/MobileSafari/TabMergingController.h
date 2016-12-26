//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableArray;
@protocol TabMergingControllerDelegate;

@interface TabMergingController : NSObject
{
    NSMutableArray *_mergedItems;
    NSMapTable *_activeItemMap;
    _Bool _disallowMergingUpdates;
    id <TabMergingControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <TabMergingControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool disallowMergingUpdates; // @synthesize disallowMergingUpdates=_disallowMergingUpdates;
- (void).cxx_destruct;
- (id)allMergedItems;
- (void)clearActiveItems;
- (void)addActiveItem:(id)arg1;
- (id)activeItemInOwnerWithUUID:(id)arg1;
- (void)moveItem:(id)arg1 overItem:(id)arg2;
- (void)_changeOwnershipOfItem:(id)arg1 toOwnerUUID:(id)arg2;
- (void)replaceItem:(id)arg1 withItem:(id)arg2;
- (void)removeItem:(id)arg1;
- (void)reconcileItemsForMergedItems:(id)arg1 activeItem:(id)arg2;
- (void)updateMergedItemsForItems:(id)arg1;
- (unsigned long long)insertMergedItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)mergedIndexForItem:(id)arg1;
- (id)itemsBelongToOwnerWithUUID:(id)arg1;
- (void)mergeItems:(id)arg1 toItems:(id)arg2;
- (id)init;

@end

