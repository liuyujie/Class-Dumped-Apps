//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBLigerProtocol : NSObject
{
}

+ (void)callPushCallbacks:(const struct HTTPRequest *)arg1;
+ (void)callPushCallbacks:(const struct HTTPRequest *)arg1 observerHelper:(ObservableHelper_eeb51dca *)arg2;
+ (unique_ptr_b889f52c)addObserverToHelper:(const shared_ptr_1dbe9edf *)arg1 prefixes:(unordered_set_7cdfe647 *)arg2 executor:(struct Executor *)arg3 observerHelper:(ObservableHelper_eeb51dca *)arg4;
+ (unique_ptr_b889f52c)addObserver:(const shared_ptr_1dbe9edf *)arg1 prefixes:(unordered_set_7cdfe647 *)arg2 executor:(struct Executor *)arg3;
+ (void)verifyProxyState:(_Bool)arg1 pacFileCheckURL:(id)arg2;
+ (void)onNetworkChangeWithPreviousState:(id)arg1 withCurrentState:(id)arg2 withUnknownState:(id)arg3;
+ (_Bool)shouldLigerHandleUrlOnApp:(id)arg1;
+ (_Bool)isUnderTest;
+ (_Bool)canLigerHandleUrl:(id)arg1;
+ (void)setUserCertEnabled:(_Bool)arg1;
+ (_Bool)isFBLigerProtocolEnabled;
+ (void)initLigerWithConfig:(id)arg1;
+ (struct NetworkStatusMonitor *)getNetworkStatusMonitor;
+ (void)setNetworkStateProvider:(id)arg1;
+ (vector_e0c50086)getInflightRequestResponseInfos;
+ (id)getCircularLogLines;
+ (struct TraceEvent)traceEventForEventName:(id)arg1;
+ (void)markAdhocEventAsyncInCircularLog:(id)arg1;
+ (struct HTTPClientSettings *)settings;
+ (struct sockaddr_storage)getDNSAnswers:(id)arg1 withFamily:(unsigned char)arg2;
+ (_Bool)blockingGetProxySettingsFromPACFile:(id)arg1 pacFileCheckURL:(id)arg2 proxyHost:(id *)arg3 proxyPort:(id *)arg4;

@end

