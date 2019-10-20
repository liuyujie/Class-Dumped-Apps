//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface Cronet : NSObject
{
}

+ (void)preventStrippingCronetBidirectionalStream;
+ (void)setHostResolverRulesForTesting:(id)arg1;
+ (void)enableTestCertVerifierForTesting;
+ (id)getGlobalMetricsDeltas;
+ (struct stream_engine *)getGlobalEngine;
+ (id)getUserAgent;
+ (void)stopNetLog;
+ (_Bool)startNetLogToFile:(id)arg1 logBytes:(_Bool)arg2;
+ (id)getNetLogPathForFile:(id)arg1;
+ (void)installIntoSessionConfiguration:(id)arg1;
+ (void)unregisterHttpProtocolHandler;
+ (void)registerHttpProtocolHandler;
+ (void)start;
+ (void)startInternal;
+ (void)setRequestFilterBlock:(CDUnknownBlockType)arg1;
+ (void)setHttpCacheType:(int)arg1;
+ (void)setSslKeyLogFileName:(id)arg1;
+ (void)setUserAgent:(id)arg1 partial:(_Bool)arg2;
+ (void)addQuicHint:(id)arg1 port:(int)arg2 altPort:(int)arg3;
+ (void)setQuicEnabled:(_Bool)arg1;
+ (void)setHttp2Enabled:(_Bool)arg1;
+ (void)checkNotStarted;
+ (id)getAcceptLanguages;
+ (void)configureCronetEnvironmentForTesting:(struct CronetEnvironment *)arg1;

@end
