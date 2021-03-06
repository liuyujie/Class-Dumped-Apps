//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NFCW444/GPBMessage.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TCPProberResult : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *acceptedCriteriaArray; // @dynamic acceptedCriteriaArray;
@property(readonly, nonatomic) unsigned long long acceptedCriteriaArray_Count; // @dynamic acceptedCriteriaArray_Count;
@property(nonatomic) int connectionErrorCode; // @dynamic connectionErrorCode;
@property(nonatomic) _Bool hasConnectionErrorCode; // @dynamic hasConnectionErrorCode;
@property(nonatomic) _Bool hasTcpProberInvokeReason; // @dynamic hasTcpProberInvokeReason;
@property(nonatomic) _Bool hasTcpProberResultCode; // @dynamic hasTcpProberResultCode;
@property(retain, nonatomic) NSMutableArray *rejectedCriteriaArray; // @dynamic rejectedCriteriaArray;
@property(readonly, nonatomic) unsigned long long rejectedCriteriaArray_Count; // @dynamic rejectedCriteriaArray_Count;
@property(nonatomic) int tcpProberInvokeReason; // @dynamic tcpProberInvokeReason;
@property(nonatomic) int tcpProberResultCode; // @dynamic tcpProberResultCode;

@end

