//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveDoubleInteractionControlProtocol-Protocol.h"
#import "HTSLiveMessageSubscriber-Protocol.h"

@class HTSLiveDoubleInteractionMessageHandler, HTSLiveInteractiveAPIV2, IESLiveCountTimer, IESLiveUserModel, LiveRoomModel, NSData, NSDictionary, NSNumber, NSString, RACCompoundDisposable;
@protocol HTSLiveDetailRouter, HTSLiveDoubleInteractionContext, HTSLiveInteractionEntranceProvider, HTSLiveMessageDispatchProvider, IESActionDispatcher, IESLiveEnvironment, IESLiveMonitor, IESLiveRealStreamingProvider, IESLiveSettings, IESLiveTracker, IESLiveUserService;

@interface HTSLiveAnchorDoubleInteractionStore : NSObject <HTSLiveDoubleInteractionControlProtocol, HTSLiveMessageSubscriber>
{
    _Bool _showReceiveVC;
    _Bool _useDecoration;
    _Bool _interactiveModeEnabled;
    _Bool _onJoinChannelSuccess;
    _Bool _onInvitationCanceled;
    _Bool _onInvitationRejected;
    _Bool _offScreenNotifyJoined;
    _Bool _offScreenBannerShown;
    _Bool _cancelAutoMatch;
    _Bool _disableOppositeMic;
    LiveRoomModel *_roomModel;
    id <HTSLiveDoubleInteractionContext> _contextEntity;
    HTSLiveInteractiveAPIV2 *_interactiveAPI;
    NSString *_toastString;
    IESLiveUserModel *_oppositeUserModel;
    unsigned long long _role;
    NSString *_accessKey;
    NSString *_rtcAppID;
    NSData *_rtcAppSign;
    NSNumber *_linkmicID;
    NSDictionary *_rtcExtraInfo;
    HTSLiveDoubleInteractionMessageHandler *_messageHandler;
    RACCompoundDisposable *_disposable;
    id <IESActionDispatcher> _dispatcher;
    IESLiveCountTimer *_timeoutTimer;
    id <IESLiveMonitor> _monitor;
    id <HTSLiveInteractionEntranceProvider> _entranceProvider;
    id <IESLiveTracker> _tracker;
    id <IESLiveUserService> _userService;
    id <HTSLiveMessageDispatchProvider> _messageDispatcher;
    id <IESLiveEnvironment> _liveEnvironment;
    id <IESLiveSettings> _settings;
    id <HTSLiveDetailRouter> _detailRouter;
    id <IESLiveRealStreamingProvider> _streamProvider;
}

@property(retain, nonatomic) id <IESLiveRealStreamingProvider> streamProvider; // @synthesize streamProvider=_streamProvider;
@property(retain, nonatomic) id <HTSLiveDetailRouter> detailRouter; // @synthesize detailRouter=_detailRouter;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveEnvironment> liveEnvironment; // @synthesize liveEnvironment=_liveEnvironment;
@property(retain, nonatomic) id <HTSLiveMessageDispatchProvider> messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <HTSLiveInteractionEntranceProvider> entranceProvider; // @synthesize entranceProvider=_entranceProvider;
@property(retain, nonatomic) id <IESLiveMonitor> monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) IESLiveCountTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) id <IESActionDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) RACCompoundDisposable *disposable; // @synthesize disposable=_disposable;
@property(retain, nonatomic) HTSLiveDoubleInteractionMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
@property(retain, nonatomic) NSDictionary *rtcExtraInfo; // @synthesize rtcExtraInfo=_rtcExtraInfo;
@property(retain, nonatomic) NSNumber *linkmicID; // @synthesize linkmicID=_linkmicID;
@property(copy, nonatomic) NSData *rtcAppSign; // @synthesize rtcAppSign=_rtcAppSign;
@property(copy, nonatomic) NSString *rtcAppID; // @synthesize rtcAppID=_rtcAppID;
@property(copy, nonatomic) NSString *accessKey; // @synthesize accessKey=_accessKey;
@property(nonatomic) unsigned long long role; // @synthesize role=_role;
@property(nonatomic) _Bool disableOppositeMic; // @synthesize disableOppositeMic=_disableOppositeMic;
@property(nonatomic) _Bool cancelAutoMatch; // @synthesize cancelAutoMatch=_cancelAutoMatch;
@property(nonatomic) _Bool offScreenBannerShown; // @synthesize offScreenBannerShown=_offScreenBannerShown;
@property(nonatomic) _Bool offScreenNotifyJoined; // @synthesize offScreenNotifyJoined=_offScreenNotifyJoined;
@property(nonatomic) _Bool onInvitationRejected; // @synthesize onInvitationRejected=_onInvitationRejected;
@property(nonatomic) _Bool onInvitationCanceled; // @synthesize onInvitationCanceled=_onInvitationCanceled;
@property(retain, nonatomic) IESLiveUserModel *oppositeUserModel; // @synthesize oppositeUserModel=_oppositeUserModel;
@property(copy, nonatomic) NSString *toastString; // @synthesize toastString=_toastString;
@property(nonatomic) _Bool onJoinChannelSuccess; // @synthesize onJoinChannelSuccess=_onJoinChannelSuccess;
@property(nonatomic) _Bool interactiveModeEnabled; // @synthesize interactiveModeEnabled=_interactiveModeEnabled;
@property(nonatomic) _Bool useDecoration; // @synthesize useDecoration=_useDecoration;
@property(nonatomic) _Bool showReceiveVC; // @synthesize showReceiveVC=_showReceiveVC;
@property(retain, nonatomic) HTSLiveInteractiveAPIV2 *interactiveAPI; // @synthesize interactiveAPI=_interactiveAPI;
@property(retain, nonatomic) id <HTSLiveDoubleInteractionContext> contextEntity; // @synthesize contextEntity=_contextEntity;
@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
- (void).cxx_destruct;
- (void)monitorEventId:(id)arg1 extra:(id)arg2;
- (void)monitorConnectionFail:(id)arg1;
- (void)updateOppositeUserInfo;
- (void)trackWithEvent:(id)arg1 extra:(id)arg2;
- (void)trackWithEvent:(id)arg1;
- (void)closeInteraction;
- (void)cancelTimeoutTimer;
- (void)startTimeoutTimer;
- (void)joinChannel;
- (void)stopLive;
- (void)onStopedByServer;
- (void)onInteractiveModeStoppedWith:(id)arg1;
- (void)onPKInvitationCancelled;
- (void)onPKOffScreenNotifyJoinedWith:(id)arg1;
- (void)onPKInvitationResponsedWith:(id)arg1;
- (void)onPKReceivedInvitationWith:(id)arg1;
- (void)messageReceived:(id)arg1;
- (void)onClickCloseMic;
- (void)onOffScreenBannerShowStart;
- (void)stopInteractiveMode;
- (void)receiveInvitation:(id)arg1;
- (void)replyInvitationWithAgree:(_Bool)arg1;
- (void)rejectPKInvitation:(unsigned long long)arg1;
- (void)setup;
- (id)initWithRoom:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

