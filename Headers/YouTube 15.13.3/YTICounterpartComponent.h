//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTICommand, YTIMusicallyMatchingSegmentMap, YTIRenderer;

@interface YTICounterpartComponent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int counterpartOneOfCase; // @dynamic counterpartOneOfCase;
@property(retain, nonatomic) YTIRenderer *counterpartRenderer; // @dynamic counterpartRenderer;
@property(retain, nonatomic) YTICommand *counterpartWatchEndpoint; // @dynamic counterpartWatchEndpoint;
@property(nonatomic) _Bool hasSegmentMap; // @dynamic hasSegmentMap;
@property(retain, nonatomic) YTIMusicallyMatchingSegmentMap *segmentMap; // @dynamic segmentMap;

@end

