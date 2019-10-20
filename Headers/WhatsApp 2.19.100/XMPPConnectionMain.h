//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/XMPPConnection.h>

@class WAFieldStatsEventChatConnectionAttribution, WAMessageHandler, XMPPRequestSetProfilePicture;

@interface XMPPConnectionMain : XMPPConnection
{
    WAFieldStatsEventChatConnectionAttribution *_chatConnectionAttribution;
    XMPPRequestSetProfilePicture *_pendingSetProfilePictureRequest;
    _Bool _hasInFlightSetProfilePictureRequest;
    WAMessageHandler *_incomingMessageHandler;
}

+ (id)stringFromSpamReportOrigin:(unsigned long long)arg1;
@property(readonly) WAMessageHandler *incomingMessageHandler; // @synthesize incomingMessageHandler=_incomingMessageHandler;
- (void).cxx_destruct;
- (void)reallyRegisterHandlersForPersistentRequestManager:(id)arg1;
- (void)processIncomingCustomStanza:(id)arg1;
- (void)processIncomingCallStanza:(id)arg1;
- (void)delayedReceiptsUpdate;
- (void)processIncomingAck:(id)arg1;
- (void)processIncomingChatState:(id)arg1;
- (void)processIncomingPresence:(id)arg1;
- (void)processIncomingMessageStanza:(id)arg1;
- (void)processIncomingLocationIQ:(id)arg1;
- (void)processIncomingIQ:(id)arg1;
- (void)handleUserEnabledLocationSharingInChat:(id)arg1 iq:(id)arg2;
- (void)handleStopLocationReportingIQ:(id)arg1;
- (void)startLocationReportingWithChatJID:(id)arg1 iq:(id)arg2 duration:(int)arg3;
- (void)performOnOfflineComplete;
- (void)performOnStreamOpen;
- (void)sendCallReceiptOrAck:(id)arg1;
- (void)sendCallStanza:(id)arg1;
- (void)endCallStanzaTimeout:(id)arg1;
- (void)startCallStanzaTimeout:(id)arg1;
- (_Bool)sendServerErrorReceiptForMessage:(id)arg1;
- (void)sendReadReceiptsForMessagesIfNeeded:(id)arg1;
- (void)sendPlayedReceiptForMessage:(id)arg1;
- (void)sendAckForMessageStanza:(id)arg1 withErrorCode:(long long)arg2;
- (void)sendDeliveryReceipts:(CDUnknownBlockType)arg1;
- (void)sendDeliveryReceiptsForMessageIDs:(id)arg1;
- (void)sendDeliveryReceiptsForMessageStanzas:(id)arg1;
- (void)resendUnsentCallStanzas;
- (void)respondWithNotificationToServerErrorReceiptForMessage:(id)arg1 toParticipant:(id)arg2;
- (void)serializeAndFlush:(CDUnknownBlockType)arg1;
- (void)serialize:(CDUnknownBlockType)arg1;
- (void)processMessageStatusChangeRequests:(id)arg1;
- (void)cleanDirtyBits:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reportVoipPushDelay:(double)arg1;
- (void)sendGlobalPushConfig:(id)arg1 customSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetPresenceStateOnStreamClose;
- (void)setPresenceInactiveForChat:(id)arg1;
- (void)sendChangeAuthPublicKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendRecoveryToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)queryABPropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)queryServerPropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestBroadcastListsWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteBroadcastListFromServer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unsubscribeFromLocationUpdatesFromChatJID:(id)arg1 webClientRequestID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)subscribeToLocationUpdatesFromChatJID:(id)arg1 reportParticipants:(_Bool)arg2 includeMessageInParticipantInfo:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)stopLocationSharingWithContact:(id)arg1 sequenceNumber:(long long)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)stopLocationSharingWithJID:(id)arg1 webClientRequestID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reportLocation:(id)arg1;
- (void)revokeGroupAddInvitationsForGroupWithJID:(id)arg1 participantJIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)acceptGroupAddInvitationForGroupWithJID:(id)arg1 addRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getProfilePicture2ForJID:(id)arg1 withGroupAddRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getProfilePicture2ForJID:(id)arg1 withInviteCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getProfilePictureForJID:(id)arg1 withGroupAddRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getProfilePictureForJID:(id)arg1 withInviteCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)joinGroupUsingInviteCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestInfoForGroupWithInviteCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)regenerateInviteCodeForGroupWithJID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestInviteCodeForGroupWithJID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestParticipatingGroupsWithRequestType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteGroupWithJID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)leaveGroupWithJID:(id)arg1 webClientRequestID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestInfoForGroupWithJID:(id)arg1 requestType:(unsigned long long)arg2 addRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateAdminsInGroupWithJID:(id)arg1 promoteJIDs:(id)arg2 demoteJIDs:(id)arg3 webClientRequestID:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)addParticipants:(id)arg1 toGroupWithJID:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeParticipants:(id)arg1 fromGroupWithJID:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setFrequentlyForwardedRestricted:(_Bool)arg1 forGroupWithJID:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setAnnouncementOnly:(_Bool)arg1 forGroupWithJID:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setLocked:(_Bool)arg1 forGroupWithJID:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setDescription:(id)arg1 forGroupWithJID:(id)arg2 descriptionID:(id)arg3 previousID:(id)arg4 webClientRequestID:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)setSubject:(id)arg1 forGroupWithJID:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)createGroupWithSubject:(id)arg1 description:(id)arg2 descriptionID:(id)arg3 participantJIDs:(id)arg4 key:(id)arg5 announcementOnly:(_Bool)arg6 locked:(_Bool)arg7 frequentlyForwardedRestricted:(_Bool)arg8 webClientRequestID:(id)arg9 completion:(CDUnknownBlockType)arg10;
- (void)getProfilePicture2ForJID:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3 retryOnNetworkFailure:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)getProfilePictureForJID:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3 retryOnNetworkFailure:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setProfilePictureForJID:(id)arg1 pictureData:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getStatusForJIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setStatus:(id)arg1 fromWebClientRequestID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setPrivacySettingCategory:(id)arg1 value:(id)arg2 addedJIDs:(id)arg3 removedJIDs:(id)arg4 hash:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)queryPrivacySettingsWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeTwoFactorAuthenticationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)checkIfUserHasTwoFactorAuthenticationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setTwoFactorAuthenticationCode:(id)arg1 email:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)changeNumberWithUsername:(id)arg1 notify:(_Bool)arg2 notifyJIDs:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)normalizePhoneNumber:(id)arg1 countryCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteAccountWithFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reportSpamCall:(id)arg1 calleeJID:(id)arg2 callerJID:(id)arg3 creatorJID:(id)arg4 isVideo:(_Bool)arg5 isGroupCall:(_Bool)arg6 durationInMilliseconds:(int)arg7 terminatorJID:(id)arg8 terminationReason:(id)arg9;
- (void)reportSpamJID:(id)arg1 origin:(unsigned long long)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)reportSpamMessages:(id)arg1 inChatSession:(id)arg2 origin:(unsigned long long)arg3 webClientRequestID:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendBlockedContactsList:(id)arg1 webClientRequestID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getBlockedContactsListWithCompletion:(CDUnknownBlockType)arg1;
- (id)chatConnectionAttribution;
- (void)setConnectionAttribution:(id)arg1;
- (void)unsetBackgroundMaxConnectionAttemptOverrideWithKey:(id)arg1;
- (void)setBackgroundMaxConnectionAttemptOverrideWithKey:(id)arg1;
- (id)initWithNetworkUsageManager:(id)arg1;
- (void)requestStatusAdPolicyWithPolicyID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestStatusAdsWithTotalAds:(unsigned long long)arg1 limited:(_Bool)arg2 idfa:(id)arg3 fbid:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)requestStatusAdsWithTotalAds:(unsigned long long)arg1 limited:(_Bool)arg2 idfa:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
