//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/OfflineWatchableProtocol-Protocol.h>

@class AVURLAsset, NSString, OfflineAsset, OfflineDeactivationQueue, OfflineMovieOpener;
@protocol DownloadSessionProtocol, OS_dispatch_queue, OfflineDBProtocol, OfflineDependencyProvider, OfflineRecordProtocol, OfflineWatchableDelegate, PlatformConfigProvider;

@interface OfflineWatchableV2 : NSObject <OfflineWatchableProtocol>
{
    _Bool _isMidPlayback;
    id <OfflineWatchableDelegate> _delegate;
    id <OfflineDependencyProvider> _provider;
    struct NSObject *_record;
    struct NSObject *_db;
    id <PlatformConfigProvider> _configProvider;
    struct NSObject *_downloadSession;
    OfflineAsset *_offlineAsset;
    AVURLAsset *_avAsset;
    OfflineMovieOpener *_movieOpener;
    OfflineDeactivationQueue *_deactivationQueue;
    CDUnknownBlockType _assetReadyCompletion;
    double _lastProgressLoggingNotification;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property _Bool isMidPlayback; // @synthesize isMidPlayback=_isMidPlayback;
@property double lastProgressLoggingNotification; // @synthesize lastProgressLoggingNotification=_lastProgressLoggingNotification;
@property(copy) CDUnknownBlockType assetReadyCompletion; // @synthesize assetReadyCompletion=_assetReadyCompletion;
@property(retain) OfflineDeactivationQueue *deactivationQueue; // @synthesize deactivationQueue=_deactivationQueue;
@property(retain) OfflineMovieOpener *movieOpener; // @synthesize movieOpener=_movieOpener;
@property(retain) AVURLAsset *avAsset; // @synthesize avAsset=_avAsset;
@property(retain) OfflineAsset *offlineAsset; // @synthesize offlineAsset=_offlineAsset;
@property(retain) NSObject<DownloadSessionProtocol> *downloadSession; // @synthesize downloadSession=_downloadSession;
@property(retain) id <PlatformConfigProvider> configProvider; // @synthesize configProvider=_configProvider;
@property(retain) NSObject<OfflineDBProtocol> *db; // @synthesize db=_db;
@property(retain) NSObject<OfflineRecordProtocol> *record; // @synthesize record=_record;
@property(retain) id <OfflineDependencyProvider> provider; // @synthesize provider=_provider;
@property(retain) id <OfflineWatchableDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didCancelDownload;
- (void)didCompleteWithError:(id)arg1;
- (void)didFinishDownloadingExtraURL:(id)arg1 toTemporaryLocation:(id)arg2;
- (void)didProgressTowardCompletion:(id)arg1;
- (void)didStartDownload;
- (void)_notifyLogging:(id)arg1 withError:(id)arg2;
- (void)_notifyLogging:(id)arg1;
- (void)retrieveDownloadableAssetInfo:(CDUnknownBlockType)arg1;
- (id)taskIdentifier;
- (void)suspendDownload;
- (void)resumeDownload;
- (void)_removeDownload;
- (void)removeDownload;
- (id)additionalURLs;
- (void)_urlsFromUIMetadata:(id)arg1 path:(id)arg2 intoMap:(id)arg3;
- (_Bool)isDownloadRunning;
- (void)removeDownloadedFiles;
- (void)_removeDownloadedFiles;
- (_Bool)canceled;
- (void)refreshPlayWindow;
- (void)_licenseRefreshed:(id)arg1 error:(id)arg2;
- (void)_refreshLicense;
- (void)refreshLicense;
- (_Bool)_hasDiskSpace;
- (void)_handleActivatedLicense:(id)arg1 error:(id)arg2;
- (void)_activateLicense;
- (void)_prepareAssetForDownload;
- (void)playbackFinished;
- (_Bool)startPlayWindow;
- (void)prepareForPlayback:(CDUnknownBlockType)arg1;
- (void)_movieOpened:(id)arg1;
- (_Bool)_wasDownloadRemoved;
- (void)_downloadFailedWithError:(id)arg1;
- (void)_updateRecordWithError:(id)arg1;
- (void)_openMovie;
- (void)_updateLinksWithServerResponse:(id)arg1;
- (id)downloadError;
- (id)downloadProgress;
- (int)downloadState;
- (id)downloadInfoSnapshot;
- (id)downloadId;
- (id)movieId;
- (struct NSObject *)offlineRecord;
- (void)dealloc;
- (id)initWithOfflineRecord:(struct NSObject *)arg1 offlineDB:(struct NSObject *)arg2 deactivationQueue:(id)arg3 downloadSession:(struct NSObject *)arg4 delegate:(id)arg5 provider:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

