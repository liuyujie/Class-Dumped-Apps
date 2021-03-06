//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBFileListBaseDataProvider.h"

#import "DBFileListDataProviderProtocol-Protocol.h"

@class DBUserStateSet, NSArray, NSDictionary, NSString;

@interface DBLightboxLegacyDataProvider : DBFileListBaseDataProvider <DBFileListDataProviderProtocol>
{
    NSArray *_photoFileEntries;
    DBUserStateSet *_userStateSet;
    NSDictionary *_metadataManagerUpdateHandlers;
    NSArray *_syncManagerHandlers;
}

- (void).cxx_destruct;
- (_Bool)isLinked;
- (id)allEntries;
- (_Bool)hasCachedData;
- (_Bool)refresh;
- (id)db_setupObserverForSyncManager:(id)arg1;
- (unsigned long long)fileEntryCount;
- (id)fileEntryForDropboxPath:(id)arg1 userState:(id)arg2;
- (void)db_removeDropboxPaths:(id)arg1 strictEquality:(_Bool)arg2;
- (void)dealloc;
- (id)db_createUpdateHandlerWithMetadataManager:(id)arg1;
- (void)db_commonInitWithFileEntries:(id)arg1 userStateSet:(id)arg2;
- (id)initWithTestingFileEntries:(id)arg1 userStates:(id)arg2;
- (id)initWithFullMetadatas:(id)arg1 userState:(id)arg2;
- (id)initWithLegacyServerPhotoItems:(id)arg1 userState:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

