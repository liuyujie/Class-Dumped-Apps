//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FVRPushNotificationItem, FVRUserService, NSDictionary, NSString;

@interface FVRExternalEventsHandler : NSObject
{
    NSString *referrer;
    NSString *pendingPayload;
    NSDictionary *pendingAction;
    unsigned long long _backgroundTask;
    FVRPushNotificationItem *lastPushNotification;
    _Bool _isFromDeeplink;
    _Bool _isFromMatchmaker;
    _Bool _shouldDelayMenuAttributesCallAfterAppLaunchFromPush;
    NSString *_lastPushType;
    NSDictionary *_actionToPerformAfterTabsInitiated;
    FVRUserService *_userService;
}

+ (id)sharedHandler;
@property(retain, nonatomic) FVRUserService *userService; // @synthesize userService=_userService;
@property(retain, nonatomic) NSDictionary *actionToPerformAfterTabsInitiated; // @synthesize actionToPerformAfterTabsInitiated=_actionToPerformAfterTabsInitiated;
@property(retain, nonatomic) NSString *lastPushType; // @synthesize lastPushType=_lastPushType;
@property _Bool shouldDelayMenuAttributesCallAfterAppLaunchFromPush; // @synthesize shouldDelayMenuAttributesCallAfterAppLaunchFromPush=_shouldDelayMenuAttributesCallAfterAppLaunchFromPush;
@property _Bool isFromMatchmaker; // @synthesize isFromMatchmaker=_isFromMatchmaker;
@property _Bool isFromDeeplink; // @synthesize isFromDeeplink=_isFromDeeplink;
- (void).cxx_destruct;
- (void)performActionAfterTabInitiation;
- (void)logoutSucceed:(id)arg1;
- (void)loginOrRegisterSucceed:(id)arg1;
- (void)handleCollectActionForGigShow:(id)arg1;
- (void)handleOpenBuyerRequestsForm;
- (void)handleOpenBRPostForm;
- (void)handleWithdrawal:(id)arg1;
- (void)handleSalesView:(id)arg1;
- (void)handleSettingsView:(id)arg1;
- (void)handleOrdersView:(id)arg1;
- (void)handleOffersView:(id)arg1;
- (void)handleMyRequestsView:(id)arg1;
- (void)handleLoginAction;
- (void)handleConfirmationView:(id)arg1;
- (void)handleExploreView;
- (void)handleNotificationsView;
- (void)handleInboxView;
- (void)handleCategoryDeepLink:(id)arg1;
- (void)handleUserPageDeepLink:(id)arg1;
- (void)handleConversationDeepLink:(id)arg1;
- (void)handleGigOrderDeepLink:(id)arg1;
- (void)handleGigShowDeepLink:(id)arg1;
- (void)handleCollectionShowDeepLink:(id)arg1;
- (void)handleSearchResultsOpen:(id)arg1 popAllBeforePush:(_Bool)arg2;
- (id)decodeEncodedFilters:(id)arg1;
- (id)parseFiltersStringParam:(id)arg1;
- (void)handleSavedOpen:(id)arg1;
- (void)checkForOnboardingAction;
- (void)handleEmailActivation:(id)arg1;
- (void)handleLogOut:(id)arg1;
- (void)removeOnBoardingAsRootViewController;
- (id)parseQuery:(id)arg1;
- (void)popToHome;
- (id)getLastPushNotification;
- (_Bool)shouldShowNotificationAlert:(id)arg1;
- (void)updateBadges:(id)arg1;
- (void)updateInboxBadge:(id)arg1;
- (void)updateNotificationsBadge:(id)arg1;
- (_Bool)shouldShowInAppUserPageNotification:(id)arg1;
- (_Bool)shouldShowInAppOrderConversationNotification:(id)arg1;
- (_Bool)shouldShowInAppInboxConversationNotification:(id)arg1;
- (void)showNotificationAlert:(id)arg1;
- (id)extractGigExtrasIdsFromGigItemsDictionary:(id)arg1;
- (void)handleOrderGigAbandonedToken:(id)arg1;
- (void)handleCustomOfferAbandonedToken:(id)arg1;
- (void)handleAbandonedToken:(id)arg1;
- (void)handleCollectAction:(id)arg1;
- (void)handleAction:(id)arg1;
- (void)presentViewController:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)createDynamicShortcutItems;
- (id)createItem:(id)arg1 title:(id)arg2 icon:(id)arg3;
- (_Bool)handleShortCutActionByType:(id)arg1;
- (void)handleInLineMessageReplay:(id)arg1 textToSend:(id)arg2;
- (void)handleOrderDeliveryNotification:(id)arg1;
- (void)unregisterForPushNotificationWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)registerForPushNotification:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)snoozeActionClicked:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)openActionClicked:(id)arg1;
- (void)markAsReadActionClicked:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (_Bool)verifyMandatotyParems:(id)arg1;
- (void)launchWithPayload:(id)arg1;
- (void)launchWithDictionary:(id)arg1;
- (void)launch:(id)arg1;
- (void)notifyPushPayloadIfNeeded:(id)arg1 data:(id)arg2;
- (void)performPushPayload:(id)arg1;
- (void)setIfMenuAttributesShouldBeDelayedAfterAppLaunchFromPush:(id)arg1;
- (_Bool)performOpenURL:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)handleShowActions:(id)arg1 popAllBeforePush:(_Bool)arg2;
- (void)handleCMSDeepLinkWithParams:(id)arg1 popAllBeforePush:(_Bool)arg2;

@end

