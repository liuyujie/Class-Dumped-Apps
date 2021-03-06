//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLogCenter;

@interface SPTSettingsLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
}

@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logSettingsMenuPrivacyPolicyAtItemIndex:(int)arg1;
- (void)logSettingsMenuVoiceTermsConditionsAtItemIndex:(int)arg1;
- (void)logSettingsMenuTermsConditionsAtItemIndex:(int)arg1;
- (void)logSettingsMenuThirdPartySoftwareAtItemIndex:(int)arg1;
- (void)logSettingsMenuDeleteCacheAtItemIndex:(int)arg1;
- (void)logSettingsMenuDownloadCellularEnabled:(_Bool)arg1 itemIndex:(int)arg2;
- (void)logSettingsSyncQualitySet:(long long)arg1 initialItemIndex:(int)arg2;
- (void)logSettingsStreamQualitySet:(long long)arg1 initialItemIndex:(int)arg2;
- (void)logSettingsMenuConnectFacebookAtItemIndex:(int)arg1;
- (void)logSettingsMenuRecentlyPlayedArtistsEnabled:(_Bool)arg1 itemIndex:(int)arg2;
- (void)logSettingsMenuPublishActivityEnabled:(_Bool)arg1 itemIndex:(int)arg2;
- (void)logSettingsMenuPrivateSessionEnabled:(_Bool)arg1 itemIndex:(int)arg2;
- (void)logSettingsMenuVolumeSet:(long long)arg1 initialItemIndex:(int)arg2;
- (void)logSettingsMenuAudioNormalizationEnabled:(_Bool)arg1 itemIndex:(int)arg2;
- (void)logSettingsMenuHideUnplayableEnabled:(_Bool)arg1 itemIndex:(int)arg2;
- (void)logSettingsMenuGaplessPlaybackEnabled:(_Bool)arg1 itemIndex:(int)arg2;
- (void)logSettingsMenuCrossfadeSetAtItemIndex:(int)arg1;
- (void)logSettingsMenuForceOfflineEnabled:(_Bool)arg1 itemIndex:(int)arg2;
- (void)logSettingsMenuLogoutAtItemIndex:(int)arg1;
- (void)logSettingsMenuProfileAtItemIndex:(int)arg1;
- (id)initWithLogCenter:(id)arg1;

@end

