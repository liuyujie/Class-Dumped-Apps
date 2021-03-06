//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBQueuedUploadDatabaseCoreDataMigration : NSObject
{
}

+ (unsigned long long)db_totalSizeOfItems:(id)arg1;
+ (id)db_stringForCurrentAppState;
+ (void)db_inspectUploadContainerPath:(id)arg1 containerDescription:(id)arg2;
+ (_Bool)db_copyIfExistsSourceFileAtPath:(id)arg1 withName:(id)arg2 toNewUploadContainerDirectoryPath:(id)arg3 fromOldUploadContainerDirectoryPath:(id)arg4;
+ (void)db_migrateQueuedUpload:(id)arg1 oldUploadContainerDirectoryPath:(id)arg2 toDatabase:(id)arg3 newUploadContainerDirectoryPath:(id)arg4 withUserId:(id)arg5;
+ (id)db_loadPendingUploadsFromObjectContext:(id)arg1;
+ (id)db_fetchFromObjectContext:(id)arg1 withPredicate:(id)arg2;
+ (id)db_persistentStoreCoordinatorForOldDatabasePath:(id)arg1;
+ (id)db_cachedFilesObjectModel;
+ (void)migrateForUserId:(id)arg1 oldUploadContainerDirectoryPath:(id)arg2 oldDatabaseFilePath:(id)arg3 newUploadContainerDirectoryPath:(id)arg4 newDatabaseFilePath:(id)arg5;
+ (void)db_migrateFromCoreDataDatabaseAtPath:(id)arg1 oldUploadContainerDirectoryPath:(id)arg2 toDatabase:(id)arg3 newUploadContainerDirectoryPath:(id)arg4 forUserId:(id)arg5;
+ (_Bool)db_requiresMigrationForOldDatabaseAtPath:(id)arg1;

@end

