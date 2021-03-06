//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMBaseSettingsViewController.h"

#import "YTStorageControllerObserver-Protocol.h"

@class NSArray, NSString, QTMSwitch, YTMMusicAppMetadata, YTMSettings, YTMSettingsContentViewObject, YTMTOfflineMixtapeSettingsView, YTMTStorageStatusView, YTOfflineCoordinator, YTStorageController, YTUserDefaults;
@protocol YTIdentityProvider;

@interface YTMTOfflineSettingsViewController : YTMBaseSettingsViewController <YTStorageControllerObserver>
{
    QTMSwitch *_wifiSyncSwitch;
    NSArray *_contents;
    YTMTOfflineMixtapeSettingsView *_offlineMixtapeSettingsView;
    YTMMusicAppMetadata *_musicAppMetadata;
    YTMSettingsContentViewObject *_storageUsage;
    YTMSettingsContentViewObject *_onlySyncOverWifi;
    YTMSettingsContentViewObject *_videoOptions;
    YTMSettingsContentViewObject *_audioOptions;
    YTMSettingsContentViewObject *_offlineMixtapeSettings;
    YTMSettingsContentViewObject *_removeAllOfflineContent;
    int _currentVideoQuality;
    int _currentAudioQuality;
    YTMSettings *_settings;
    YTMTStorageStatusView *_storageStatusView;
    YTUserDefaults *_userDefaults;
    YTStorageController *_storageController;
    YTOfflineCoordinator *_offlineCoordinator;
    id <YTIdentityProvider> _identityProvider;
    _Bool _fetchingStorageStatus;
    unsigned long long _availableStorage;
}

- (void).cxx_destruct;
- (id)alertView;
- (void)showMixtapeContentDeletionAlert;
- (void)showAllOfflineContentDeletionAlert;
- (void)didSlide:(id)arg1;
- (void)showLowMemoryAlert:(unsigned long long)arg1;
- (void)showSingleSongLowMemoryAlert:(unsigned long long)arg1;
- (void)showMemoryOverusageAlertIfNeeded;
- (void)didChangeTrackCountInDialogForSender:(id)arg1;
- (void)didChangeTrackCountForSender:(id)arg1;
- (void)didChangeToAudioQuality:(int)arg1;
- (void)didChangeToVideoQuality:(int)arg1;
- (void)saveOfflineTrackCountSettingsChanges;
- (void)saveOfflineEnabledSettingsChanges;
- (void)presentAudioQualitySelector;
- (void)presentVideoQualitySelector;
- (void)didToggleWiFiSyncSwitch:(id)arg1;
- (void)didToggleOfflineMixtapeSwitchWithAlert:(_Bool)arg1;
- (void)didToggleOfflineMixtapeSwitch:(id)arg1;
- (void)fetchStorageStatus;
- (id)sections;
- (void)didPressBack;
- (void)didPressClose;
- (void)didUpdateUsedStorageBytes:(unsigned long long)arg1 freeStorageBytes:(unsigned long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1 pageStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

