//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBFileListBaseDataProvider.h"

#import "DBFileListDataProviderProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface DBFileListCombineDataProvider : DBFileListBaseDataProvider <DBFileListDataProviderProtocol>
{
    NSMutableArray *_providers;
    NSMutableArray *_providerUpdateObservers;
    NSMutableArray *_providerErrorObservers;
    _Bool _ignorePartialUpdates;
    _Bool _hasProvidedPartialData;
}

- (void).cxx_destruct;
- (id)allEntries;
- (_Bool)hasCachedData;
- (_Bool)refresh;
- (id)db_createErrorObserverOnProvider:(id)arg1;
- (id)db_setupErrorObserversForProviders:(id)arg1;
- (void)db_handleUpdateFullRefresh:(_Bool)arg1 addedEntries:(id)arg2 removedEntries:(id)arg3 updatedEntries:(id)arg4;
- (id)db_createUpdateObserverOnProvider:(id)arg1;
- (id)db_setupUpdateObserversForProviders:(id)arg1;
- (id)providers;
- (void)addProvider:(id)arg1;
- (id)initWithProviders:(id)arg1 ignorePartialUpdates:(_Bool)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

