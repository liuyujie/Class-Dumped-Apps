//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/NSObject-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, WAActorJIDWrapper, WAChatJID, WAJID, WAMessageID, WAUserJID, XMPPCallAckStanza, XMPPCallStanza, XMPPConnection, XMPPMessageStanza, XMPPMessageStatusChangeRequest, XMPPReceiptStanza, XMPPStanzaElement;
@protocol WAChatWithActivityJID, WAServerDate;

@protocol XMPPConnectionDelegate <NSObject>
- (void)xmppConnection:(XMPPConnection *)arg1 didReceiveOfflineReceiptWithStanzas:(NSArray *)arg2 fromJID:(WAJID *)arg3 participantJID:(WAUserJID *)arg4 completion:(void (^)(void))arg5;
- (void)xmppConnection:(XMPPConnection *)arg1 didReceiveRetryReceiptForMessageID:(WAMessageID *)arg2 fromActorJIDWrapper:(WAActorJIDWrapper *)arg3 edit:(long long)arg4 registrationId:(NSNumber *)arg5 retryCount:(unsigned int)arg6;
- (void)xmppConnection:(XMPPConnection *)arg1 didReceiveServerErrorForOutgoingMessageWithStanzaID:(NSString *)arg2 fromJID:(WAJID *)arg3 participantJID:(WAUserJID *)arg4 encryptedReceipt:(XMPPStanzaElement *)arg5;
- (void)xmppConnection:(XMPPConnection *)arg1 didReceiveServerErrorAckForIncomingMessageWithStanzaID:(NSString *)arg2 fromJID:(WAJID *)arg3 participantJID:(WAUserJID *)arg4 edit:(long long)arg5;
- (void)xmppConnection:(XMPPConnection *)arg1 didReceiveCallRekeyReceipt:(XMPPReceiptStanza *)arg2;
- (void)xmppConnection:(XMPPConnection *)arg1 didReceiveCallOfferReceipt:(XMPPReceiptStanza *)arg2;
- (void)xmppConnection:(XMPPConnection *)arg1 didReceiveCallAck:(XMPPCallAckStanza *)arg2;
- (void)xmppConnection:(XMPPConnection *)arg1 didReceiveIncomingCallStanza:(XMPPCallStanza *)arg2;
- (void)xmppConnectionDidReceiveOfflineMarker:(XMPPConnection *)arg1;
- (void)xmppConnection:(XMPPConnection *)arg1 callStanzaDidTimeOut:(XMPPCallStanza *)arg2;
- (void)xmppConnectionStopLocationSharing:(XMPPConnection *)arg1;
- (_Bool)xmppConnection:(XMPPConnection *)arg1 startLocationSharingForJID:(WAChatJID *)arg2 duration:(int)arg3;
- (void)xmppConnection:(XMPPConnection *)arg1 willHandleMessageStanza:(XMPPMessageStanza *)arg2;
- (void)xmppConnection:(XMPPConnection *)arg1 didDiscardMessageStanza:(XMPPMessageStanza *)arg2;
- (_Bool)xmppConnection:(XMPPConnection *)arg1 didReceiveMessages:(NSArray *)arg2 error:(out id *)arg3;
- (void)xmppConnectionDidFinishProcessingOfflineMessages:(XMPPConnection *)arg1;
- (void)xmppConnection:(XMPPConnection *)arg1 serverTimeChanged:(NSDate<WAServerDate> *)arg2 shift:(double)arg3;
- (void)xmppConnection:(XMPPConnection *)arg1 chatStateChanged:(unsigned long long)arg2 forJID:(WAChatJID<WAChatWithActivityJID> *)arg3 participantJID:(WAUserJID *)arg4;
- (void)xmppConnection:(XMPPConnection *)arg1 presenceChanged:(unsigned long long)arg2 forJID:(WAChatJID<WAChatWithActivityJID> *)arg3;
- (void)xmppConnection:(XMPPConnection *)arg1 presenceChanged:(unsigned long long)arg2;
- (void)xmppConnection:(XMPPConnection *)arg1 didRequestIncomingMessageStatusChanges:(NSArray *)arg2;
- (void)xmppConnection:(XMPPConnection *)arg1 didRequestOutgoingMessageStatusChangeWithRequest:(XMPPMessageStatusChangeRequest *)arg2 completionBlock:(void (^)(void))arg3;
- (unsigned long long)xmppConnection:(XMPPConnection *)arg1 statusChanged:(int)arg2 forOutgoingMessagesWithStanzas:(NSArray *)arg3 chatJID:(WAChatJID *)arg4 actorJIDWrapper:(WAActorJIDWrapper *)arg5 userData:(NSDictionary *)arg6;
- (void)xmppConnectionDidDisconnect:(XMPPConnection *)arg1;
- (void)xmppConnectionDidNotAuthenticate:(XMPPConnection *)arg1 dataCenter:(NSString *)arg2 failureCode:(long long)arg3 lockDuration:(double)arg4 retryAfter:(double)arg5 tempBanReasonCode:(long long)arg6 tempBanURL:(NSString *)arg7 tempBanMessage:(NSString *)arg8;
- (void)xmppConnectionDidAuthenticate:(XMPPConnection *)arg1 dataCenter:(NSString *)arg2;
- (void)xmppConnectionDidConnect:(XMPPConnection *)arg1;
- (void)xmppConnection:(XMPPConnection *)arg1 stateChanged:(unsigned long long)arg2;
@end

