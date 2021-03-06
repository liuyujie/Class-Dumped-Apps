//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIAccountStateChangeSignedIn, YTIAccountStateChangeSignedOut, YTIAdBlockerMessaging, YTIAdsClientStateChange, YTIAppBundleClientEvent, YTIAppCrashed, YTIAppSettingsSnapshot, YTIAppWidthLayoutError, YTIAutoCaptionsAvailable, YTIBackstagePostCreationFlowEnded, YTIBlockingRequestFailed, YTIBuyFlowEvent, YTIBuyFlowStarted, YTIClientDataErrorEvent, YTIDataPlanCpidRequested, YTIDelayedEventMetricCaptured, YTIDetailedNetworkTypeCaptured, YTIDeviceContextEvent, YTIDeviceRetentionInfo, YTIDownloadStreamUrlExpired, YTIDroppedFrames, YTIDummyPayload, YTIElementsLog, YTIEntitiesError, YTIEventContext, YTIFlexyState, YTIFlowEvent, YTIFlowState, YTIForegroundHeartbeat, YTIGamingAccountLinkStatusChanged, YTIGenericAttestationExecution, YTIInteractionLoggingDebugModeError, YTIInterfaceOrientation, YTIIosOutOfMemoryEvent, YTIKidsAccountsSnapshot, YTIKidsAgeGateTracking, YTIKidsFlowCorpusSelectedEvent, YTIKidsFlowError, YTIKidsFlowEvent, YTIKidsOfflineSnapshot, YTIKidsParentalGateTracking, YTIKidsProfileCreationTracking, YTIKidsProfilePinGateTracking, YTIKidsProfileSwitcherTracking, YTIKidsServerSideAssets, YTIKidsVoiceSearchEvent, YTILatencyActionBaselined, YTILatencyActionInfo, YTILatencyActionSpan, YTILatencyActionTicked, YTILayersValidationError, YTILiveChatMessageSent, YTILiveCreationArchiveReplacement, YTILiveCreationBroadcastSchedule, YTILiveCreationCameraMetrics, YTILiveCreationEncodingMetrics, YTILiveCreationError, YTILiveCreationHealthMetrics, YTILiveCreationStage, YTILyricImpressionEvent, YTIMainAppBrowseFragmentCache, YTIMdxBackgroundPlaybackRequestCompleted, YTIMdxBrokenAdditionalDataDeviceDetected, YTIMdxEncryptionSessionStats, YTIMdxMsnSessionStats, YTIMdxNotificationEvent, YTIMdxRouteDistribution, YTIMdxSessionConnected, YTIMdxSessionDisconnected, YTIMdxSessionRecoveryCompleted, YTIMdxSessionRecoveryStarted, YTIMdxSessionRecoveryStopped, YTIMdxSessionStarted, YTIMdxSignIn, YTIMdxWebSocketServer, YTIMdxWebSocketServerHttpError, YTIMediaBrowserBrowseEvent, YTIMediaBrowserPlaybackEvent, YTIMobilePlaybackEvent, YTIMusicIosBackgroundFetch, YTIMusicOfflineMixtapePreferences, YTIMusicPersistentCacheChecked, YTIMusicPersistentCacheCleared, YTIMusicPlaybackContentModeChangeEvent, YTINetworkConnectivityBaselineCaptured, YTINextGenWatchWatchSwiped, YTIOfflineClientState, YTIOfflineDelayAllowedTracking, YTIOfflinePlaybackTracking, YTIOfflineReceive, YTIOfflineReceiveDebug, YTIOfflineSend, YTIOfflineSendDebug, YTIOfflineSharePairing, YTIOfflineShareUnlock, YTIOfflineTransferStarted, YTIOfflineTransferStatusChanged, YTIOfflineVideoShared, YTIPlaybackAssociated, YTIPlaybackAudioRouteEvent, YTIPlaybackContextEvent, YTIPlaybackOfflineFallbackTracking, YTIPlaybackSessionStopped, YTIPlayerRequestCompleted, YTIReachabilityDetectionEvent, YTIReelPlaybackError, YTIRenderingError, YTIScreenCreated, YTIScrollEvent, YTIScrubbingEvent, YTISearchSuggestDecodingPayloadFailure, YTISiriShortcutActivated, YTIStartupCrashesDetected, YTIStartupTelemetryEvent, YTIStreamzIncrement, YTISystemHealthMetricCaptured, YTITfliteModelError, YTIThumbnailHovered, YTIThumbnailLoaded, YTITransactionFlow, YTIUnpluggedDegradationInfo, YTIUploadFrontendEvent, YTIUploadMp4HeaderMoved, YTIUploadProcessorEnded, YTIUploadProcessorInterrupted, YTIUploadProcessorReady, YTIUploadProcessorRequirementPending, YTIUploadProcessorStarted, YTIUploadVideoTranscoded, YTIUserMentionAutoCompleteBoxEvent, YTIVideoAsThumbnailDownloadEvent, YTIVideoAsThumbnailPlaybackEvent, YTIVideoEffectsEvent, YTIVisualElementAttached, YTIVisualElementGestured, YTIVisualElementHidden, YTIVisualElementShown, YTIVisualElementStateChanged, YTIWatchBreakEnablementSettingEvent, YTIWatchBreakFrequencySettingEvent, YTIWatchRestoreAttempt, YTIWatchTimeSegment, YTIYouThereEvent, YTIYpcFamilyCreateFlow, YTIZeroStepChannelCreation;

@interface YTIClientEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAccountStateChangeSignedIn *accountStateChangeSignedIn; // @dynamic accountStateChangeSignedIn;
@property(retain, nonatomic) YTIAccountStateChangeSignedOut *accountStateChangeSignedOut; // @dynamic accountStateChangeSignedOut;
@property(retain, nonatomic) YTIAdBlockerMessaging *adBlockerMessagingShown; // @dynamic adBlockerMessagingShown;
@property(retain, nonatomic) YTIAdsClientStateChange *adsClientStateChange; // @dynamic adsClientStateChange;
@property(retain, nonatomic) YTIAppBundleClientEvent *appBundleClientEvent; // @dynamic appBundleClientEvent;
@property(retain, nonatomic) YTIAppCrashed *appCrashed; // @dynamic appCrashed;
@property(retain, nonatomic) YTIAppSettingsSnapshot *appSettingsCaptured; // @dynamic appSettingsCaptured;
@property(retain, nonatomic) YTIAppWidthLayoutError *appWidthLayoutError; // @dynamic appWidthLayoutError;
@property(retain, nonatomic) YTIKidsServerSideAssets *assetPackApplied; // @dynamic assetPackApplied;
@property(retain, nonatomic) YTIKidsServerSideAssets *assetPackDeleted; // @dynamic assetPackDeleted;
@property(retain, nonatomic) YTIKidsServerSideAssets *assetPackDownloadStarted; // @dynamic assetPackDownloadStarted;
@property(retain, nonatomic) YTIKidsServerSideAssets *assetPackDownloaded; // @dynamic assetPackDownloaded;
@property(retain, nonatomic) YTIAutoCaptionsAvailable *autoCaptionsAvailable; // @dynamic autoCaptionsAvailable;
@property(retain, nonatomic) YTIBackstagePostCreationFlowEnded *backstagePostCreationFlowEnded; // @dynamic backstagePostCreationFlowEnded;
@property(retain, nonatomic) YTIBlockingRequestFailed *blockingRequestFailed; // @dynamic blockingRequestFailed;
@property(retain, nonatomic) YTIBuyFlowEvent *buyFlowEvent; // @dynamic buyFlowEvent;
@property(retain, nonatomic) YTIBuyFlowStarted *buyFlowStarted; // @dynamic buyFlowStarted;
@property(retain, nonatomic) YTIClientDataErrorEvent *clientDataErrorEvent; // @dynamic clientDataErrorEvent;
@property(retain, nonatomic) YTIEventContext *context; // @dynamic context;
@property(retain, nonatomic) YTIDataPlanCpidRequested *dataPlanCpidRequested; // @dynamic dataPlanCpidRequested;
@property(retain, nonatomic) YTIDelayedEventMetricCaptured *delayedEventMetricCaptured; // @dynamic delayedEventMetricCaptured;
@property(retain, nonatomic) YTIDetailedNetworkTypeCaptured *detailedNetworkTypeCaptured; // @dynamic detailedNetworkTypeCaptured;
@property(retain, nonatomic) YTIDeviceContextEvent *deviceContextEvent; // @dynamic deviceContextEvent;
@property(retain, nonatomic) YTIDeviceRetentionInfo *deviceRetentionInfoCaptured; // @dynamic deviceRetentionInfoCaptured;
@property(retain, nonatomic) YTIDownloadStreamUrlExpired *downloadStreamURLExpired; // @dynamic downloadStreamURLExpired;
@property(retain, nonatomic) YTIDummyPayload *dummyPayload; // @dynamic dummyPayload;
@property(retain, nonatomic) YTIElementsLog *elementsLog; // @dynamic elementsLog;
@property(retain, nonatomic) YTIEntitiesError *entitiesError; // @dynamic entitiesError;
@property(nonatomic) long long eventTimeMs; // @dynamic eventTimeMs;
@property(retain, nonatomic) YTIFlexyState *flexyState; // @dynamic flexyState;
@property(retain, nonatomic) YTIFlowEvent *flowEvent; // @dynamic flowEvent;
@property(retain, nonatomic) YTIFlowState *flowState; // @dynamic flowState;
@property(retain, nonatomic) YTIForegroundHeartbeat *foregroundHeartbeat; // @dynamic foregroundHeartbeat;
@property(retain, nonatomic) YTIDroppedFrames *framesDropped; // @dynamic framesDropped;
@property(retain, nonatomic) YTIGamingAccountLinkStatusChanged *gamingAccountLinkStatusChanged; // @dynamic gamingAccountLinkStatusChanged;
@property(retain, nonatomic) YTIGenericAttestationExecution *genericAttestationExecution; // @dynamic genericAttestationExecution;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasEventTimeMs; // @dynamic hasEventTimeMs;
@property(retain, nonatomic) YTIInteractionLoggingDebugModeError *interactionLoggingDebugModeError; // @dynamic interactionLoggingDebugModeError;
@property(retain, nonatomic) YTIInterfaceOrientation *interfaceOrientationCaptured; // @dynamic interfaceOrientationCaptured;
@property(retain, nonatomic) YTIIosOutOfMemoryEvent *iosOutOfMemory; // @dynamic iosOutOfMemory;
@property(retain, nonatomic) YTIKidsAccountsSnapshot *kidsAccountsSnapshot; // @dynamic kidsAccountsSnapshot;
@property(retain, nonatomic) YTIKidsAgeGateTracking *kidsAgeGateTracking; // @dynamic kidsAgeGateTracking;
@property(retain, nonatomic) YTIKidsFlowCorpusSelectedEvent *kidsFlowCorpusSelectedEvent; // @dynamic kidsFlowCorpusSelectedEvent;
@property(retain, nonatomic) YTIKidsFlowError *kidsFlowError; // @dynamic kidsFlowError;
@property(retain, nonatomic) YTIKidsFlowEvent *kidsFlowEvent; // @dynamic kidsFlowEvent;
@property(retain, nonatomic) YTIKidsOfflineSnapshot *kidsOfflineSnapshot; // @dynamic kidsOfflineSnapshot;
@property(retain, nonatomic) YTIKidsParentalGateTracking *kidsParentalGateTracking; // @dynamic kidsParentalGateTracking;
@property(retain, nonatomic) YTIKidsProfileCreationTracking *kidsProfileCreationTracking; // @dynamic kidsProfileCreationTracking;
@property(retain, nonatomic) YTIKidsProfilePinGateTracking *kidsProfilePinGateTracking; // @dynamic kidsProfilePinGateTracking;
@property(retain, nonatomic) YTIKidsProfileSwitcherTracking *kidsProfileSwitcherTracking; // @dynamic kidsProfileSwitcherTracking;
@property(retain, nonatomic) YTIKidsVoiceSearchEvent *kidsVoiceSearchEvent; // @dynamic kidsVoiceSearchEvent;
@property(retain, nonatomic) YTILatencyActionBaselined *latencyActionBaselined; // @dynamic latencyActionBaselined;
@property(retain, nonatomic) YTILatencyActionInfo *latencyActionInfo; // @dynamic latencyActionInfo;
@property(retain, nonatomic) YTILatencyActionSpan *latencyActionSpan; // @dynamic latencyActionSpan;
@property(retain, nonatomic) YTILatencyActionTicked *latencyActionTicked; // @dynamic latencyActionTicked;
@property(retain, nonatomic) YTILayersValidationError *layersValidationError; // @dynamic layersValidationError;
@property(retain, nonatomic) YTILiveChatMessageSent *liveChatMessageSent; // @dynamic liveChatMessageSent;
@property(retain, nonatomic) YTILiveCreationArchiveReplacement *liveCreationArchiveReplacement; // @dynamic liveCreationArchiveReplacement;
@property(retain, nonatomic) YTILiveCreationBroadcastSchedule *liveCreationBroadcastScheduled; // @dynamic liveCreationBroadcastScheduled;
@property(retain, nonatomic) YTILiveCreationCameraMetrics *liveCreationCameraUpdated; // @dynamic liveCreationCameraUpdated;
@property(retain, nonatomic) YTILiveCreationEncodingMetrics *liveCreationEncodingCaptured; // @dynamic liveCreationEncodingCaptured;
@property(retain, nonatomic) YTILiveCreationError *liveCreationError; // @dynamic liveCreationError;
@property(retain, nonatomic) YTILiveCreationHealthMetrics *liveCreationHealthUpdated; // @dynamic liveCreationHealthUpdated;
@property(retain, nonatomic) YTILiveCreationStage *liveCreationStageOccured; // @dynamic liveCreationStageOccured;
@property(retain, nonatomic) YTILyricImpressionEvent *lyricImpressionEvent; // @dynamic lyricImpressionEvent;
@property(retain, nonatomic) YTIMainAppBrowseFragmentCache *mainAppBrowseFragmentCache; // @dynamic mainAppBrowseFragmentCache;
@property(retain, nonatomic) YTIMediaBrowserBrowseEvent *mbsLoadChildren; // @dynamic mbsLoadChildren;
@property(retain, nonatomic) YTIMediaBrowserPlaybackEvent *mbsPlaybackInitiated; // @dynamic mbsPlaybackInitiated;
@property(retain, nonatomic) YTIMdxBackgroundPlaybackRequestCompleted *mdxBackgroundPlaybackRequestCompleted; // @dynamic mdxBackgroundPlaybackRequestCompleted;
@property(retain, nonatomic) YTIMdxBrokenAdditionalDataDeviceDetected *mdxBrokenAdditionalDataDeviceDetected; // @dynamic mdxBrokenAdditionalDataDeviceDetected;
@property(retain, nonatomic) YTIMdxEncryptionSessionStats *mdxEncryptionSessionStatsFinished; // @dynamic mdxEncryptionSessionStatsFinished;
@property(retain, nonatomic) YTIMdxMsnSessionStats *mdxMsnSessionStatsFinished; // @dynamic mdxMsnSessionStatsFinished;
@property(retain, nonatomic) YTIMdxNotificationEvent *mdxNotificationEvent; // @dynamic mdxNotificationEvent;
@property(retain, nonatomic) YTIMdxRouteDistribution *mdxRouteDistributionSnapshot; // @dynamic mdxRouteDistributionSnapshot;
@property(retain, nonatomic) YTIMdxSessionConnected *mdxSessionConnected; // @dynamic mdxSessionConnected;
@property(retain, nonatomic) YTIMdxSessionDisconnected *mdxSessionDisconnected; // @dynamic mdxSessionDisconnected;
@property(retain, nonatomic) YTIMdxSessionRecoveryCompleted *mdxSessionRecoveryCompleted; // @dynamic mdxSessionRecoveryCompleted;
@property(retain, nonatomic) YTIMdxSessionRecoveryStarted *mdxSessionRecoveryStarted; // @dynamic mdxSessionRecoveryStarted;
@property(retain, nonatomic) YTIMdxSessionRecoveryStopped *mdxSessionRecoveryStopped; // @dynamic mdxSessionRecoveryStopped;
@property(retain, nonatomic) YTIMdxSessionStarted *mdxSessionStarted; // @dynamic mdxSessionStarted;
@property(retain, nonatomic) YTIMdxSignIn *mdxSignIn; // @dynamic mdxSignIn;
@property(retain, nonatomic) YTIMdxWebSocketServer *mdxWebSocketServer; // @dynamic mdxWebSocketServer;
@property(retain, nonatomic) YTIMdxWebSocketServerHttpError *mdxWebSocketServerHTTPError; // @dynamic mdxWebSocketServerHTTPError;
@property(retain, nonatomic) YTIMobilePlaybackEvent *mobilePlaybackEvent; // @dynamic mobilePlaybackEvent;
@property(retain, nonatomic) YTIMusicIosBackgroundFetch *musicIosBackgroundFetch; // @dynamic musicIosBackgroundFetch;
@property(retain, nonatomic) YTIMusicOfflineMixtapePreferences *musicOfflineMixtapePreferencesChanged; // @dynamic musicOfflineMixtapePreferencesChanged;
@property(retain, nonatomic) YTIMusicPersistentCacheChecked *musicPersistentCacheChecked; // @dynamic musicPersistentCacheChecked;
@property(retain, nonatomic) YTIMusicPersistentCacheCleared *musicPersistentCacheCleared; // @dynamic musicPersistentCacheCleared;
@property(retain, nonatomic) YTIMusicPlaybackContentModeChangeEvent *musicPlaybackContentModeChangeEvent; // @dynamic musicPlaybackContentModeChangeEvent;
@property(retain, nonatomic) YTINetworkConnectivityBaselineCaptured *networkConnectivityBaselineEvent; // @dynamic networkConnectivityBaselineEvent;
@property(retain, nonatomic) YTINextGenWatchWatchSwiped *nextGenWatchWatchSwiped; // @dynamic nextGenWatchWatchSwiped;
@property(retain, nonatomic) YTIOfflineDelayAllowedTracking *offlineDelayAllowedTracking; // @dynamic offlineDelayAllowedTracking;
@property(retain, nonatomic) YTIOfflinePlaybackTracking *offlinePlaybackStarted; // @dynamic offlinePlaybackStarted;
@property(retain, nonatomic) YTIOfflineSharePairing *offlineSharePairing; // @dynamic offlineSharePairing;
@property(retain, nonatomic) YTIOfflineShareUnlock *offlineShareUnlock; // @dynamic offlineShareUnlock;
@property(retain, nonatomic) YTIOfflineClientState *offlineStateSnapshot; // @dynamic offlineStateSnapshot;
@property(retain, nonatomic) YTIOfflineTransferStarted *offlineTransferStarted; // @dynamic offlineTransferStarted;
@property(retain, nonatomic) YTIOfflineTransferStatusChanged *offlineTransferStatusChanged; // @dynamic offlineTransferStatusChanged;
@property(retain, nonatomic) YTIOfflineVideoShared *offlineVideoShared; // @dynamic offlineVideoShared;
@property(readonly, nonatomic) int payloadOneOfCase; // @dynamic payloadOneOfCase;
@property(retain, nonatomic) YTIPlaybackAssociated *playbackAssociated; // @dynamic playbackAssociated;
@property(retain, nonatomic) YTIPlaybackAudioRouteEvent *playbackAudioRouteEvent; // @dynamic playbackAudioRouteEvent;
@property(retain, nonatomic) YTIPlaybackContextEvent *playbackContextEvent; // @dynamic playbackContextEvent;
@property(retain, nonatomic) YTIPlaybackOfflineFallbackTracking *playbackOfflineFallbackUsed; // @dynamic playbackOfflineFallbackUsed;
@property(retain, nonatomic) YTIPlaybackSessionStopped *playbackSessionStopped; // @dynamic playbackSessionStopped;
@property(retain, nonatomic) YTIPlayerRequestCompleted *playerRequestCompleted; // @dynamic playerRequestCompleted;
@property(retain, nonatomic) YTIReachabilityDetectionEvent *reachabilityDetectionEvent; // @dynamic reachabilityDetectionEvent;
@property(retain, nonatomic) YTIOfflineReceiveDebug *receiveDebugStateUpdated; // @dynamic receiveDebugStateUpdated;
@property(retain, nonatomic) YTIOfflineReceive *receiveStateUpdated; // @dynamic receiveStateUpdated;
@property(retain, nonatomic) YTIReelPlaybackError *reelPlaybackError; // @dynamic reelPlaybackError;
@property(retain, nonatomic) YTIRenderingError *renderingError; // @dynamic renderingError;
@property(retain, nonatomic) YTIScreenCreated *screenCreated; // @dynamic screenCreated;
@property(retain, nonatomic) YTIScrollEvent *scrollEvent; // @dynamic scrollEvent;
@property(retain, nonatomic) YTIScrubbingEvent *scrubbingEvent; // @dynamic scrubbingEvent;
@property(retain, nonatomic) YTISearchSuggestDecodingPayloadFailure *searchSuggestDecodingPayloadFailure; // @dynamic searchSuggestDecodingPayloadFailure;
@property(retain, nonatomic) YTIOfflineSendDebug *sendDebugStateUpdated; // @dynamic sendDebugStateUpdated;
@property(retain, nonatomic) YTIOfflineSend *sendStateUpdated; // @dynamic sendStateUpdated;
@property(retain, nonatomic) YTISiriShortcutActivated *siriShortcutActivated; // @dynamic siriShortcutActivated;
@property(retain, nonatomic) YTIStartupCrashesDetected *startupCrashesDetected; // @dynamic startupCrashesDetected;
@property(retain, nonatomic) YTIStartupTelemetryEvent *startupTelemetry; // @dynamic startupTelemetry;
@property(retain, nonatomic) YTIStreamzIncrement *streamzIncremented; // @dynamic streamzIncremented;
@property(retain, nonatomic) YTISystemHealthMetricCaptured *systemHealthCaptured; // @dynamic systemHealthCaptured;
@property(retain, nonatomic) YTITfliteModelError *tfliteModelError; // @dynamic tfliteModelError;
@property(retain, nonatomic) YTIThumbnailHovered *thumbnailHovered; // @dynamic thumbnailHovered;
@property(retain, nonatomic) YTIThumbnailLoaded *thumbnailLoaded; // @dynamic thumbnailLoaded;
@property(retain, nonatomic) YTITransactionFlow *transactionFlowCancelled; // @dynamic transactionFlowCancelled;
@property(retain, nonatomic) YTITransactionFlow *transactionFlowFailed; // @dynamic transactionFlowFailed;
@property(retain, nonatomic) YTITransactionFlow *transactionFlowSecondaryDeviceStarted; // @dynamic transactionFlowSecondaryDeviceStarted;
@property(retain, nonatomic) YTITransactionFlow *transactionFlowStarted; // @dynamic transactionFlowStarted;
@property(retain, nonatomic) YTITransactionFlow *transactionFlowSucceeded; // @dynamic transactionFlowSucceeded;
@property(retain, nonatomic) YTIUnpluggedDegradationInfo *unpluggedDegradationInfo; // @dynamic unpluggedDegradationInfo;
@property(retain, nonatomic) YTIUploadFrontendEvent *uploadFrontendEvent; // @dynamic uploadFrontendEvent;
@property(retain, nonatomic) YTIUploadMp4HeaderMoved *uploadMp4HeaderMoved; // @dynamic uploadMp4HeaderMoved;
@property(retain, nonatomic) YTIUploadProcessorEnded *uploadProcessorEnded; // @dynamic uploadProcessorEnded;
@property(retain, nonatomic) YTIUploadProcessorInterrupted *uploadProcessorInterrupted; // @dynamic uploadProcessorInterrupted;
@property(retain, nonatomic) YTIUploadProcessorReady *uploadProcessorReady; // @dynamic uploadProcessorReady;
@property(retain, nonatomic) YTIUploadProcessorRequirementPending *uploadProcessorRequirementPending; // @dynamic uploadProcessorRequirementPending;
@property(retain, nonatomic) YTIUploadProcessorStarted *uploadProcessorStarted; // @dynamic uploadProcessorStarted;
@property(retain, nonatomic) YTIUploadVideoTranscoded *uploadVideoTranscoded; // @dynamic uploadVideoTranscoded;
@property(retain, nonatomic) YTIUserMentionAutoCompleteBoxEvent *userMentionAutoCompleteBoxEvent; // @dynamic userMentionAutoCompleteBoxEvent;
@property(retain, nonatomic) YTIVideoAsThumbnailDownloadEvent *videoAsThumbnailDownload; // @dynamic videoAsThumbnailDownload;
@property(retain, nonatomic) YTIVideoAsThumbnailPlaybackEvent *videoAsThumbnailPlayback; // @dynamic videoAsThumbnailPlayback;
@property(retain, nonatomic) YTIVideoEffectsEvent *videoEffectsEvent; // @dynamic videoEffectsEvent;
@property(retain, nonatomic) YTIVisualElementAttached *visualElementAttached; // @dynamic visualElementAttached;
@property(retain, nonatomic) YTIVisualElementGestured *visualElementGestured; // @dynamic visualElementGestured;
@property(retain, nonatomic) YTIVisualElementHidden *visualElementHidden; // @dynamic visualElementHidden;
@property(retain, nonatomic) YTIVisualElementShown *visualElementShown; // @dynamic visualElementShown;
@property(retain, nonatomic) YTIVisualElementStateChanged *visualElementStateChanged; // @dynamic visualElementStateChanged;
@property(retain, nonatomic) YTIWatchBreakEnablementSettingEvent *watchBreakEnablementSettingEvent; // @dynamic watchBreakEnablementSettingEvent;
@property(retain, nonatomic) YTIWatchBreakFrequencySettingEvent *watchBreakFrequencySettingEvent; // @dynamic watchBreakFrequencySettingEvent;
@property(retain, nonatomic) YTIWatchRestoreAttempt *watchRestoreAttempt; // @dynamic watchRestoreAttempt;
@property(retain, nonatomic) YTIWatchTimeSegment *watchTimeSegment; // @dynamic watchTimeSegment;
@property(retain, nonatomic) YTIYouThereEvent *youThere; // @dynamic youThere;
@property(retain, nonatomic) YTIYpcFamilyCreateFlow *ypcFamilyCreateFlowCancelled; // @dynamic ypcFamilyCreateFlowCancelled;
@property(retain, nonatomic) YTIYpcFamilyCreateFlow *ypcFamilyCreateFlowFailed; // @dynamic ypcFamilyCreateFlowFailed;
@property(retain, nonatomic) YTIYpcFamilyCreateFlow *ypcFamilyCreateFlowStarted; // @dynamic ypcFamilyCreateFlowStarted;
@property(retain, nonatomic) YTIYpcFamilyCreateFlow *ypcFamilyCreateFlowSucceeded; // @dynamic ypcFamilyCreateFlowSucceeded;
@property(retain, nonatomic) YTIZeroStepChannelCreation *zeroStepChannelCreated; // @dynamic zeroStepChannelCreated;

@end

