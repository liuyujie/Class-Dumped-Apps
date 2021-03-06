//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/CdnSelectionDelegate-Protocol.h>
#import <Nbp/MediaControllerDelegate-Protocol.h>
#import <Nbp/NfSubtitleAudioControllerInternal-Protocol.h>
#import <Nbp/PlaybackStartupManagerDelegate-Protocol.h>
#import <Nbp/StartPlayEventReporterDelegate-Protocol.h>

@class AVURLAsset, BasePrefetchCacheManager, BladeRunnerPlaybackReporter, BreadcrumbAudit, ManifestDeviceDetails, ManifestFetchAgent, MonoClockTimestamp, NSArray, NSDate, NSError, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSTimer, NflxMovieDetails, PlatformPlaybackRequest, StreamingMediaController, StreamingPlayback2, ThroughputReporter;
@protocol InititalBandwidthCapReporterDelegate, NSObject, OS_dispatch_queue, PlatformConfigProvider, PlaybackStartupManager;

@interface StreamingPlaybackSession : NSObject <PlaybackStartupManagerDelegate, MediaControllerDelegate, CdnSelectionDelegate, StartPlayEventReporterDelegate, NfSubtitleAudioControllerInternal>
{
    _Bool _branching;
    _Bool _prefetchCancelled;
    _Bool _prefetchTimerFired;
    _Bool _avAssetTracksLoadingCompleted;
    _Bool _hasDoviStream;
    _Bool _hasDolbyStream;
    _Bool _hasDolbyAtmosStream;
    _Bool _hasPlayedDovi;
    _Bool _hasPlayedDolby;
    _Bool _hasPlayedDolbyAtmos;
    _Bool _didUserStartPlayback;
    _Bool _prefetchFailureRecovery;
    _Bool _captureAudioRouteInformation;
    _Bool _isMasterPlaylistReturned;
    _Bool _isMasterPlaylistForExternalDisplayReturned;
    _Bool _externalDisplay;
    _Bool _usedInNFPlayer;
    _Bool _isMovieOpened;
    _Bool _isMovieClosed;
    _Bool _licenseFailed;
    _Bool _playbackInitiated;
    _Bool _hasStartedPlaydelayCounting;
    _Bool _licenseExpired;
    _Bool _licensesReadyForPlayback;
    _Bool _avPlayerLoaded;
    _Bool _avAssetAddedToAvcks;
    _Bool _usePlaylistKeyInSwift;
    NSString *_originalPlaybackId;
    long long _originalTrackId;
    NSMutableDictionary *_forkedPlaybacks;
    long long _forkedPlayerNum;
    BladeRunnerPlaybackReporter *_playbackReporter;
    ThroughputReporter *_throughputReporter;
    StreamingPlayback2 *_activeFork;
    NflxMovieDetails *_movieDetails;
    NSString *_movieId;
    unsigned long long _fetchOptions;
    NSObject<OS_dispatch_queue> *_playbackQueue;
    StreamingMediaController *_streamingMediaController;
    BasePrefetchCacheManager *_prefetchCacheManager;
    NSTimer *_prefetchTimer;
    id <PlatformConfigProvider> _playbackConfig;
    AVURLAsset *_avAsset;
    NSDate *_expirationDate;
    MonoClockTimestamp *_cacheStartTimestamp;
    unsigned long long _cacheLifespanInMS;
    double _playbackInitiateTimestamp;
    NSNumber *_currentPlaybackBitRate;
    id <PlaybackStartupManager> _playbackStartupManager;
    NSMutableSet *_mediaSessionIds;
    BreadcrumbAudit *_breadcrumbAudit;
    PlatformPlaybackRequest *_playbackRequest;
    ManifestFetchAgent *_manifestFetchAgent;
    ManifestDeviceDetails *_manifestDeviceDetails;
    NSArray *_subtitleOptions;
    NSArray *_audioOptions;
    NSArray *_subsetSubtitleOptions;
    NSArray *_imageBasedSubtitleViewArray;
    id <InititalBandwidthCapReporterDelegate> _bandwidthCapReporterDelegate;
    id <NSObject> _displayManagerModeSwitchObserver;
}

+ (_Bool)isRetryFlagSetForError:(id)arg1;
+ (id)retryFlagKey;
@property(retain, nonatomic) id <NSObject> displayManagerModeSwitchObserver; // @synthesize displayManagerModeSwitchObserver=_displayManagerModeSwitchObserver;
@property(retain, nonatomic) id <InititalBandwidthCapReporterDelegate> bandwidthCapReporterDelegate; // @synthesize bandwidthCapReporterDelegate=_bandwidthCapReporterDelegate;
@property(retain, nonatomic) NSArray *imageBasedSubtitleViewArray; // @synthesize imageBasedSubtitleViewArray=_imageBasedSubtitleViewArray;
@property(retain, nonatomic) NSArray *subsetSubtitleOptions; // @synthesize subsetSubtitleOptions=_subsetSubtitleOptions;
@property(retain, nonatomic) NSArray *audioOptions; // @synthesize audioOptions=_audioOptions;
@property(retain, nonatomic) NSArray *subtitleOptions; // @synthesize subtitleOptions=_subtitleOptions;
@property(retain, nonatomic) ManifestDeviceDetails *manifestDeviceDetails; // @synthesize manifestDeviceDetails=_manifestDeviceDetails;
@property(retain, nonatomic) ManifestFetchAgent *manifestFetchAgent; // @synthesize manifestFetchAgent=_manifestFetchAgent;
@property(nonatomic) _Bool usePlaylistKeyInSwift; // @synthesize usePlaylistKeyInSwift=_usePlaylistKeyInSwift;
@property(copy, nonatomic) PlatformPlaybackRequest *playbackRequest; // @synthesize playbackRequest=_playbackRequest;
@property(nonatomic) _Bool avAssetAddedToAvcks; // @synthesize avAssetAddedToAvcks=_avAssetAddedToAvcks;
@property(nonatomic) _Bool avPlayerLoaded; // @synthesize avPlayerLoaded=_avPlayerLoaded;
@property(retain, nonatomic) BreadcrumbAudit *breadcrumbAudit; // @synthesize breadcrumbAudit=_breadcrumbAudit;
@property(retain, nonatomic) NSMutableSet *mediaSessionIds; // @synthesize mediaSessionIds=_mediaSessionIds;
@property(nonatomic) _Bool licensesReadyForPlayback; // @synthesize licensesReadyForPlayback=_licensesReadyForPlayback;
@property(nonatomic) _Bool licenseExpired; // @synthesize licenseExpired=_licenseExpired;
@property(retain, nonatomic) id <PlaybackStartupManager> playbackStartupManager; // @synthesize playbackStartupManager=_playbackStartupManager;
@property(nonatomic) _Bool hasStartedPlaydelayCounting; // @synthesize hasStartedPlaydelayCounting=_hasStartedPlaydelayCounting;
@property(nonatomic) _Bool playbackInitiated; // @synthesize playbackInitiated=_playbackInitiated;
@property(readonly, nonatomic) _Bool licenseFailed; // @synthesize licenseFailed=_licenseFailed;
@property(nonatomic) _Bool isMovieClosed; // @synthesize isMovieClosed=_isMovieClosed;
@property(nonatomic) _Bool isMovieOpened; // @synthesize isMovieOpened=_isMovieOpened;
@property(nonatomic) _Bool usedInNFPlayer; // @synthesize usedInNFPlayer=_usedInNFPlayer;
@property(retain, nonatomic) NSNumber *currentPlaybackBitRate; // @synthesize currentPlaybackBitRate=_currentPlaybackBitRate;
@property(nonatomic) _Bool externalDisplay; // @synthesize externalDisplay=_externalDisplay;
@property(nonatomic) _Bool isMasterPlaylistForExternalDisplayReturned; // @synthesize isMasterPlaylistForExternalDisplayReturned=_isMasterPlaylistForExternalDisplayReturned;
@property(nonatomic) _Bool isMasterPlaylistReturned; // @synthesize isMasterPlaylistReturned=_isMasterPlaylistReturned;
@property(nonatomic) double playbackInitiateTimestamp; // @synthesize playbackInitiateTimestamp=_playbackInitiateTimestamp;
@property(nonatomic) unsigned long long cacheLifespanInMS; // @synthesize cacheLifespanInMS=_cacheLifespanInMS;
@property(retain, nonatomic) MonoClockTimestamp *cacheStartTimestamp; // @synthesize cacheStartTimestamp=_cacheStartTimestamp;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(nonatomic) _Bool captureAudioRouteInformation; // @synthesize captureAudioRouteInformation=_captureAudioRouteInformation;
@property(nonatomic) _Bool prefetchFailureRecovery; // @synthesize prefetchFailureRecovery=_prefetchFailureRecovery;
@property(nonatomic) _Bool didUserStartPlayback; // @synthesize didUserStartPlayback=_didUserStartPlayback;
@property(nonatomic) _Bool hasPlayedDolbyAtmos; // @synthesize hasPlayedDolbyAtmos=_hasPlayedDolbyAtmos;
@property(nonatomic) _Bool hasPlayedDolby; // @synthesize hasPlayedDolby=_hasPlayedDolby;
@property(nonatomic) _Bool hasPlayedDovi; // @synthesize hasPlayedDovi=_hasPlayedDovi;
@property(nonatomic) _Bool hasDolbyAtmosStream; // @synthesize hasDolbyAtmosStream=_hasDolbyAtmosStream;
@property(nonatomic) _Bool hasDolbyStream; // @synthesize hasDolbyStream=_hasDolbyStream;
@property(nonatomic) _Bool hasDoviStream; // @synthesize hasDoviStream=_hasDoviStream;
@property(nonatomic) _Bool avAssetTracksLoadingCompleted; // @synthesize avAssetTracksLoadingCompleted=_avAssetTracksLoadingCompleted;
@property(retain, nonatomic) AVURLAsset *avAsset; // @synthesize avAsset=_avAsset;
@property(retain, nonatomic) id <PlatformConfigProvider> playbackConfig; // @synthesize playbackConfig=_playbackConfig;
@property(nonatomic) _Bool prefetchTimerFired; // @synthesize prefetchTimerFired=_prefetchTimerFired;
@property(retain, nonatomic) NSTimer *prefetchTimer; // @synthesize prefetchTimer=_prefetchTimer;
@property(nonatomic) _Bool prefetchCancelled; // @synthesize prefetchCancelled=_prefetchCancelled;
@property(retain, nonatomic) BasePrefetchCacheManager *prefetchCacheManager; // @synthesize prefetchCacheManager=_prefetchCacheManager;
@property(retain, nonatomic) StreamingMediaController *streamingMediaController; // @synthesize streamingMediaController=_streamingMediaController;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *playbackQueue; // @synthesize playbackQueue=_playbackQueue;
@property(nonatomic) unsigned long long fetchOptions; // @synthesize fetchOptions=_fetchOptions;
@property(retain, nonatomic) NSString *movieId; // @synthesize movieId=_movieId;
@property(nonatomic) _Bool branching; // @synthesize branching=_branching;
@property(retain, nonatomic) NflxMovieDetails *movieDetails; // @synthesize movieDetails=_movieDetails;
@property(retain, nonatomic) StreamingPlayback2 *activeFork; // @synthesize activeFork=_activeFork;
@property(readonly, nonatomic) ThroughputReporter *throughputReporter; // @synthesize throughputReporter=_throughputReporter;
@property(retain, nonatomic) BladeRunnerPlaybackReporter *playbackReporter; // @synthesize playbackReporter=_playbackReporter;
@property(nonatomic) long long forkedPlayerNum; // @synthesize forkedPlayerNum=_forkedPlayerNum;
@property(retain, nonatomic) NSMutableDictionary *forkedPlaybacks; // @synthesize forkedPlaybacks=_forkedPlaybacks;
@property(nonatomic) long long originalTrackId; // @synthesize originalTrackId=_originalTrackId;
@property(retain, nonatomic) NSString *originalPlaybackId; // @synthesize originalPlaybackId=_originalPlaybackId;
- (void).cxx_destruct;
- (void)playbackStartupManager:(id)arg1 recordBreadcrumb:(id)arg2;
- (_Bool)isExternalDisplayForPlaybackStartupManager:(id)arg1;
- (id)playbackIdForPlaybackStartupManager:(id)arg1;
- (id)playbackReporterForPlaybackStartupManager:(id)arg1;
- (void)didFinishPrefetch;
- (void)loadAVPlayerForPlaybackStartupManager:(id)arg1;
- (void)playbackStartupManagerDidExpire:(id)arg1;
- (void)playbackStartupManager:(id)arg1 didEncounterLicenseError:(id)arg2 wasLDL:(_Bool)arg3;
- (_Bool)iframeProxyed;
- (_Bool)iframeEnabled;
- (id)replaceHostsWithLocalProxy:(id)arg1 playlistKey:(id)arg2;
- (void)handleReadyVariantPlaylist:(id)arg1 forPlaylistKey:(id)arg2 forLoadingRequest:(id)arg3 forPlayback:(id)arg4;
- (void)notifyReadyWithPlaylist:(id)arg1 forLoadingRequest:(id)arg2 forPlayback:(id)arg3;
- (void)buildPlaylistForRequestedM3u8:(id)arg1 forLoadingRequest:(id)arg2 forPlayback:(id)arg3;
- (void)buildVariantPlaylistForKey:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)buildMasterPlaylist:(CDUnknownBlockType)arg1;
- (void)buildPlaylistForKey:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSError *licenseError;
- (_Bool)isLicenseFailed;
- (void)reportIndependentError:(id)arg1 errorContext:(id)arg2 fromFunction:(id)arg3;
- (void)recordVariantPlaylistFailedForDownloadableId:(id)arg1;
- (void)recordOnDemandVariantStartedForDownloadableId:(id)arg1;
- (void)recordStartPlayBandwidthCap:(id)arg1;
- (void)recordStartPlayEvent:(id)arg1;
- (id)currentmovieDetails;
- (id)currentImageBasedSubtitleOptions;
- (id)currentSubtitleOptions;
- (id)currentSubsetSubtitleOptions;
- (id)currentAudioOptions;
- (void)audioBCP47:(id)arg1 audioChannels:(unsigned int)arg2;
- (id)currentAudioDownloadableId;
- (void)sendSpliceEventAudioId:(id)arg1 subtitleId:(id)arg2;
- (void)imageBasedSubtitleSegmentsReady;
- (_Bool)isSupplemental;
- (_Bool)isOffline;
- (void)streamSelected:(int)arg1 downloadableId:(id)arg2 kbps:(unsigned int)arg3;
- (_Bool)generateSubtitleAudioOptionsFromManifest;
- (void)cdnSelector:(id)arg1 contentHeaderForDownloadable:(id)arg2 failedWithError:(id)arg3;
- (void)cdnSelector:(id)arg1 updateCdnStatistics:(id)arg2 isInitialCdnSelection:(_Bool)arg3;
- (void)cdnSelector:(id)arg1 didSelectCdn:(unsigned int)arg2 forDownloadableId:(id)arg3;
- (id)determineActiveAudioRoute;
- (void)audioSessionRouteChangeNotification:(id)arg1;
- (void)setupAudioRouteChangeObserver;
- (_Bool)isExternalPlaybackSuspected;
- (void)licenseError:(id)arg1;
- (void)onMovieDetailsReady;
- (void)createPlaybackStartupManager;
- (_Bool)useQuickPlayStartupManager;
- (void)manifestIsReady;
- (_Bool)hasStartedPlayDelayCounting;
- (void)movieOpenedWithMovieDetails:(id)arg1 andError:(id)arg2;
- (id)errorWithRetryFlagForError:(id)arg1;
- (id)inititalBandwidthCapReporterDelegate;
- (id)contentHeaderCache;
- (id)manifestFetchDelegate;
- (id)playbackDeviceDetails;
- (id)platformLogblobSink;
- (void)teardownAVAsset;
- (void)playback:(id)arg1 setupAVAssetAsLicenseKeyRecepient:(CDUnknownBlockType)arg2;
- (void)createAvAsset;
- (void)expirePlayback;
- (_Bool)hasLicenseExpired;
- (void)processCacheExpiration;
- (_Bool)isCacheExpired;
- (void)setPlaydelayTimestamp:(id)arg1;
- (void)startPlaydelayCounting;
- (void)cancelPrefetch;
- (void)resumePrefetchForPlayback:(id)arg1;
- (void)setDolbyAtmosCapability:(id)arg1;
- (void)setDolbyCapability:(id)arg1;
- (void)setDoviCapability:(id)arg1;
- (void)checkDoviDolbyAvailability;
- (void)screenDidConnect:(id)arg1;
- (void)observeScreenChanges;
- (void)startStreamingMediaController;
- (void)createStreamingMediaController;
- (void)destroyStreamingMediaController;
- (void)prefetchPlayback;
- (void)nflxMovieReadyToPlay;
- (void)removeForkedPlayback:(id)arg1;
- (void)notifyPlaybackReporterOfPlayback:(id)arg1 didCloseAtPlaybackTime:(double)arg2 withError:(id)arg3;
- (void)closeForkedPlaybacks;
- (void)setupPlaybackReporterForPlayback:(id)arg1;
- (void)playback:(id)arg1 didReportInfo:(id)arg2 context:(id)arg3 fromFunction:(id)arg4;
- (void)playback:(id)arg1 didReportError:(id)arg2 context:(id)arg3 fromFunction:(id)arg4;
- (void)playback:(id)arg1 didLimitVideoNominalBps:(double)arg2;
- (void)playback:(id)arg1 didChangeToDisplayMode:(int)arg2;
- (void)playbackDidPresentErrorOnUserInterface:(id)arg1;
- (void)playback:(id)arg1 didUserInitiatedUnpauseAtPlaybackTime:(double)arg2;
- (void)playback:(id)arg1 didUserInitiatedPauseAtPlaybackTime:(double)arg2;
- (void)playbackWillBeginSeek:(id)arg1;
- (void)playback:(id)arg1 didResumeAfterSeekFrom:(double)arg2 to:(double)arg3;
- (void)playback:(id)arg1 didSelectVideoStream:(id)arg2;
- (void)playbackStartPlayCalled:(id)arg1;
- (void)playbackImageBasedSubtitlesStalled:(id)arg1;
- (void)playbackStalled:(id)arg1;
- (void)playbackDidReachEnd:(id)arg1;
- (void)playback:(id)arg1 didStartPlayingAtPlaybackTime:(double)arg2 eventTime:(id)arg3;
- (void)playback:(id)arg1 didRecoverFromStallAtPlaybackTime:(double)arg2 eventTime:(id)arg3;
- (void)playbackDidInitiateAVObjectsRebuild:(id)arg1 withError:(id)arg2;
- (void)playback:(id)arg1 avPlayerDidFailToLoadWithError:(id)arg2;
- (void)playbackWillStartPlaying:(id)arg1;
- (void)playback:(id)arg1 didPresentOnUserInterfaceAtTime:(id)arg2;
- (void)playbackDidPresentOnUserInterface:(id)arg1;
- (void)playback:(id)arg1 didCloseAtPlaybackTime:(double)arg2 withError:(id)arg3;
- (_Bool)inLegacyBranchingMode;
- (void)playback:(id)arg1 didUpdatePlaybackTime:(double)arg2 cdnId:(int)arg3 totalTransferredBytes:(long long)arg4;
- (_Bool)optionId:(id)arg1 isEqualToOptionId:(id)arg2;
- (void)syncSubtitleAudioOptionsFrom:(id)arg1;
- (void)syncAuxiliaryLoggingInfo;
- (void)playbackDidBecomeActive:(id)arg1;
- (id)forkedPlaybackWithStartingPts:(double)arg1;
- (void)prefetchTimeout:(id)arg1;
- (void)playbackDidInitiate:(id)arg1 atStartPosition:(double)arg2;
@property(readonly, nonatomic) NSString *xid;
- (void)setupPlaybackReporter;
- (void)dealloc;
- (id)initWithPlaybackRequest:(id)arg1 playbackId:(id)arg2 prefetchCacheManager:(id)arg3 config:(id)arg4 isBranching:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

