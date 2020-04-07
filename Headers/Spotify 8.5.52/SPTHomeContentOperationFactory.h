//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTDataLoaderFactory, SPTHomeContentCache;
@protocol SPTFeatureSettingsItemFactory, SPTFreeTierPersistentCounter, SPTFreeTierTasteOnboardingCurationProvider, SPTHomeTestManager, SPTLocalSettings, SPTNetworkConnectivityController, SPTOfflineService, SPTOnDemandService, SPTPlayer, SPTRecentlyPlayedService, SPTSnackbarService, SPTUBIHubsUtilities;

@interface SPTHomeContentOperationFactory : NSObject
{
    id <SPTOnDemandService> _onDemandService;
    id <SPTRecentlyPlayedService> _recentlyPlayedService;
    id <SPTOfflineService> _offlineService;
    id <SPTSnackbarService> _snackbarService;
    id <SPTNetworkConnectivityController> _networkConnectivityController;
    SPTHomeContentCache *_homeContentCache;
    SPTDataLoaderFactory *_dataLoaderFactory;
    id <SPTHomeTestManager> _testManager;
    id <SPTPlayer> _player;
    id <SPTFreeTierTasteOnboardingCurationProvider> _tasteOnboardingCurationProvider;
    id <SPTLocalSettings> _localSettings;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    id <SPTUBIHubsUtilities> _ubiHubsInstrumentation;
    id <SPTFreeTierPersistentCounter> _persistentCounter;
}

@property(readonly, nonatomic) id <SPTFreeTierPersistentCounter> persistentCounter; // @synthesize persistentCounter=_persistentCounter;
@property(readonly, nonatomic) id <SPTUBIHubsUtilities> ubiHubsInstrumentation; // @synthesize ubiHubsInstrumentation=_ubiHubsInstrumentation;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTFreeTierTasteOnboardingCurationProvider> tasteOnboardingCurationProvider; // @synthesize tasteOnboardingCurationProvider=_tasteOnboardingCurationProvider;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTHomeTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(readonly, nonatomic) SPTHomeContentCache *homeContentCache; // @synthesize homeContentCache=_homeContentCache;
@property(readonly, nonatomic) id <SPTNetworkConnectivityController> networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(readonly, nonatomic) __weak id <SPTSnackbarService> snackbarService; // @synthesize snackbarService=_snackbarService;
@property(readonly, nonatomic) __weak id <SPTOfflineService> offlineService; // @synthesize offlineService=_offlineService;
@property(readonly, nonatomic) __weak id <SPTRecentlyPlayedService> recentlyPlayedService; // @synthesize recentlyPlayedService=_recentlyPlayedService;
@property(readonly, nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
- (void).cxx_destruct;
- (id)provideTooltipContentOperation;
- (id)provideCacheViewModelContentOperation;
- (id)provideDownloadsContentOperation;
- (id)provideRemoteContentOperationWithSourceIdentifier:(id)arg1 contentURL:(id)arg2;
- (id)provideErrorHandlingContentOperationSnackbarEnabled:(_Bool)arg1;
- (id)provideCachedContentOperation;
- (id)provideRemoveComponentContentOperationWithOverrides:(id)arg1;
- (id)provideOnDemandExtractorContentOperation;
- (id)provideOnDemandDecoratorContentOperation;
- (id)provideCardAccessibilityContentOperation;
- (id)provideRecentlyPlayedContentOperation;
- (id)initWithOnDemandService:(id)arg1 recentlyPlayedService:(id)arg2 offlineService:(id)arg3 snackbarService:(id)arg4 networkConnectivityController:(id)arg5 homeContentCache:(id)arg6 dataLoaderFactory:(id)arg7 testManager:(id)arg8 player:(id)arg9 tasteOnboardingCurationProvider:(id)arg10 localSettings:(id)arg11 featureSettingsItemFactory:(id)arg12 ubiHubsInstrumentation:(id)arg13 persistentCounter:(id)arg14;

@end
