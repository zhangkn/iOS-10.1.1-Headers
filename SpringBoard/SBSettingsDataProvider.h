//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BBRemoteDataProvider-Protocol.h"

@class BBDataProviderProxy, NSString;

@interface SBSettingsDataProvider : NSObject <BBRemoteDataProvider>
{
    BBDataProviderProxy *_dataProviderProxy;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)defaultSectionInfo;
- (id)sortDescriptors;
- (id)sectionIdentifier;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

