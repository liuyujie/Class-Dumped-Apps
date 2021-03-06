//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBCachedFileMutableDictionary, DBFileCacheLoadingFileManager, DBFileManager, DBLegacyAnalyticsLogger, DBScopedDirectoryMap, NSManagedObjectContext, NSMutableDictionary, NSMutableSet, NSString;

@interface DBFileCacheContext : NSObject
{
    DBCachedFileMutableDictionary *_loadedFiles;
    _Bool _mocAccessAllowed;
    NSManagedObjectContext *_objectContext;
    DBFileManager *_fileManager;
    DBFileCacheLoadingFileManager *_loadingFileManager;
    NSMutableDictionary *_previewLoaders;
    NSString *_userId;
    DBLegacyAnalyticsLogger *_analyticsLogger;
    NSMutableSet *_filesToSetup;
    DBScopedDirectoryMap *_scopedDirectoryMap;
    unsigned long long _environment;
}

@property _Bool mocAccessAllowed; // @synthesize mocAccessAllowed=_mocAccessAllowed;
@property(readonly, nonatomic) unsigned long long environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) DBScopedDirectoryMap *scopedDirectoryMap; // @synthesize scopedDirectoryMap=_scopedDirectoryMap;
@property(readonly, nonatomic) NSMutableSet *filesToSetup; // @synthesize filesToSetup=_filesToSetup;
@property(readonly, nonatomic) DBLegacyAnalyticsLogger *analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) NSMutableDictionary *previewLoaders; // @synthesize previewLoaders=_previewLoaders;
@property(readonly, nonatomic) DBFileCacheLoadingFileManager *loadingFileManager; // @synthesize loadingFileManager=_loadingFileManager;
@property(readonly, nonatomic) DBFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) DBCachedFileMutableDictionary *loadedFiles;
- (id)initWithObjectContext:(id)arg1 userId:(id)arg2 scopedDirectoryMap:(id)arg3;
@property(readonly, nonatomic) NSManagedObjectContext *objectContext; // @synthesize objectContext=_objectContext;
- (void)db_commonInitWithUserId:(id)arg1 backgroundTaskFactory:(id)arg2;
- (id)initWithUserId:(id)arg1 environment:(unsigned long long)arg2 scopedDirectoryMap:(id)arg3 backgroundTaskFactory:(id)arg4;
- (id)init;

@end

