//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface YTILiveDashboardEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIsDefaultBroadcast; // @dynamic hasIsDefaultBroadcast;
@property(nonatomic) _Bool hasLcrOptOut; // @dynamic hasLcrOptOut;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(nonatomic) _Bool isDefaultBroadcast; // @dynamic isDefaultBroadcast;
@property(nonatomic) _Bool lcrOptOut; // @dynamic lcrOptOut;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;

@end

