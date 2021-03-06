//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBFileOperationsManager-Protocol.h"

@class DBLegacyServerPhotoItem, DBUserState, NSString;

@interface DBUserPhotoItemOperationsManager : NSObject <DBFileOperationsManager>
{
    DBLegacyServerPhotoItem *_photoItem;
    DBUserState *_userState;
}

- (void).cxx_destruct;
- (_Bool)isBeingDeleted;
- (_Bool)isBeingMoved;
- (void)unlockFileWithCompletion:(CDUnknownBlockType)arg1;
- (void)lockFileWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestUnlockHavingConfirmedFsws:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyFileEntryToDestinationPath:(id)arg1 confirmedFsws:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)createChildFolderWithName:(id)arg1 confirmedFsws:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)moveFileToDestinationFolderPath:(id)arg1 confirmedFsws:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)renameFileToFileName:(id)arg1 confirmedFsws:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)db_filePath;
- (_Bool)isDeletionSynchronous;
- (void)deleteFileHavingConfirmedFsws:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPhotoItem:(id)arg1 userState:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

