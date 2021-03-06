//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/YTInnerTubeResponseCacheKeyProtocol-Protocol.h>

@class GPBInt32Array, NSString, YTIForceAdParameters, YTIInnerTubeContext, YTINavigationList, YTIPlayerRequest, YTIUnpluggedWatchNextOptions, YTIWNPlaybackContext, YTIWatchBreakSetting;

@interface YTIWatchNextRequest : GPBMessage <YTInnerTubeResponseCacheKeyProtocol>
{
}

+ (id)descriptor;
+ (id)watchNextRequestWithAdVideoID:(id)arg1 clickTrackingParams:(id)arg2 adWatchNextParams:(id)arg3;
+ (id)watchNextRequestWithAdVideoID:(id)arg1;
+ (id)watchNextRequestWithNavEndpoint:(id)arg1 autonavSettingsState:(int)arg2 forceAdParameters:(id)arg3 sharingServiceIds:(id)arg4 isAdultContentConfirmed:(_Bool)arg5 watchBreakSetting:(id)arg6 lactMilliseconds:(double)arg7;
+ (id)watchNextRequestWithNavEndpoint:(id)arg1 forceAdParameters:(id)arg2;
+ (id)watchNextRequestWithNavEndpoint:(id)arg1 isAdultContentConfirmed:(_Bool)arg2;
+ (id)watchNextRequestWithNavEndpoint:(id)arg1;
- (id)innerTubeResponseCacheKeyWithService:(long long)arg1 coldConfig:(id)arg2;

// Remaining properties
@property(copy, nonatomic) NSString *adParams; // @dynamic adParams;
@property(nonatomic) _Bool autonavEnabled; // @dynamic autonavEnabled;
@property(nonatomic) int autonavState; // @dynamic autonavState;
@property(nonatomic) _Bool contentCheckOk; // @dynamic contentCheckOk;
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(copy, nonatomic) NSString *continuation; // @dynamic continuation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enableMdxAutoplay; // @dynamic enableMdxAutoplay;
@property(nonatomic) _Bool enablePersistentPlaylistPanel; // @dynamic enablePersistentPlaylistPanel;
@property(retain, nonatomic) YTIForceAdParameters *forceAdParameters; // @dynamic forceAdParameters;
@property(copy, nonatomic) NSString *gamingEventId; // @dynamic gamingEventId;
@property(nonatomic) _Bool hasAdParams; // @dynamic hasAdParams;
@property(nonatomic) _Bool hasAutonavEnabled; // @dynamic hasAutonavEnabled;
@property(nonatomic) _Bool hasAutonavState; // @dynamic hasAutonavState;
@property(nonatomic) _Bool hasContentCheckOk; // @dynamic hasContentCheckOk;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasContinuation; // @dynamic hasContinuation;
@property(nonatomic) _Bool hasEnableMdxAutoplay; // @dynamic hasEnableMdxAutoplay;
@property(nonatomic) _Bool hasEnablePersistentPlaylistPanel; // @dynamic hasEnablePersistentPlaylistPanel;
@property(nonatomic) _Bool hasForceAdParameters; // @dynamic hasForceAdParameters;
@property(nonatomic) _Bool hasGamingEventId; // @dynamic hasGamingEventId;
@property(nonatomic) _Bool hasIsAdPlayback; // @dynamic hasIsAdPlayback;
@property(nonatomic) _Bool hasIsAudioOnly; // @dynamic hasIsAudioOnly;
@property(nonatomic) _Bool hasIsMdxPlayback; // @dynamic hasIsMdxPlayback;
@property(nonatomic) _Bool hasMdxUseDevServer; // @dynamic hasMdxUseDevServer;
@property(nonatomic) _Bool hasNavigationList; // @dynamic hasNavigationList;
@property(nonatomic) _Bool hasParams; // @dynamic hasParams;
@property(nonatomic) _Bool hasPlaybackContext; // @dynamic hasPlaybackContext;
@property(nonatomic) _Bool hasPlayerRequest; // @dynamic hasPlayerRequest;
@property(nonatomic) _Bool hasPlayerTimestamp; // @dynamic hasPlayerTimestamp;
@property(nonatomic) _Bool hasPlaylistId; // @dynamic hasPlaylistId;
@property(nonatomic) _Bool hasPlaylistIndex; // @dynamic hasPlaylistIndex;
@property(nonatomic) _Bool hasPlaylistSetVideoId; // @dynamic hasPlaylistSetVideoId;
@property(nonatomic) _Bool hasRacyCheckOk; // @dynamic hasRacyCheckOk;
@property(nonatomic) _Bool hasReferrer; // @dynamic hasReferrer;
@property(nonatomic) _Bool hasReferringApp; // @dynamic hasReferringApp;
@property(nonatomic) _Bool hasRequestAutomix; // @dynamic hasRequestAutomix;
@property(nonatomic) _Bool hasRequestMusicSequence; // @dynamic hasRequestMusicSequence;
@property(nonatomic) _Bool hasSerializedThirdPartyEmbedConfig; // @dynamic hasSerializedThirdPartyEmbedConfig;
@property(nonatomic) _Bool hasShowContentOwnerOnly; // @dynamic hasShowContentOwnerOnly;
@property(nonatomic) _Bool hasShowRuInvalidTokenMessage; // @dynamic hasShowRuInvalidTokenMessage;
@property(nonatomic) _Bool hasTunerSetting; // @dynamic hasTunerSetting;
@property(nonatomic) _Bool hasTunerSettingValue; // @dynamic hasTunerSettingValue;
@property(nonatomic) _Bool hasUnpluggedWatchNextOptions; // @dynamic hasUnpluggedWatchNextOptions;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(nonatomic) _Bool hasWatchBreakSetting; // @dynamic hasWatchBreakSetting;
@property(nonatomic) _Bool hasWatchNextType; // @dynamic hasWatchNextType;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) GPBInt32Array *installedSharingServiceIdsArray; // @dynamic installedSharingServiceIdsArray;
@property(readonly, nonatomic) unsigned long long installedSharingServiceIdsArray_Count; // @dynamic installedSharingServiceIdsArray_Count;
@property(nonatomic) _Bool isAdPlayback; // @dynamic isAdPlayback;
@property(nonatomic) _Bool isAudioOnly; // @dynamic isAudioOnly;
@property(nonatomic) _Bool isMdxPlayback; // @dynamic isMdxPlayback;
@property(nonatomic) _Bool mdxUseDevServer; // @dynamic mdxUseDevServer;
@property(retain, nonatomic) YTINavigationList *navigationList; // @dynamic navigationList;
@property(copy, nonatomic) NSString *params; // @dynamic params;
@property(retain, nonatomic) YTIWNPlaybackContext *playbackContext; // @dynamic playbackContext;
@property(retain, nonatomic) YTIPlayerRequest *playerRequest; // @dynamic playerRequest;
@property(nonatomic) unsigned long long playerTimestamp; // @dynamic playerTimestamp;
@property(copy, nonatomic) NSString *playlistId; // @dynamic playlistId;
@property(nonatomic) unsigned int playlistIndex; // @dynamic playlistIndex;
@property(copy, nonatomic) NSString *playlistSetVideoId; // @dynamic playlistSetVideoId;
@property(nonatomic) _Bool racyCheckOk; // @dynamic racyCheckOk;
@property(copy, nonatomic) NSString *referrer; // @dynamic referrer;
@property(copy, nonatomic) NSString *referringApp; // @dynamic referringApp;
@property(nonatomic) _Bool requestAutomix; // @dynamic requestAutomix;
@property(nonatomic) _Bool requestMusicSequence; // @dynamic requestMusicSequence;
@property(copy, nonatomic) NSString *serializedThirdPartyEmbedConfig; // @dynamic serializedThirdPartyEmbedConfig;
@property(nonatomic) _Bool showContentOwnerOnly; // @dynamic showContentOwnerOnly;
@property(nonatomic) _Bool showRuInvalidTokenMessage; // @dynamic showRuInvalidTokenMessage;
@property(readonly) Class superclass;
@property(nonatomic) int tunerSetting; // @dynamic tunerSetting;
@property(nonatomic) int tunerSettingValue; // @dynamic tunerSettingValue;
@property(retain, nonatomic) YTIUnpluggedWatchNextOptions *unpluggedWatchNextOptions; // @dynamic unpluggedWatchNextOptions;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;
@property(retain, nonatomic) YTIWatchBreakSetting *watchBreakSetting; // @dynamic watchBreakSetting;
@property(nonatomic) int watchNextType; // @dynamic watchNextType;

@end

