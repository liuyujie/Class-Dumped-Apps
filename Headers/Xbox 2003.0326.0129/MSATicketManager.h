//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSAConfigManager, MSADeviceIdentityManager, MSAEnvironmentInternal, MSAStorageCache, MSAStsRequestFactory, MSAThrottlingManager, MSATokenCache, MSAUserKeyManager;

@interface MSATicketManager : NSObject
{
    MSAEnvironmentInternal *_environment;
    MSAConfigManager *_configManager;
    MSADeviceIdentityManager *_deviceManager;
    MSAStsRequestFactory *_requestFactory;
    MSAStorageCache *_storage;
    MSATokenCache *_tokenCache;
    MSAThrottlingManager *_throttlingManager;
    MSAUserKeyManager *_keyManager;
}

- (void).cxx_destruct;
- (void)setKeyManager:(id)arg1;
- (id)keyManager;
- (void)setThrottlingManager:(id)arg1;
- (id)throttlingManager;
- (void)setTokenCache:(id)arg1;
- (id)tokenCache;
- (void)setStorage:(id)arg1;
- (id)storage;
- (void)setRequestFactory:(id)arg1;
- (id)requestFactory;
- (void)setDeviceManager:(id)arg1;
- (id)deviceManager;
- (void)setConfigManager:(id)arg1;
- (id)configManager;
- (void)updateAccount:(id)arg1 response:(id)arg2;
- (_Bool)shouldRetryServiceRequest:(id)arg1;
- (_Bool)sendServiceRequestWithOptions:(id)arg1 forceDeviceAuth:(_Bool)arg2 response:(out id *)arg3 error:(out id *)arg4;
- (_Bool)performServiceRequestWithOptions:(id)arg1 response:(out id *)arg2 error:(out id *)arg3;
- (_Bool)getTicketNoCacheWithOptions:(id)arg1 ticket:(out id *)arg2 error:(out id *)arg3;
- (_Bool)getTicketWithOptions:(id)arg1 ticket:(out id *)arg2 error:(out id *)arg3;
- (id)initForEnvironment:(id)arg1;
- (id)init;

@end

