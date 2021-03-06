//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XBXIWebSocketDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol XBXITokenProvider, XBXIWebSocket, XBXSLSRealTimeActivitySessionDelegate;

@interface XBXSLSRealTimeActivitySession : NSObject <XBXIWebSocketDelegate>
{
    unsigned long long _sessionState;
    Class _webSocketClass;
    id <XBXITokenProvider> _tokenProvider;
    NSMutableArray *_resourceIds;
    NSString *_authHeader;
    id <XBXIWebSocket> _webSocket;
    NSMutableDictionary *_pendingSubscriptions;
    NSMutableDictionary *_activeSubscriptions;
    id <XBXSLSRealTimeActivitySessionDelegate> _delegate;
}

@property(nonatomic) __weak id <XBXSLSRealTimeActivitySessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *activeSubscriptions; // @synthesize activeSubscriptions=_activeSubscriptions;
@property(retain, nonatomic) NSMutableDictionary *pendingSubscriptions; // @synthesize pendingSubscriptions=_pendingSubscriptions;
@property(retain, nonatomic) id <XBXIWebSocket> webSocket; // @synthesize webSocket=_webSocket;
@property(copy, nonatomic) NSString *authHeader; // @synthesize authHeader=_authHeader;
@property(retain, nonatomic) NSMutableArray *resourceIds; // @synthesize resourceIds=_resourceIds;
@property(retain, nonatomic) id <XBXITokenProvider> tokenProvider; // @synthesize tokenProvider=_tokenProvider;
@property(retain, nonatomic) Class webSocketClass; // @synthesize webSocketClass=_webSocketClass;
@property(nonatomic) unsigned long long sessionState; // @synthesize sessionState=_sessionState;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onXTokenSuccessNotificationHandler:(id)arg1;
- (void)onXTokenFailureNotificationHandler:(id)arg1;
- (void)closeWebSocket;
- (id)createNewWebSocket;
- (void)handleServerResponse:(id)arg1;
- (void)handleUnSubscribeResponse:(id)arg1;
- (void)handleSubscribeResponse:(id)arg1;
- (id)parseResponseMessage:(id)arg1;
- (unsigned long long)sendRTACommand:(unsigned long long)arg1 data:(id)arg2;
- (void)subscribeWithResourceId:(id)arg1;
- (void)webSocket:(id)arg1 didFailWithError:(id)arg2;
- (void)webSocket:(id)arg1 didReceiveMessage:(id)arg2;
- (void)webSocketDidClose:(id)arg1 withError:(id)arg2;
- (void)webSocketDidOpen:(id)arg1;
- (void)unsubscribe:(id)arg1;
- (void)close;
- (void)open;
- (id)initWithWebSocketClass:(Class)arg1 subscribeWithResourceIds:(id)arg2 delegate:(id)arg3 tokenProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

