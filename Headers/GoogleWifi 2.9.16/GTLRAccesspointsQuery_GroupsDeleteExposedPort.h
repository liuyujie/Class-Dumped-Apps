//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRAccesspointsQuery.h"

@class NSString;

@interface GTLRAccesspointsQuery_GroupsDeleteExposedPort : GTLRAccesspointsQuery
{
}

+ (id)queryWithGroupId:(id)arg1;
+ (id)parameterNameMap;

// Remaining properties
@property(nonatomic) _Bool exposedPortExposeTcp; // @dynamic exposedPortExposeTcp;
@property(nonatomic) _Bool exposedPortExposeUdp; // @dynamic exposedPortExposeUdp;
@property(copy, nonatomic) NSString *exposedPortIpVersion; // @dynamic exposedPortIpVersion;
@property(nonatomic) long long exposedPortIpv4WanStartPort; // @dynamic exposedPortIpv4WanStartPort;
@property(nonatomic) long long exposedPortStationEndPort; // @dynamic exposedPortStationEndPort;
@property(copy, nonatomic) NSString *exposedPortStationId; // @dynamic exposedPortStationId;
@property(nonatomic) long long exposedPortStationStartPort; // @dynamic exposedPortStationStartPort;
@property(copy, nonatomic) NSString *groupId; // @dynamic groupId;

@end
