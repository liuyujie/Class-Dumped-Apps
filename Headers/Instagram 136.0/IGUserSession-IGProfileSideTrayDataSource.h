//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGUserSession.h>

@class IGInstantExperienceDelegate;

@interface IGUserSession (IGProfileSideTrayDataSource)
- (id)sideTrayDataSource;
- (id)storyNotificationController;
- (id)videoCallCreator;
- (id)reactModule;
- (id)accountPrivacyUpdater;
- (id)activityStatusSettingService;
- (id)appRatingHandler;
- (id)commentDataController;
- (id)commentNUXManager;
- (id)directAggregatedMediaCache;
- (id)audioMessagePlaybackService;
- (id)badgeCountValidator;
- (id)badgeService;
- (id)directInAppNotificationManager;
- (id)directInAppNotificationService;
- (id)directInboxService;
- (id)directInboxSubscriptionService;
- (id)directMessageReachabilitySettingsService;
- (id)directMessageSendService;
- (id)directMutationManager;
- (id)directUpdateAlertService;
- (id)directOutgoingUpdateSender;
- (id)directPendingInboxService;
- (id)directRealtimeService;
- (id)directSaveSelfieStickerService;
- (id)directThreadSubscriptionService;
- (id)directThreadTheme;
- (id)directToastDispatchingService;
- (id)directVisualMessagePreloadService;
- (id)visualMessageTranscodedVideoURLCache;
- (id)visualMessageViewerPresentationManager;
- (id)dogfooder;
- (id)feedItemActionSheetHandler;
- (id)feedSharingSurveyManager;
- (id)granularPresenceUpdater;
- (id)recentGroupsDataSource;
- (id)highlightsStoryTrayDataSource;
- (id)inAppBadgeManager;
@property(readonly, copy, nonatomic) IGInstantExperienceDelegate *instantExperienceDelegate;
- (id)livePresenceService;
- (id)liveQuestionsManager;
- (id)liveRealtimeTopicHandlingService;
- (id)mediaManager;
- (id)interopAccountService;
- (id)nametagBackgroundDataSource;
- (id)accountSettingsPaymentsEligibilityDecider;
- (id)pendingActionManager;
- (id)postCreationCompletionHandler;
- (id)presenceManager;
- (void)startPresenceManagerInBackground;
- (id)profilePictureManager;
- (id)quickPromotionCoordinator;
- (id)realtimeInAppNotificationService;
- (id)sessionEndBlocker;
- (id)slideshowNUXManager;
- (id)storiesInteractionManager;
- (id)storyCreationManager;
- (id)surveyManager;
- (id)systemMessageListener;
- (id)tvPendingUploadManager;
- (id)reactionsPendingUploadManager;
- (id)timeSpentManager;
- (id)ringDismissHandler;
- (id)videoCallFlowCoordinator;
- (id)videoCallManager;
- (id)videoCallNotificationDirectCacheListener;
- (id)xPostingToFbUpsellAfterSharingToStoryManager;
- (id)shoppingPostApprovalNUXManager;
@end

