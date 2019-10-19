//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GSDK_GTMSessionFetcherService, NSDictionary, NSOperationQueue, NSString, NSURL, RpcServiceApiaryTracing;

@interface GCPRpcService : NSObject
{
    NSURL *_rpcBaseUrl;
    NSString *_rpcApiPath;
    NSDictionary *_additionalHttpHeaders;
    GSDK_GTMSessionFetcherService *_fetcherService;
    RpcServiceApiaryTracing *_apiaryTracing;
    NSOperationQueue *_fetcherDelegateQueue;
    NSString *_apiKey;
}

+ (id)requestIdFromResponseId:(id)arg1;
+ (id)requestIdWithIndex:(unsigned long long)arg1;
+ (id)multipartContentTypeWithBoundary:(id)arg1;
@property(copy, nonatomic) NSString *apiKey; // @synthesize apiKey=_apiKey;
@property(retain, nonatomic) NSOperationQueue *fetcherDelegateQueue; // @synthesize fetcherDelegateQueue=_fetcherDelegateQueue;
@property(readonly, nonatomic) RpcServiceApiaryTracing *apiaryTracing; // @synthesize apiaryTracing=_apiaryTracing;
@property(readonly, nonatomic) GSDK_GTMSessionFetcherService *fetcherService; // @synthesize fetcherService=_fetcherService;
@property(retain, nonatomic) NSDictionary *additionalHttpHeaders; // @synthesize additionalHttpHeaders=_additionalHttpHeaders;
@property(retain, nonatomic) NSString *rpcApiPath; // @synthesize rpcApiPath=_rpcApiPath;
@property(retain, nonatomic) NSURL *rpcBaseUrl; // @synthesize rpcBaseUrl=_rpcBaseUrl;
- (void).cxx_destruct;
- (id)multipartPostDataForRpc:(id)arg1 forLogging:(_Bool)arg2;
- (id)pathForRpc:(id)arg1;
- (id)mutableUrlRequestWithRpc:(id)arg1;
- (id)mutableUrlRequestWithUrl:(id)arg1 additionalHTTPHeaders:(id)arg2;
- (id)start:(id)arg1;
- (id)requestWithRpc:(id)arg1;
- (void)prepareRpc:(id)arg1;
- (id)initWithFetcherService:(id)arg1;

@end
