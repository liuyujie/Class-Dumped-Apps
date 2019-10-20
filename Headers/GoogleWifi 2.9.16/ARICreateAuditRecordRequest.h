//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ARIDeviceDetails, ARITimestamps, NSData;

@interface ARICreateAuditRecordRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *auditToken; // @dynamic auditToken;
@property(nonatomic) int componentId; // @dynamic componentId;
@property(retain, nonatomic) ARIDeviceDetails *deviceDetails; // @dynamic deviceDetails;
@property(nonatomic) _Bool hasAuditToken; // @dynamic hasAuditToken;
@property(nonatomic) _Bool hasComponentId; // @dynamic hasComponentId;
@property(nonatomic) _Bool hasDeviceDetails; // @dynamic hasDeviceDetails;
@property(nonatomic) _Bool hasSerializedAuditRecord; // @dynamic hasSerializedAuditRecord;
@property(nonatomic) _Bool hasTimestamps; // @dynamic hasTimestamps;
@property(nonatomic) _Bool hasTraceToken; // @dynamic hasTraceToken;
@property(copy, nonatomic) NSData *serializedAuditRecord; // @dynamic serializedAuditRecord;
@property(retain, nonatomic) ARITimestamps *timestamps; // @dynamic timestamps;
@property(copy, nonatomic) NSData *traceToken; // @dynamic traceToken;

@end

