//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASTCastCRLFetcher, GTMSessionFetcherService, NSURLRequest;

@interface ASTCastSetupRequester : NSObject
{
    NSURLRequest *_request;
    GTMSessionFetcherService *_sessionFetcherService;
    ASTCastCRLFetcher *_castCRLFetcher;
}

- (void).cxx_destruct;
- (void)setSessionFetcherService:(id)arg1;
- (void)fetchCRLWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendRequest:(id)arg1 overHTTPS:(_Bool)arg2 retryEnabled:(_Bool)arg3 failFast:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendRequest:(id)arg1 overHTTPS:(_Bool)arg2 retryEnabled:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end

