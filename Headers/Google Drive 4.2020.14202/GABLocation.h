//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GABDate;

@interface GABLocation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) double altitudeMeters; // @dynamic altitudeMeters;
@property(nonatomic) long long floor; // @dynamic floor;
@property(nonatomic) _Bool hasAltitudeMeters; // @dynamic hasAltitudeMeters;
@property(nonatomic) _Bool hasFloor; // @dynamic hasFloor;
@property(nonatomic) _Bool hasHorizontalAccuracyMeters; // @dynamic hasHorizontalAccuracyMeters;
@property(nonatomic) _Bool hasLatitudeDegrees; // @dynamic hasLatitudeDegrees;
@property(nonatomic) _Bool hasLongitudeDegrees; // @dynamic hasLongitudeDegrees;
@property(nonatomic) _Bool hasTimestamp; // @dynamic hasTimestamp;
@property(nonatomic) _Bool hasVerticalAccuracyMeters; // @dynamic hasVerticalAccuracyMeters;
@property(nonatomic) double horizontalAccuracyMeters; // @dynamic horizontalAccuracyMeters;
@property(nonatomic) double latitudeDegrees; // @dynamic latitudeDegrees;
@property(nonatomic) double longitudeDegrees; // @dynamic longitudeDegrees;
@property(retain, nonatomic) GABDate *timestamp; // @dynamic timestamp;
@property(nonatomic) double verticalAccuracyMeters; // @dynamic verticalAccuracyMeters;

@end

