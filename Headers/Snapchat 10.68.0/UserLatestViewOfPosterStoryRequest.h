//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCSCOREUUID, SCSRRClientInfo;

@interface UserLatestViewOfPosterStoryRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSRRClientInfo *clientInfo; // @dynamic clientInfo;
@property(nonatomic) _Bool hasClientInfo; // @dynamic hasClientInfo;
@property(nonatomic) _Bool hasSnapOwnerId; // @dynamic hasSnapOwnerId;
@property(nonatomic) _Bool hasViewerUserId; // @dynamic hasViewerUserId;
@property(nonatomic) int origin; // @dynamic origin;
@property(copy, nonatomic) NSString *requestId; // @dynamic requestId;
@property(nonatomic) long long requestTimestampMs; // @dynamic requestTimestampMs;
@property(retain, nonatomic) SCSCOREUUID *snapOwnerId; // @dynamic snapOwnerId;
@property(retain, nonatomic) SCSCOREUUID *viewerUserId; // @dynamic viewerUserId;

@end
