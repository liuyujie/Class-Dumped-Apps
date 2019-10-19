//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCChatMainViewControllerStateDelegate-Protocol.h"
#import "SCInvalidFriendAlertViewDelegate-Protocol.h"
#import "SCNewGroupViewControllerDelegate-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCArroyoConversationIdsManager, SCChatMainViewController, SCInvalidFriendAlertView, SCLazy, SCNewGroupViewController, SCSendToDocObjectRecipientDataSource, SCSendToNewGroupDataRepository, SCUserSession, UITapGestureRecognizer;
@protocol NavigationDelegate, SCActionHandling, SwipeView;

@interface SCAddToGroupAndChatViewController : UIViewController <SCChatMainViewControllerStateDelegate, UIGestureRecognizerDelegate, SCTraceEnabled, SCNewGroupViewControllerDelegate, SCInvalidFriendAlertViewDelegate, SCPageNameLogging>
{
    SCNewGroupViewController *_newGroupVC;
    SCChatMainViewController *_chatVC;
    SCUserSession *_userSession;
    unsigned long long _creationType;
    _Bool _manuallyTransitioningToFeed;
    UITapGestureRecognizer *_recipientsBarRecognizer;
    UIViewController<SwipeView> *_visibleVC;
    long long _previousStatusBarStyle;
    SCInvalidFriendAlertView *_invalidFriendAlertView;
    SCSendToDocObjectRecipientDataSource *_docObjectRecipientDataSource;
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_snapchattersDataMutator;
    SCLazy *_groupSnapchatterRepository;
    SCLazy *_userInfoProvider;
    SCLazy *_groupsDataCreator;
    SCLazy *_groupsDataMutator;
    SCLazy *_snapchattersDataTracker;
    SCLazy *_friendScoreCoordinator;
    SCLazy *_viewedIncomingFriendsTracker;
    id <SCActionHandling> _openMiniProfileActionHandler;
    SCSendToNewGroupDataRepository *_newGroupDataRepository;
    SCLazy *_arroyoGroupsDataCreator;
    SCArroyoConversationIdsManager *_arroyoConversationsIdManager;
    SCLazy *_arroyoOneOnOneConversationsManager;
    id <NavigationDelegate> _navigationDelegate;
}

@property(nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
- (void).cxx_destruct;
- (unsigned long long)policyForNotification:(id)arg1;
- (unsigned long long)titleTypeForInvalidFriendAlertView;
- (void)showKeyboardIfNecessary:(_Bool)arg1;
- (void)_showInvalidFriendAlertWithNames:(id)arg1;
- (id)_invalidFriendsDisplayNamesInRecipients:(id)arg1;
- (void)didPressConfirmationButtonWithGroupId:(id)arg1 selectionResult:(id)arg2 viewController:(id)arg3 headerText:(id)arg4;
- (void)didPressArroyoConfirmationButton:(id)arg1 viewController:(id)arg2 headerText:(id)arg3;
- (void)didPressConfirmationButtonWithSelectionResult:(id)arg1 viewController:(id)arg2 headerText:(id)arg3 messageText:(id)arg4 deepLinkURLPath:(id)arg5 creationType:(unsigned long long)arg6;
- (void)_removeChildVC;
- (void)rightButtonPressed;
- (void)didSwipeOut;
- (void)didBecomeFullChat;
- (id)rightButtonImage;
- (id)recipientBar;
- (_Bool)presentedModally;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_uniqueUserIdsFromSelectionResult:(id)arg1;
- (void)_confirmationButtonPressed:(id)arg1 groupName:(id)arg2 message:(id)arg3 deepLinkURL:(id)arg4;
- (void)_confirmationButtonPressedWithFriends:(id)arg1 groupName:(id)arg2 message:(id)arg3 deepLinkURL:(id)arg4;
- (void)_didMoveToVC:(id)arg1;
- (void)_setupRecipientBarInView;
- (void)_didTapRecipientsBar;
- (void)showChatVC;
- (void)_navigateToChatViewWithChatIdentifier:(id)arg1 deepLinkURL:(id)arg2 didSendMessage:(_Bool)arg3;
- (void)_updateGroupNameIfNecessaryForGroup:(id)arg1 groupName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_sendChatToRecipientId:(id)arg1 message:(id)arg2 isGroup:(_Bool)arg3;
- (void)_createGroupIfNecessaryForGroup:(id)arg1 recipients:(id)arg2 groupName:(id)arg3 groupsDataCreator:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_didPressConfirmationButtonForRecipients:(id)arg1 groupName:(id)arg2 message:(id)arg3 deepLinkURL:(id)arg4 groupsDataCreator:(id)arg5;
- (void)_didPressArroyoConfirmationButton:(id)arg1 groupName:(id)arg2;
- (void)navigateToChatViewWithGroupId:(id)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 viewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleOpenedFromNotification;
- (id)pageViewName;
- (void)_willEnterForeground;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_initAddToGroupVC;
@property(readonly, copy) NSString *description;
- (void)loadView;
- (void)_setupStatusBar;
- (void)performPresentationAnimation;
- (id)initWithUserSession:(id)arg1 creationType:(unsigned long long)arg2 chatVC:(id)arg3 groupsDataCreator:(id)arg4 groupsDataMutator:(id)arg5 docObjectRecipientDataSource:(id)arg6 snapchattersDataFetcher:(id)arg7 snapchattersDataMutator:(id)arg8 snapchattersDataTracker:(id)arg9 groupSnapchatterRepository:(id)arg10 userInfoProvider:(id)arg11 friendScoreCoordinator:(id)arg12 viewedIncomingFriendsTracker:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
