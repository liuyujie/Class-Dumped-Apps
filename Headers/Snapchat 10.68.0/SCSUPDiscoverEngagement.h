//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@interface SCSUPDiscoverEngagement : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int channelFinishedCount; // @dynamic channelFinishedCount;
@property(nonatomic) int channelViewCount; // @dynamic channelViewCount;
@property(nonatomic) float channelViewTimeInSecs; // @dynamic channelViewTimeInSecs;
@property(nonatomic) _Bool isChannelSubscribed; // @dynamic isChannelSubscribed;
@property(nonatomic) long long lastStateUpdateMsecs; // @dynamic lastStateUpdateMsecs;
@property(nonatomic) unsigned int totalHides; // @dynamic totalHides;
@property(nonatomic) unsigned int totalUnhides; // @dynamic totalUnhides;

@end
