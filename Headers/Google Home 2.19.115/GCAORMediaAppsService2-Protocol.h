//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCAORGetLinkableApplicationsRequest, GCAORRedeemFreeTrialRequest, GCAORSetPreferredApplicationsRequest, GCAORUnlinkThirdPartyAccountRequest, GRPCCallOptions, GRPCUnaryProtoCall;
@protocol GRPCProtoResponseHandler;

@protocol GCAORMediaAppsService2 <NSObject>
- (GRPCUnaryProtoCall *)redeemFreeTrialWithMessage:(GCAORRedeemFreeTrialRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)unlinkThirdPartyAccountWithMessage:(GCAORUnlinkThirdPartyAccountRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)setPreferredApplicationsWithMessage:(GCAORSetPreferredApplicationsRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)getLinkableApplicationsWithMessage:(GCAORGetLinkableApplicationsRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
@end

