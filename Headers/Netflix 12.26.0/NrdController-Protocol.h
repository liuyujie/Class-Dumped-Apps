//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/NSObject-Protocol.h>

@class APIConfiguration, APIStateStore, AppleNrdpBridge, EdgeClient, NFLXNetworkInfoProvider, NSArray, NSDictionary, NSNumber, NSObject, NSString, NrdCrashReporter, PBOClient, PlatformConfigManager, PlatformPlaybackRequest;
@protocol AppleNativeStorage, IDevice, IMslClient, NFPlaybackCompositeObject, NFZuulHeaderStateProvider, NfOfflineContentManager, NfOfflineMetadataManager, NfPlaydelayReporter, NfRegistrationController, NrdFtlStateDelegate, NrdHandler, PlatformConfigProvider, PlatformLogblobSink, PlatformLogger, RegistrationHandler;

@protocol NrdController <NSObject>
@property(readonly, nonatomic) id <NfPlaydelayReporter> playdelayReporter;
@property(readonly, nonatomic) id <NrdFtlStateDelegate> ftlStateDelegate;
@property(readonly, nonatomic) id <NFZuulHeaderStateProvider> zuulHeaderStateProvider;
@property(readonly, nonatomic) _Bool canPlayDolbyAtmos;
@property(readonly, nonatomic) _Bool canPlayDolby;
@property(readonly, nonatomic) _Bool canPlayDovi;
@property(setter=setNrdLogLevel:) long long nrdLogLevel;
@property(readonly, nonatomic) NSString *currentNetworkId;
@property(readonly, nonatomic) NFLXNetworkInfoProvider *networkInfoProvider;
@property(readonly, nonatomic) id <PlatformConfigProvider> platformConfigProvider;
@property(readonly, nonatomic) PlatformConfigManager *platformConfigManager;
@property(readonly, nonatomic) NrdCrashReporter *nrdCrashReporter;
@property(readonly, nonatomic) _Bool supportsDownload;
@property(readonly, nonatomic) AppleNrdpBridge *nrdp;
@property(readonly, nonatomic) PBOClient *pboClient;
@property(readonly, nonatomic) EdgeClient *edgeClient;
@property(readonly, nonatomic) NSObject<IMslClient> *mslClient;
@property(readonly, nonatomic) NSObject<AppleNativeStorage> *storage;
@property(readonly, nonatomic) NSArray *registrationHandlers;
@property(readonly, nonatomic) id <NfRegistrationController> registrationController;
@property(copy, nonatomic) NSString *uiVersion;
@property(readonly, nonatomic) long long environment;
@property(readonly, nonatomic) long long nrdState;
@property(readonly, nonatomic) NSObject<IDevice> *DAL;
@property(readonly, nonatomic) APIStateStore *stateStore;
@property(readonly, nonatomic) APIConfiguration *configuration;
- (void)kickstartPlatformBackgroundTaskWithCompletion:(void (^)(void))arg1;
- (void)recordOfflineBytesDownloadedForVideo:(unsigned long long)arg1 andAudio:(unsigned long long)arg2 andText:(unsigned long long)arg3;
- (void)recordAudioBytesDownloaded:(unsigned long long)arg1 andBytesUploaded:(unsigned long long)arg2 forXid:(NSString *)arg3;
- (void)recordVideoBytesDownloaded:(unsigned long long)arg1 andBytesUploaded:(unsigned long long)arg2 forXid:(NSString *)arg3;
- (void)setCanPlayDolbyAtmos:(_Bool)arg1;
- (void)setCanPlayDolby:(_Bool)arg1;
- (void)setCanPlayDovi:(_Bool)arg1;
- (void)stopNrdApplication:(id <NrdHandler>)arg1;
- (void)startNrdWithHandler:(id <NrdHandler>)arg1 forEnvironment:(long long)arg2 configuration:(NSDictionary *)arg3;
- (void)startNrdWithHandler:(id <NrdHandler>)arg1 forEnvironment:(long long)arg2;
- (void)startNrdForEnvironment:(long long)arg1 configuration:(NSDictionary *)arg2;
- (id <PlatformLogblobSink>)platformLogblobSink;
- (id <PlatformLogger>)getPlatformLogger;
- (id <NfOfflineMetadataManager>)getOfflineMetadataManager;
- (id <NfOfflineContentManager>)getOfflineContentManager;
- (_Bool)isPlaybackOn;
- (_Bool)isPrefetchInflight:(unsigned long long)arg1;
- (_Bool)isFullscreenMovieReadyToStart:(NSString *)arg1;
- (int)prefetchCacheManagerVersion;
- (id <NFPlaybackCompositeObject>)playbackControllerForMovieId:(NSString *)arg1 uniqueRequestId:(NSString *)arg2 trackId:(NSNumber *)arg3 fetchOptions:(unsigned long long)arg4;
- (id <NFPlaybackCompositeObject>)playbackControllerForPlaybackRequest:(PlatformPlaybackRequest *)arg1;
- (void)startPrefetchForMovieId:(NSString *)arg1 params:(NSDictionary *)arg2;
- (void)startPrefetchForMovieId:(NSString *)arg1 trackId:(NSNumber *)arg2 fetchOptions:(unsigned long long)arg3;
- (void)startPrefetchForPlaybackRequest:(PlatformPlaybackRequest *)arg1;
- (void)notifyBranchingMovieId:(NSString *)arg1;
- (void)logCrash:(NSDictionary *)arg1;
- (_Bool)log:(NSString *)arg1 level:(long long)arg2 type:(NSString *)arg3;
- (_Bool)isQuickplayCapable;
- (void)removeRegistrationHandler:(id <RegistrationHandler>)arg1;
- (void)addRegistrationHandler:(id <RegistrationHandler>)arg1;
@end

