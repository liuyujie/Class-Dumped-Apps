//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIMClientReceiveConfiguration, GIMEndpointExperiments, GIMMediaSessionRequestParameters, GIMRequestHeader, NSMutableArray;

@interface GIMCreateMediaSessionRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GIMClientReceiveConfiguration *clientReceiveConfiguration; // @dynamic clientReceiveConfiguration;
@property(retain, nonatomic) GIMEndpointExperiments *endpointExperiments; // @dynamic endpointExperiments;
@property(nonatomic) _Bool hasClientReceiveConfiguration; // @dynamic hasClientReceiveConfiguration;
@property(nonatomic) _Bool hasEndpointExperiments; // @dynamic hasEndpointExperiments;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasSessionRequestParams; // @dynamic hasSessionRequestParams;
@property(retain, nonatomic) GIMRequestHeader *header; // @dynamic header;
@property(retain, nonatomic) GIMMediaSessionRequestParameters *sessionRequestParams; // @dynamic sessionRequestParams;
@property(retain, nonatomic) NSMutableArray *viewRequestGroupArray; // @dynamic viewRequestGroupArray;
@property(readonly, nonatomic) unsigned long long viewRequestGroupArray_Count; // @dynamic viewRequestGroupArray_Count;

@end

