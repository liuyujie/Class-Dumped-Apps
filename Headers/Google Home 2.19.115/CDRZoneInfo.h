//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CDRLatLong, NSMutableArray, NSString;

@interface CDRZoneInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(nonatomic) _Bool hasDisplayName; // @dynamic hasDisplayName;
@property(nonatomic) _Bool hasImageURL; // @dynamic hasImageURL;
@property(nonatomic) _Bool hasIsConfidential; // @dynamic hasIsConfidential;
@property(nonatomic) _Bool hasIsSameDay; // @dynamic hasIsSameDay;
@property(nonatomic) _Bool hasMapCenter; // @dynamic hasMapCenter;
@property(nonatomic) _Bool hasMapPinLocation; // @dynamic hasMapPinLocation;
@property(nonatomic) _Bool hasMapZoomLevel; // @dynamic hasMapZoomLevel;
@property(nonatomic) _Bool hasZoneCode; // @dynamic hasZoneCode;
@property(copy, nonatomic) NSString *imageURL; // @dynamic imageURL;
@property(nonatomic) _Bool isConfidential; // @dynamic isConfidential;
@property(nonatomic) _Bool isSameDay; // @dynamic isSameDay;
@property(retain, nonatomic) CDRLatLong *mapCenter; // @dynamic mapCenter;
@property(retain, nonatomic) CDRLatLong *mapPinLocation; // @dynamic mapPinLocation;
@property(nonatomic) int mapZoomLevel; // @dynamic mapZoomLevel;
@property(retain, nonatomic) NSMutableArray *polygonCoordinatesArray; // @dynamic polygonCoordinatesArray;
@property(readonly, nonatomic) unsigned long long polygonCoordinatesArray_Count; // @dynamic polygonCoordinatesArray_Count;
@property(copy, nonatomic) NSString *zoneCode; // @dynamic zoneCode;

@end

