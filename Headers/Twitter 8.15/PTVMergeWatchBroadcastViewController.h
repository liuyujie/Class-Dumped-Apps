//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVWatchBroadcastViewController.h>

#import <PeriscopeSDK/LHLSLogListener-Protocol.h>
#import <PeriscopeSDK/MFMailComposeViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/NSUserActivityDelegate-Protocol.h>
#import <PeriscopeSDK/PTVAmplifyProgramsViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVBroadcastDetailsViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVBroadcastIntroViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVBroadcastOverflowMenuViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVBroadcastOverflowViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVCancelGuestCallViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVChangeExpirationActionSheetControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVChatWarningModalViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVCopyrightViolationViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVCountdownGuestCallViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVGiftingContributorsTableViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVGuestCallerControllerObserver-Protocol.h>
#import <PeriscopeSDK/PTVHangUpGuestCallViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVModalPresentationManagerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVModelLoggingDelegate-Protocol.h>
#import <PeriscopeSDK/PTVOverflowViewControllerAppearanceDelegate-Protocol.h>
#import <PeriscopeSDK/PTVPipelineContainerViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVReadOnlyModalViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVReportBroadcastModalViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVScreenshotObserverDelegate-Protocol.h>
#import <PeriscopeSDK/PTVSetupGuestCallViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVShareBroadcastCoordinatorDelegate-Protocol.h>
#import <PeriscopeSDK/PTVUserModalFollowshipChangeDelegate-Protocol.h>
#import <PeriscopeSDK/PTVUserModalViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVVideoContainerViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVVideoOverlaySubscriberBlockReportingDelegate-Protocol.h>
#import <PeriscopeSDK/PTVVideoOverlayViewControllerCameraDelegate-Protocol.h>
#import <PeriscopeSDK/PTVVideoOverlayViewControllerChatDelegate-Protocol.h>
#import <PeriscopeSDK/PTVVideoOverlayViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVWatchBroadcastErrorViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVWatchBroadcastViewDelegate-Protocol.h>

@class NSMutableSet, NSString, NSTimer, PTVGuestCallerController, PTVMergeParticipantUser, PTVMessage, PTVScreenshotObserver, PTVShareBroadcastCoordinator, PTVTwitterAuthenticationModel, PTVUserChatSectionCompositeViewController, PTVVideoOverlayViewController, PTVWorkClientWithCompletion, UIViewController;
@protocol PTVCustomTwitterViewDelegate, PTVMergeWatchBroadcastViewControllerDelegate, PTVModalPresentationManagerDelegate, PTVTwitterIntegrationDelegate;

@interface PTVMergeWatchBroadcastViewController : PTVWatchBroadcastViewController <NSUserActivityDelegate, PTVWatchBroadcastViewDelegate, PTVVideoContainerViewControllerDelegate, PTVChatWarningModalViewControllerDelegate, PTVScreenshotObserverDelegate, PTVBroadcastDetailsViewControllerDelegate, PTVChangeExpirationActionSheetControllerDelegate, PTVOverflowViewControllerAppearanceDelegate, PTVBroadcastIntroViewControllerDelegate, PTVAmplifyProgramsViewControllerDelegate, MFMailComposeViewControllerDelegate, PTVGiftingContributorsTableViewControllerDelegate, PTVWatchBroadcastErrorViewControllerDelegate, PTVSetupGuestCallViewControllerDelegate, PTVCancelGuestCallViewControllerDelegate, PTVCountdownGuestCallViewControllerDelegate, PTVHangUpGuestCallViewControllerDelegate, PTVGuestCallerControllerObserver, PTVCopyrightViolationViewControllerDelegate, PTVVideoOverlayViewControllerCameraDelegate, PTVPipelineContainerViewControllerDelegate, PTVVideoOverlaySubscriberBlockReportingDelegate, PTVVideoOverlayViewControllerChatDelegate, LHLSLogListener, PTVReadOnlyModalViewControllerDelegate, PTVReportBroadcastModalViewControllerDelegate, PTVModalPresentationManagerDelegate, PTVShareBroadcastCoordinatorDelegate, PTVModelLoggingDelegate, PTVBroadcastOverflowViewControllerDelegate, PTVUserModalFollowshipChangeDelegate, PTVVideoOverlayViewControllerDelegate, PTVBroadcastOverflowMenuViewControllerDelegate, PTVUserModalViewControllerDelegate>
{
    PTVMergeWatchBroadcastViewController *_weakSelf;
    NSMutableSet *_moderationMessagesViewed;
    NSString *_currentModerationMessageUUID;
    PTVWorkClientWithCompletion *_workClientDelegateForFetchingBlockedUser;
    _Bool _hasBeenPromptedToFollowBroadcaster;
    _Bool _hasVoted;
    int _reconnectWaitTime;
    _Bool _hasShownCallInPrompt;
    _Bool _presentedCallInOverflowControllerFromPermissions;
    _Bool _shouldBecomeEligbileForAppReviewOnComment;
    _Bool _commentTipPromptHasBeenShown;
    _Bool _hasModeratorWelcomeBeenShown;
    _Bool _hasViewerAdvisoryOfModerationBeenShown;
    PTVShareBroadcastCoordinator *_shareBroadcastCoordinator;
    PTVScreenshotObserver *_screenshotObserver;
    PTVUserChatSectionCompositeViewController *_userChatSectionController;
    _Bool _needsVideoConnectionStatusCallbackAfterViewDidLoad;
    _Bool _hasShownScrubbingPrompt;
    _Bool _shouldAutoCallAsGuest;
    _Bool _hasReportedBroadcast;
    _Bool _shouldPromptFollowBroadcaster;
    _Bool _hasVotingTimedOut;
    _Bool _useLargeChatFont;
    _Bool _hasPresentedCopyrightViolationInterstitial;
    _Bool _shouldHideStatusBar;
    PTVVideoOverlayViewController *_videoOverlayViewController;
    id <PTVMergeWatchBroadcastViewControllerDelegate> _delegate;
    id <PTVModalPresentationManagerDelegate> _modalDelegate;
    id <PTVCustomTwitterViewDelegate> _customTwitterViewDelegate;
    NSTimer *_followBroadcasterPromptTimer;
    NSTimer *_votingTimeoutTimer;
    PTVMessage *_verdictMessage;
    UIViewController *_savedOverflowRootViewController;
}

+ (Class)ShareBroadcastCoordinatorClass;
+ (id)WatchBroadcastViewControllerForBroadcast:(id)arg1 Account:(id)arg2 ExternalVideoPlayer:(id)arg3 VideoAccessManager:(id)arg4 Delegate:(id)arg5 TwitterIntegrationDelegate:(id)arg6 CustomTwitterViewDelegate:(id)arg7;
+ (id)WatchBroadcastViewControllerWithWatcher:(id)arg1 Delegate:(id)arg2 UseLargeChatFont:(_Bool)arg3;
+ (id)WatchBroadcastViewControllerForBroadcast:(id)arg1 LoggedInUser:(id)arg2 WatchContext:(id)arg3 StartingPosition:(id)arg4 UseLargeChatFont:(_Bool)arg5 Delegate:(id)arg6 TwitterIntegrationDelegate:(id)arg7 TwitterAuthenticationModel:(id)arg8;
+ (id)VideoOverlayViewControllerWithBroadcastWatcher:(id)arg1 ChatSectionViewController:(id)arg2;
@property(retain, nonatomic) UIViewController *savedOverflowRootViewController; // @synthesize savedOverflowRootViewController=_savedOverflowRootViewController;
@property(readonly, nonatomic) _Bool shouldHideStatusBar; // @synthesize shouldHideStatusBar=_shouldHideStatusBar;
@property(nonatomic) _Bool hasPresentedCopyrightViolationInterstitial; // @synthesize hasPresentedCopyrightViolationInterstitial=_hasPresentedCopyrightViolationInterstitial;
@property(nonatomic) _Bool useLargeChatFont; // @synthesize useLargeChatFont=_useLargeChatFont;
@property(nonatomic) _Bool hasVotingTimedOut; // @synthesize hasVotingTimedOut=_hasVotingTimedOut;
@property(nonatomic) _Bool shouldPromptFollowBroadcaster; // @synthesize shouldPromptFollowBroadcaster=_shouldPromptFollowBroadcaster;
@property(retain, nonatomic) PTVMessage *verdictMessage; // @synthesize verdictMessage=_verdictMessage;
@property(retain, nonatomic) NSTimer *votingTimeoutTimer; // @synthesize votingTimeoutTimer=_votingTimeoutTimer;
@property(retain, nonatomic) NSTimer *followBroadcasterPromptTimer; // @synthesize followBroadcasterPromptTimer=_followBroadcasterPromptTimer;
@property(nonatomic) _Bool hasReportedBroadcast; // @synthesize hasReportedBroadcast=_hasReportedBroadcast;
@property(nonatomic) _Bool shouldAutoCallAsGuest; // @synthesize shouldAutoCallAsGuest=_shouldAutoCallAsGuest;
@property(nonatomic) __weak id <PTVCustomTwitterViewDelegate> customTwitterViewDelegate; // @synthesize customTwitterViewDelegate=_customTwitterViewDelegate;
@property(nonatomic) __weak id <PTVModalPresentationManagerDelegate> modalDelegate; // @synthesize modalDelegate=_modalDelegate;
@property(nonatomic) __weak id <PTVMergeWatchBroadcastViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PTVVideoOverlayViewController *videoOverlayViewController; // @synthesize videoOverlayViewController=_videoOverlayViewController;
- (void).cxx_destruct;
- (void)setShouldHideStatusBar:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setShouldNotifyGuestFollowers:(_Bool)arg1;
- (_Bool)shouldNotifyGuestFollowers;
- (_Bool)canNotifyGuestFollowers;
- (void)displayMicrophonePermissionsAlertFrom:(id)arg1;
- (void)displayCameraPermissionsAlertFrom:(id)arg1;
- (_Bool)presentCopyrightViolationInterstitialIfNeeded;
- (void)willViewBroadcastDetails;
- (void)dismissPresentedViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissPresentedViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissPresentedViewController;
- (void)updateErrorViewControllerIfNeededAnimated:(_Bool)arg1;
- (_Bool)shouldShowErrorView;
- (id)errorViewController;
- (void)showCallInPromptIfNeeded;
- (void)showScrubbingPromptIfNeeded;
- (void)didHideBroadcastIntro;
- (void)hideBroadcastIntroIfNeeded;
- (void)dismissBroadcastIntroAndStartWatchingIfNeeded;
- (void)showBroadcastIntro;
- (_Bool)isShowingBroadcastIntro;
- (id)broadcastIntroViewController;
- (void)updateCustomTwitterViewPropertiesOnWatchBroadcastView;
- (void)presentAmplifyProgramsFromMenuViewController:(id)arg1;
- (void)openBroadcastInPeriscopeApp;
- (void)presentBroadcastEdit;
- (void)presentBroadcastEditFromMenuViewController:(id)arg1;
- (void)presentBroadcastDetailsFromMenuViewController:(id)arg1;
- (void)presentBroadcastDetails;
- (void)hangUpGuestBroadcastingIfNeededShouldNotifyChat:(_Bool)arg1;
- (void)hangUpGuestCallViewControllerDidPressHangUpButton:(id)arg1;
- (void)cancelCountdownForGuestBroadcastingShouldNotifyChat:(_Bool)arg1;
- (void)countdownGuestCallViewControllerDidSelectCancelButton:(id)arg1;
- (void)countdownGuestCallViewControllerDidCompleteCountdown:(id)arg1;
- (void)cancelGuestCallViewControllerDidSelectCancelButton:(id)arg1;
- (void)setupGuestCallViewController:(id)arg1 didSelectShouldNotifyFollowers:(_Bool)arg2;
- (void)setupGuestCallViewControllerShouldDisplayMicrophonePermissionsAlert:(id)arg1;
- (void)setupGuestCallViewControllerShouldDisplayCameraPermissionsAlert:(id)arg1;
- (void)setupGuestCallViewController:(id)arg1 didUpdateOverflowNavigationVisibility:(_Bool)arg2;
- (void)setupGuestCallViewController:(id)arg1 didSelectGuestBroadcastWithAudioOnly:(_Bool)arg2;
- (void)viewerDidGetHungUpOnByBroadcaster;
- (void)viewerCountdownWasCancelledByBroadcaster;
- (void)viewerVideoOrAudioFeedIsConnected;
- (void)viewerRequestToCallInWasAcceptedWithConfiguration:(id)arg1;
- (void)guestCallerControllerDidAddOrRemoveLoggedInUserSession;
- (void)dismissCountdownGuestCallOverflowControllerIfPresented;
- (id)presentedCountdownViewController;
- (void)dismissSetupGuestCallInOverflowControllerIfPresented;
- (void)presentGuestCallInOverflowControllerFromMenuViewController:(id)arg1;
- (void)presentGuestCallInOverflowController:(id)arg1;
- (void)presentAppropriateGuestCallInOverflowController:(id)arg1;
- (void)presentGuestCallInOverflowControllerAgainIfNeeded;
- (void)prepareToDismissGuestCallInController;
- (void)willPresentGuestCallInController:(id)arg1;
- (id)appropriateGuestCallInOverflowControllerWithPreviousScreen:(id)arg1;
- (void)broadcastControllerDidChangeGuestCallInsDisabledState:(id)arg1;
@property(readonly, nonatomic) PTVGuestCallerController *guestCallerController;
- (_Bool)pipelineContainerViewControllerDefaultsInFrontPosition;
- (void)displayGuestBroadcastingOnboardingModalIfNeeded;
- (_Bool)startGuestSessionIfInvited;
- (id)defaultModalForUserWithID:(id)arg1 modalDelegate:(id)arg2;
- (id)modalForUserWithID:(id)arg1 modalDelegate:(id)arg2 configureBlock:(CDUnknownBlockType)arg3;
- (void)presentModalForUser:(id)arg1;
- (void)presentContextualMenuForUser:(id)arg1;
- (void)willPresentOverflowMenu:(id)arg1;
- (id)overflowMenuItems;
- (void)presentOverflowMenu;
- (id)presentedOverflowMenu;
- (id)presentedOverflow;
- (void)overflowViewControllerDidSelectDismiss:(id)arg1;
- (void)presentOverflowViewWithRootController:(id)arg1;
- (void)screenshotObserverScreenshotIsReadyToFetch:(id)arg1;
- (void)screenshotObserverDidObserveUserTakeScreenshot:(id)arg1;
- (void)didRetweetBroadcastWithSuccess:(_Bool)arg1 error:(id)arg2 canRetry:(_Bool)arg3;
- (void)willRetweetBroadcast;
- (void)didSelectRetweetBroadcast;
- (void)didSelectToggleRetweetBroadcast;
- (void)updateRetweetButtonAnimated:(_Bool)arg1;
- (_Bool)shouldShowRetweetButton;
- (id)shareBroadcastCoordinator;
- (void)presentShareActionSheetWithShareHighlightSelected:(_Bool)arg1;
- (void)presentReportBroadcastThankYouModalAndDismissBroadcast:(_Bool)arg1;
- (void)didCompleteReportBroadcastWithType:(long long)arg1 guestUser:(id)arg2 timecode:(double)arg3 ntp:(unsigned long long)arg4 success:(_Bool)arg5 error:(id)arg6;
- (void)didConfirmReportBroadcastWithType:(long long)arg1 guestUser:(id)arg2 timecode:(double)arg3 ntp:(unsigned long long)arg4;
- (void)didSelectReportBroadcastWithType:(long long)arg1 guestUser:(id)arg2 timecode:(double)arg3 ntp:(unsigned long long)arg4;
- (void)reportBroadcastWithGuestUser:(id)arg1;
- (void)loggedInUserDidSelectUnMute;
- (void)loggedInUserDidSelectMute;
- (void)toggleBroadcastHiddenStateFromMenu:(id)arg1;
- (void)volumeChanged;
- (void)displayVotingTimedOutUX;
- (void)onUserVoteAndVerdictReached:(id)arg1;
- (void)serveJuryDutyIfPossible:(id)arg1;
- (void)invalidateCurrentUserActivityObject;
- (void)createUserActivityObjectWithBroadcast:(id)arg1;
- (void)executeViewerAdvisoryOfModerationIfNeeded;
- (void)executeModeratorWelcomePromptIfNeeded;
- (void)executeCommentTipPromptIfNeeded;
- (void)chatDidBecomeVisible;
- (void)executeFollowBroadcasterMessage;
- (void)executeFollowBroadcasterMessageOnlyIfTimerHasNotFiredYet;
- (void)commenceTimerToDisplayFollowBroadcasterPrompt;
- (void)logAndUploadPlaybackStats;
- (id)vidManStatistics;
- (void)didSelectDismiss;
- (_Bool)isReplayOrLiveHighlightPossible;
- (void)determineReplayAvailabilityState;
- (void)determineIfShouldBecomeEligibleForAppReviewOnComment;
- (void)clearAllTimers;
- (void)setShouldAllowScrollViewToResetOnDismiss:(_Bool)arg1;
- (void)setScrollContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setScrollDismissalEnabled:(_Bool)arg1;
- (void)setShouldVideoTakeOverEntireUX:(_Bool)arg1;
@property(retain, nonatomic) PTVTwitterAuthenticationModel *twitterAuthenticationModel;
@property(nonatomic) __weak id <PTVTwitterIntegrationDelegate> twitterIntegrationDelegate;
- (_Bool)shouldShowPlaceholderThumbnail;
@property(readonly, nonatomic) PTVMergeParticipantUser *broadcaster;
- (id)chatSectionCompositeView;
- (id)watchBroadcastView;
- (void)didReceiveChatRoomPresenceEvent:(id)arg1;
- (id)initWithWatcher:(id)arg1 delegate:(id)arg2 videoPlayer:(id)arg3 externalVideoPlayer:(id)arg4 useLargeChatFont:(_Bool)arg5;
- (void)watchBroadcastErrorViewControllerDidSelectViewBroadcaster:(id)arg1;
- (_Bool)navigationDismissItemDisplaysBelowNotch;
- (_Bool)navigationItemOrderInverted;
- (void)watchBroadcastViewShouldToggleTheaterModeOn:(_Bool)arg1;
- (_Bool)watchBroadcastViewShouldEnterTheaterModeOnRotation;
- (_Bool)watchBroadcastViewIsInTheaterMode;
- (void)watchBroadcastViewDidCompleteSwipeToDismiss:(id)arg1;
- (void)watchBroadcastViewDidUpdateSwipeToDismiss:(id)arg1 withOffset:(struct CGPoint)arg2;
- (void)watchBroadcastViewDidCancelSwipeToDismiss:(id)arg1;
- (_Bool)watchBroadcastViewShouldAllowSwipeToDismissFromTouch:(id)arg1;
- (void)watchBroadcastViewDidSelectDismiss:(id)arg1;
- (void)userActivityWillSave:(id)arg1;
- (void)showModerationLearnMoreModal;
- (void)didCastModerationVote:(unsigned long long)arg1;
- (void)sendHeart;
- (void)replayControllerDidCancelScrubbing;
- (void)replayControllerDidFinishScrubbingAtSeekTime:(double)arg1;
- (void)replayControllerWillBeginScrubbing;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)deleteBroadcastFromServer;
- (void)replayControllerDidChangeBuffering:(_Bool)arg1;
- (void)presentBroadcast:(id)arg1 withWatchContext:(id)arg2 inCollection:(id)arg3;
- (void)presentUserModalForUserId:(id)arg1 configureBlock:(CDUnknownBlockType)arg2;
- (void)didDoubleTapToFlipCamera;
- (void)adjustCameraZoom:(double)arg1 velocity:(double)arg2;
- (void)sendUserIsTypingMessage;
- (void)sendLocalGenericChatPrompt:(id)arg1 withIcon:(id)arg2;
- (void)sendLocalGenericChatPrompt:(id)arg1;
- (void)didReceiveBanType:(unsigned long long)arg1 duration:(double)arg2;
- (void)didReceiveModerationSentenceType:(unsigned long long)arg1 duration:(double)arg2;
- (void)didReceiveBroadcastViewersAndStats:(id)arg1;
- (void)didChangeChatRoomState:(unsigned long long)arg1 error:(id)arg2;
- (void)didJoinChatRoom;
- (void)didReceiveUnmuteMessage:(id)arg1;
- (void)didReceiveMuteMessage:(id)arg1;
- (void)didReceiveBlockMessage:(id)arg1;
- (void)didReceiveJuryDutyTimeout:(id)arg1;
- (void)didReceiveJuryDutyVerdict:(id)arg1;
- (void)wasSelectedForJuryDuty:(id)arg1;
- (_Bool)didReceiveMessage:(id)arg1 isForReplay:(_Bool)arg2;
- (void)loggedInUserBlockedByBroadcasterInMessage:(id)arg1;
- (void)userModalViewControllerDidSelectDismiss:(id)arg1;
- (void)readOnlyModalViewControllerDidSelectDismiss:(id)arg1;
- (void)copyrightViolationViewControllerDidSelectDismiss:(id)arg1;
- (void)networkRequestDidComplete:(id)arg1 requestSize:(unsigned long long)arg2 responseSize:(unsigned long long)arg3 requestDuration:(double)arg4 responseDuration:(double)arg5;
- (void)networkRequestDidStart:(id)arg1;
- (void)amplifyProgramsViewController:(id)arg1 didChangeAmplifyProgram:(id)arg2;
- (void)changeExpirationActionSheetControllerDidSelectDeleteBroadcast:(id)arg1;
- (void)changeExpirationActionSheetControllerDidSelectDontAutoDelete:(id)arg1;
- (void)broadcastIntroViewControllerDidTapBroadcaster:(id)arg1;
- (void)broadcastIntroViewControllerDidReceiveTap:(id)arg1;
- (void)broadcastDetailsViewController:(id)arg1 didSelectViewer:(id)arg2;
- (void)broadcastDetailsViewControllerDidSelectMap:(id)arg1;
- (void)overflowMenu:(id)arg1 didTapTitleHashtag:(id)arg2;
- (void)overflowMenuDidTapEmptySpace:(id)arg1;
- (void)overflowMenu:(id)arg1 didSelectMenuItem:(id)arg2;
- (_Bool)shouldEnableGuestMenuItemType:(long long)arg1;
- (_Bool)overflowMenu:(id)arg1 shouldEnableMenuItem:(id)arg2;
- (_Bool)shouldOverflowViewControllerPresentContentViewFullScreen:(id)arg1;
- (void)overflowViewController:(id)arg1 willDisappearWithAnimationDuration:(double)arg2;
- (void)overflowViewController:(id)arg1 willAppearWithAnimationDuration:(double)arg2;
- (void)shareBroadcastCoordinatorDidRetweetBroadcast:(id)arg1 withSuccess:(_Bool)arg2 error:(id)arg3 canRetry:(_Bool)arg4;
- (void)shareBroadcastCoordinatorWillRetweetBroadcast:(id)arg1;
- (_Bool)giftingContributorsViewControllerShouldShowFollowButtons:(id)arg1;
- (void)giftingContributorsViewController:(id)arg1 didSelectContributor:(id)arg2;
- (void)videoOverlayViewControllerDidTapViewerPromptToCallInToBroadcast:(id)arg1;
- (void)videoOverlayViewControllerDidSelectWatchLive:(id)arg1;
- (void)videoOverlayViewControllerDidEndComposingMessage:(id)arg1;
- (void)videoOverlayViewControllerDidChangeMessage:(id)arg1;
- (void)videoOverlayViewControllerDidBeginComposingMessage:(id)arg1;
- (void)videoOverlayViewControllerDidTapOnContributors:(id)arg1 withContributorWatcher:(id)arg2 presentUserIDs:(id)arg3;
- (void)videoOverlayViewControllerReplayDidSelectPauseReplay:(id)arg1;
- (void)videoOverlayViewControllerReplayDidSelectPlayReplay:(id)arg1;
- (void)videoOverlayViewControllerDidSelectReadOnly:(id)arg1;
- (void)videoOverlayViewControllerDidSelectEditBroadcast:(id)arg1;
- (void)videoOverlayViewControllerDidSelectShowBroadcastDetails:(id)arg1;
- (void)videoOverlayViewControllerDidSelectOverflowMenu:(id)arg1;
- (void)videoOverlayViewControllerDidSelectShareBroadcast:(id)arg1 shareHighlightSelectedByDefault:(_Bool)arg2;
- (void)videoOverlayViewControllerDidSelectShareScreenshot:(id)arg1 sourceViewForActivityViewController:(id)arg2;
- (void)videoOverlayViewControllerDidSelectToggleCallInToBroadcast:(id)arg1;
- (void)videoOverlayViewControllerDidSelectToggleRetweetBroadcast:(id)arg1;
- (void)videoOverlayViewControllerDidTapUsernameOfGuestUser:(id)arg1;
- (void)videoOverlayViewControllerDidRequestModerationLearnMore:(id)arg1;
- (void)videoOverlayViewController:(id)arg1 didCastModerationVote:(unsigned long long)arg2;
- (void)videoOverlayViewControllerDidRequestSendHeart:(id)arg1;
- (void)videoOverlayViewControllerDidExitTheaterMode;
- (void)videoOverlayViewControllerDidSelectPrivacySettings:(id)arg1;
- (void)didSelectInfoSectionMap;
- (void)chatWarningViewControllerDidCancelSend:(id)arg1;
- (void)chatWarningViewControllerDidConfirmSend:(id)arg1;
- (_Bool)didExecuteCommandForChatMessage:(id)arg1;
- (void)sendInoffensiveChatMessage:(id)arg1 keyboardLanguage:(id)arg2;
- (void)sendChat:(id)arg1 keyboardLanguage:(id)arg2;
- (void)subscriberDidReportAndPressExitBroadcast;
- (void)subscriberDidReportMessage:(id)arg1 withReportType:(unsigned long long)arg2;
- (void)reportSubscriberBlockToTwitterAfterFetchingUserWithID:(id)arg1;
- (void)handleSubscriberBlockOfUsername:(id)arg1 remoteID:(id)arg2;
- (void)handleSubscriberUnblockOfUser:(id)arg1;
- (void)handleSubscriberBlockOfUser:(id)arg1;
- (void)subscriberDidBlockMessage:(id)arg1;
- (void)subscriberDidSelectReportGuestUser:(id)arg1;
- (void)subscriberDidUnblockUser:(id)arg1;
- (void)subscriberDidBlockUser:(id)arg1;
- (void)broadcastHasModeratorsDidChange;
- (void)updateVideoContainerDelegateForPlaybackPoint:(id)arg1;
- (void)didUpdatePlaybackPointFrom:(id)arg1;
- (void)willUpdatePlaybackPointTo:(id)arg1;
- (void)didViewSignificantAmountOfVideo;
- (void)didTransitionFromWatchBroadcastState:(long long)arg1;
- (void)lhls_logWithLevel:(long long)arg1 file:(id)arg2 line:(int)arg3 message:(id)arg4;
- (void)willTransitionToWatchBroadcastState:(long long)arg1;
- (void)broadcastAvailableForReplayDidChange;
- (void)applicationStateDidChange;
- (void)didReceiveFirstFrame;
- (_Bool)shouldSupportMessage:(id)arg1;
- (void)didDetectCopyrightViolation;
- (void)seekVideoToPosition:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tearDownReplayVideoStack;
- (void)pauseVideo;
- (void)playVideo;
- (_Bool)setupReplayVideoStack;
- (void)updateGuestPublishingStackIfNeeded;
- (_Bool)setupLiveVideoStack;
- (_Bool)updateVideoStackIfNeeded;
- (void)didFailToFetchVideoAccessWithError:(id)arg1;
- (void)didUpdateVideoAccess:(id)arg1 previousVideoAccess:(id)arg2;
- (void)didUpdateTheaterModeEnabled;
- (void)didChangeBroadcaster;
- (void)chatReplayTimerDidFire;
- (void)didSendMessage:(id)arg1;
- (void)didReceiveQueuedMessage:(id)arg1 deliveryQueueSize:(unsigned long long)arg2;
- (void)reportBroadcastModalViewControllerDidSelectReportBroadcast:(id)arg1;
- (void)presentBlockedUsers;
- (void)broadcastDetailsViewControllerPresentBlockedUsers:(id)arg1;
- (_Bool)canPresentModerationSettings;
- (void)presentModerationSettings;
- (_Bool)broadcastDetailsViewControllerCanPresentModerationSettings:(id)arg1;
- (void)broadcastDetailsViewControllerPresentModerationSettings:(id)arg1;
- (void)videoContainerViewControllerVolumeDidChange:(id)arg1;
- (void)updateViewStateForChangedVideoConnectionState;
- (long long)currentConnectivityStatus;
- (void)updateConnectivityViews;
- (void)updateLifeCycleManagerForChangedVideoConnectionState;
- (void)videoContainerViewControllerVideoConnectionStatusDidChange:(id)arg1;
- (void)videoContainerViewController:(id)arg1 didCollectGuestBroadcastingEndOfStreamStats:(id)arg2;
- (void)videoContainerViewController:(id)arg1 didCollectGuestBroadcastingPeriodicPlaybackStats:(id)arg2;
- (void)videoContainerViewController:(id)arg1 didCollectGuestBroadcastingPeriodicPublishingStats:(id)arg2;
- (void)videoContainerViewControllerGuestPublishingStateDidChange:(id)arg1;
- (void)videoContainerViewControllerDidTapUsernameOfGuestUser:(id)arg1;
- (void)videoContainerViewControllerDidReceiveGuestPublishingLogEntry:(id)arg1;
- (void)videoContainerViewControllerGuestDidPressHangUpButton:(id)arg1;
- (void)ptv_keyboardWillHideWithFrame:(struct CGRect)arg1 curve:(long long)arg2 duration:(float)arg3;
- (void)ptv_keyboardWillShowWithFrame:(struct CGRect)arg1 curve:(long long)arg2 duration:(float)arg3;
- (void)didUnblockUser:(id)arg1;
- (void)didBlockUser:(id)arg1;
- (void)followStatusDidChange:(id)arg1 isNowFollowing:(_Bool)arg2;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)didUpdateGuestViewsMargins;
- (void)didUpdateChatSectionBottomBarHeight;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (_Bool)accessibilityPerformMagicTap;
- (_Bool)accessibilityPerformEscape;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
