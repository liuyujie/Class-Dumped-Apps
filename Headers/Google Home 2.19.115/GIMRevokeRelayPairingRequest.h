//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIMId, GIMRequestHeader;

@interface GIMRevokeRelayPairingRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(retain, nonatomic) GIMRequestHeader *header; // @dynamic header;
@property(retain, nonatomic) GIMId *id_p; // @dynamic id_p;

@end

