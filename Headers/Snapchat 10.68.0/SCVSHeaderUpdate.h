//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCMTWorldEffectSet, SCVSLocality, SCVSWeather, SCWTimeZone;

@interface SCVSHeaderUpdate : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLocality; // @dynamic hasLocality;
@property(nonatomic) _Bool hasTimeZone; // @dynamic hasTimeZone;
@property(nonatomic) _Bool hasWeather; // @dynamic hasWeather;
@property(nonatomic) _Bool hasWorldEffect; // @dynamic hasWorldEffect;
@property(retain, nonatomic) SCVSLocality *locality; // @dynamic locality;
@property(retain, nonatomic) SCWTimeZone *timeZone; // @dynamic timeZone;
@property(retain, nonatomic) SCVSWeather *weather; // @dynamic weather;
@property(retain, nonatomic) SCMTWorldEffectSet *worldEffect; // @dynamic worldEffect;

@end
