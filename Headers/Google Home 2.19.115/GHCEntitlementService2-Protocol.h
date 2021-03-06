//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GHCAssociateEntitlementRecordRequest, GHCConciergeReadyStatusRequest, GHCEnrollInConciergeOfferRequest, GHCGetCameraFeaturesRequest, GHCGetCameraFeaturesViaHttpPostRequest, GHCGetEduScreenRenderingDetailsRequest, GHCListEntitlementRecordsForStructureRequest, GHCListEntitlementRecordsForUserRequest, GHCNotifyCameraFeatureChangeRequest, GRPCCallOptions, GRPCUnaryProtoCall;
@protocol GRPCProtoResponseHandler;

@protocol GHCEntitlementService2 <NSObject>
- (GRPCUnaryProtoCall *)getConciergeReadyStatusWithMessage:(GHCConciergeReadyStatusRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)notifyCameraFeatureChangeWithMessage:(GHCNotifyCameraFeatureChangeRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)getCameraFeaturesHttpPostVersionWithMessage:(GHCGetCameraFeaturesViaHttpPostRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)getCameraFeaturesWithMessage:(GHCGetCameraFeaturesRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)getEduScreenRenderingDetailsWithMessage:(GHCGetEduScreenRenderingDetailsRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)enrollInConciergeOfferWithMessage:(GHCEnrollInConciergeOfferRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)listEntitlementRecordsForStructureWithMessage:(GHCListEntitlementRecordsForStructureRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)listEntitlementRecordsForUserWithMessage:(GHCListEntitlementRecordsForUserRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)associateEntitlementRecordWithMessage:(GHCAssociateEntitlementRecordRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
@end

