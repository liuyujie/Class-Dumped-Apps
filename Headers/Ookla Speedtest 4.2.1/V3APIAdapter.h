//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VPNV3APIAdapter/VPNAPIAdapterProtocol-Protocol.h>
#import <VPNV3APIAdapter/VPNConfigurationDelegate-Protocol.h>

@class NSArray, NSDictionary, NSManagedObjectContext, NSMutableDictionary, NSString, VPNCoreDataManager, VPNLoadBalanceManager;

@interface V3APIAdapter : NSObject <VPNConfigurationDelegate, VPNAPIAdapterProtocol>
{
    _Bool _loggingIn;
    _Bool _updatingServers;
    NSManagedObjectContext *_defaultContext;
    VPNCoreDataManager *_dataManager;
    VPNLoadBalanceManager *_loadBalancer;
    NSArray *_requiredOptions;
    NSDictionary *_defaultOptions;
    NSString *_clientName;
    NSString *_clientVersion;
    NSString *_osVersion;
    NSMutableDictionary *_options;
    NSDictionary *_userDefaultMap;
}

@property(retain) NSDictionary *userDefaultMap; // @synthesize userDefaultMap=_userDefaultMap;
@property _Bool updatingServers; // @synthesize updatingServers=_updatingServers;
@property _Bool loggingIn; // @synthesize loggingIn=_loggingIn;
@property(retain) NSMutableDictionary *options; // @synthesize options=_options;
@property(readonly) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(readonly) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(readonly) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly) NSDictionary *defaultOptions; // @synthesize defaultOptions=_defaultOptions;
@property(readonly) NSArray *requiredOptions; // @synthesize requiredOptions=_requiredOptions;
@property(retain) VPNLoadBalanceManager *loadBalancer; // @synthesize loadBalancer=_loadBalancer;
@property(retain) VPNCoreDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) NSManagedObjectContext *defaultContext; // @synthesize defaultContext=_defaultContext;
- (void).cxx_destruct;
- (void)setKeychainItemsToUser:(id)arg1;
- (void)setKeychainItemsFromUser:(id)arg1;
- (void)sendEvent:(id)arg1 withAccessToken:(id)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;
- (void)getUsage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)createCountryDictionaryFromServers:(id)arg1;
- (void)removeDefaultForKey:(id)arg1;
- (void)syncDefault:(id)arg1 forKey:(id)arg2;
- (void)refreshVPNConfiguration:(id)arg1;
- (void)loadbalanceVPNConfiguration:(id)arg1;
- (id)initializeVPNConfiguration:(long long)arg1;
- (id)createPlugins;
- (id)getOption:(id)arg1;
- (id)findAllEntities:(id)arg1 withContext:(id)arg2;
- (void)executeServerCallback:(CDUnknownBlockType)arg1 withServers:(id)arg2 andError:(id)arg3;
- (void)executeLoginCallback:(CDUnknownBlockType)arg1 withUser:(id)arg2 andError:(id)arg3;
- (id)loadDataFromFile:(id)arg1 havingKey:(id)arg2 andError:(id *)arg3;
- (void)logout;
- (id)fetchAllServers;
- (id)fetchAllCountries;
- (id)fetchAllCities;
- (void)refreshCurrentLocation:(CDUnknownBlockType)arg1;
- (void)updateServerListForVPNConfiguration:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadInitialServerListForVPNConfiguration:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)refreshLoginWithVPNConfiguration:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loginWithVPNConfiguration:(id)arg1 username:(id)arg2 password:(id)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;
- (id)initWithOptions:(id)arg1;
- (id)refreshTokenServiceName;
- (id)accessTokenServiceName;
- (id)authPasswordServiceName;
- (id)passwordServiceName;
- (id)accessGroupName;
- (id)serviceName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

