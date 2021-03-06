//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GABDate, GABStructuredLocation;

@interface GABAlarm : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GABDate *absoluteDate; // @dynamic absoluteDate;
@property(readonly, nonatomic) int alarmTimeOneOfCase; // @dynamic alarmTimeOneOfCase;
@property(nonatomic) _Bool hasProximity; // @dynamic hasProximity;
@property(nonatomic) _Bool hasStructuredLocation; // @dynamic hasStructuredLocation;
@property(nonatomic) int proximity; // @dynamic proximity;
@property(nonatomic) double relativeOffset; // @dynamic relativeOffset;
@property(retain, nonatomic) GABStructuredLocation *structuredLocation; // @dynamic structuredLocation;

@end

