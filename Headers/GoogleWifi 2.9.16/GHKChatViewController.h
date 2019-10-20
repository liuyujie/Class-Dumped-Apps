//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QTMCollectionViewController.h"

#import "GHKChatMessageContentViewDelegate-Protocol.h"
#import "GHKChatMessageInputViewDelegate-Protocol.h"
#import "GHKChatQueueContentViewDelegate-Protocol.h"
#import "GHKChatSessionManagerDelegate-Protocol.h"
#import "GHKSurveyContactFormWebViewControllerDelegate-Protocol.h"
#import "GHKTimedOutContentViewDelegate-Protocol.h"
#import "QTMCollectionViewModelDelegate-Protocol.h"
#import "SUPActivityIndicationViewDelegate-Protocol.h"

@class GHKChatErrorBarView, GHKChatMessageInputView, GHKChatQueueContentViewObject, GHKChatSessionData, GHKChatSessionManager, GHKConfig, GHKReceiverConfig, GHKSessionDataManager, GHKTimedOutContentViewObject, GHKURLOpener, GHKUserStates, MDCAppBar, NSMutableArray, NSString, NSTimer, SUPActivityIndicationView, SUPMetricsReporter, SUPSupportContentService, UIBarButtonItem;
@protocol GHKChatViewControllerDelegate;

@interface GHKChatViewController : QTMCollectionViewController <GHKChatMessageContentViewDelegate, GHKChatMessageInputViewDelegate, GHKChatQueueContentViewDelegate, GHKChatSessionManagerDelegate, GHKSurveyContactFormWebViewControllerDelegate, GHKTimedOutContentViewDelegate, QTMCollectionViewModelDelegate, SUPActivityIndicationViewDelegate>
{
    UIBarButtonItem *_backToAppButton;
    UIBarButtonItem *_endChatButton;
    double _keyboardHeight;
    _Bool _scrollViewDragging;
    double _scrollViewBeginDraggingContentOffsetY;
    NSTimer *_refreshTimestampsSignaler;
    NSTimer *_typingTimer;
    SUPActivityIndicationView *_activityIndicationView;
    _Bool _loadingSupportContent;
    _Bool _userEndedChat;
    double _scrollViewBottomOffsetAnchor;
    double _previousContentHeight;
    id <GHKChatViewControllerDelegate> _delegate;
    GHKConfig *_config;
    SUPSupportContentService *_contentService;
    SUPMetricsReporter *_metricsReporter;
    GHKReceiverConfig *_receiverConfig;
    GHKSessionDataManager *_sessionDataManager;
    GHKURLOpener *_URLOpener;
    GHKUserStates *_userStates;
    GHKChatSessionData *_chatSession;
    GHKChatSessionManager *_chatSessionManager;
    GHKChatMessageInputView *_chatMessageInputView;
    GHKChatQueueContentViewObject *_chatQueueObject;
    GHKTimedOutContentViewObject *_timedOutObject;
    GHKChatErrorBarView *_chatErrorBarView;
    NSMutableArray *_queuedMessageBundles;
    long long _currentView;
    long long _csatResult;
    MDCAppBar *_appBar;
}

+ (id)chatFooterWithMessage:(id)arg1;
+ (id)chatEndedFooter:(long long)arg1;
+ (id)objectionRequires;
@property(retain, nonatomic) MDCAppBar *appBar; // @synthesize appBar=_appBar;
@property(nonatomic) long long csatResult; // @synthesize csatResult=_csatResult;
@property(nonatomic) long long currentView; // @synthesize currentView=_currentView;
@property(retain, nonatomic) NSMutableArray *queuedMessageBundles; // @synthesize queuedMessageBundles=_queuedMessageBundles;
@property(retain, nonatomic) GHKChatErrorBarView *chatErrorBarView; // @synthesize chatErrorBarView=_chatErrorBarView;
@property(retain, nonatomic) GHKTimedOutContentViewObject *timedOutObject; // @synthesize timedOutObject=_timedOutObject;
@property(retain, nonatomic) GHKChatQueueContentViewObject *chatQueueObject; // @synthesize chatQueueObject=_chatQueueObject;
@property(retain, nonatomic) GHKChatMessageInputView *chatMessageInputView; // @synthesize chatMessageInputView=_chatMessageInputView;
@property(retain, nonatomic) GHKChatSessionManager *chatSessionManager; // @synthesize chatSessionManager=_chatSessionManager;
@property(retain, nonatomic) GHKChatSessionData *chatSession; // @synthesize chatSession=_chatSession;
@property(retain, nonatomic) GHKUserStates *userStates; // @synthesize userStates=_userStates;
@property(retain, nonatomic) GHKURLOpener *URLOpener; // @synthesize URLOpener=_URLOpener;
@property(retain, nonatomic) GHKSessionDataManager *sessionDataManager; // @synthesize sessionDataManager=_sessionDataManager;
@property(retain, nonatomic) GHKReceiverConfig *receiverConfig; // @synthesize receiverConfig=_receiverConfig;
@property(retain, nonatomic) SUPMetricsReporter *metricsReporter; // @synthesize metricsReporter=_metricsReporter;
@property(retain, nonatomic) SUPSupportContentService *contentService; // @synthesize contentService=_contentService;
@property(retain, nonatomic) GHKConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <GHKChatViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopTypingTimer;
- (void)restartTypingTimer;
- (void)typingTimerTicked;
- (void)statusBarOrientationChanged:(id)arg1;
- (void)clearLoadingSupportContentFlag;
- (double)bottomContentInset;
- (double)topContentInset;
- (void)displayMessageContentBottomAnimated:(_Bool)arg1;
- (void)removeChatEntryFromView;
- (void)dismissKeyboard;
- (void)setScrollViewContentInsets:(struct UIEdgeInsets)arg1;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWillBeShown:(id)arg1;
- (void)toggleBackToApp;
- (void)didTapEndChat;
- (void)pushSurveyWebViewController:(id)arg1;
- (void)pushWebViewController:(id)arg1;
- (void)removeRefreshTimestampsSignaler;
- (void)broadcastTimestampRefreshNotification;
- (void)announceNewMessages:(id)arg1;
- (void)displayMessagesInConversationFromQueue;
- (void)handleLinkURL:(id)arg1 fromURL:(id)arg2;
- (void)disableTakeSurveyButton;
- (void)setBackgroundColor:(id)arg1;
- (void)didTapCancelButton;
- (void)webViewQuickExit:(unsigned long long)arg1 exitStatus:(long long)arg2;
- (void)webViewControllerBackButtonTapped:(unsigned long long)arg1;
- (void)webViewSubmitButtonTapped;
- (void)webViewCancelDeepLinkNavigation;
- (void)webViewDeepLinkNavigateToURL:(id)arg1 oldURL:(id)arg2;
- (void)quickExitToApp;
- (void)setFooterContent:(id)arg1 scrollToFooter:(_Bool)arg2;
- (void)displayEndMessageInConversationView:(long long)arg1;
- (void)sessionEnded;
- (void)displayMessagesInConversationView:(id)arg1;
- (void)displayConversationView:(id)arg1;
- (void)displayTimedOutView;
- (void)displayQueueViewForPosition:(long long)arg1;
- (void)displayAgentTypingStatus:(int)arg1;
- (void)handlePrefetchRenderedContentForSurveyURL:(id)arg1;
- (void)handleConnectionSuccess;
- (void)handleConnectionError:(id)arg1;
- (void)chatQueueDidTapBackToApp;
- (void)didTapGHKTimedOutRetryChatButton;
- (void)messageInputTextDidChange;
- (void)didRequestSendChatMessage:(id)arg1;
- (void)messageInputViewHeightChanged:(double)arg1 oldHeight:(double)arg2;
- (void)didTapEmbeddedLink:(id)arg1;
- (void)didTapSurveyButton:(id)arg1 surveyURL:(id)arg2;
- (void)didTapToResendMessage:(id)arg1;
- (long long)timestampOffsetMillis;
- (void)captureScrollOffset;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

