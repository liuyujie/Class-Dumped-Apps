//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FCDRPCService.h"

#import "GRWSGrowthApiService-Protocol.h"

@class FCDRPC, FCDRPCContext, NSArray, NSString;
@protocol FCDRPCAuthorizer, FCDRPCManager, FCDTransport;

@interface GRWSGrowthApiService : FCDRPCService <GRWSGrowthApiService>
{
    FCDRPC *_rpcs[8];
}

+ (id)oauthScopesForRPCID:(id)arg1;
+ (id)serviceHostNames;
+ (id)servicePackage;
+ (id)serviceName;
- (void).cxx_destruct;
@property(readonly, nonatomic) FCDRPC *getVerifiedPhoneNumbersRPC;
@property(readonly, nonatomic) FCDRPC *sendEmailRPC;
@property(readonly, nonatomic) FCDRPC *sendSmsRPC;
@property(readonly, nonatomic) FCDRPC *getExperimentationConfigRPC;
@property(readonly, nonatomic) FCDRPC *reportImpressionRPC;
@property(readonly, nonatomic) FCDRPC *getPromosRPC;
@property(readonly, nonatomic) FCDRPC *getRecommendedAppsRPC;
@property(readonly, nonatomic) FCDRPC *getAppsListRPC;
- (id)initWithRPCManager:(id)arg1 authorizer:(id)arg2 interceptorsProvider:(id)arg3 transport:(id)arg4 context:(id)arg5;

// Remaining properties
@property(readonly, nonatomic) id <FCDRPCAuthorizer> authorizer;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *interceptors;
@property(readonly, nonatomic) FCDRPCContext *rpcContext;
@property(readonly, nonatomic) id <FCDRPCManager> rpcManager;
@property(readonly) Class superclass;
@property(readonly, nonatomic) id <FCDTransport> transport;

@end

