//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIInfoCardImage;

@interface YTIInfoCardLocation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *address; // @dynamic address;
@property(nonatomic) _Bool hasAddress; // @dynamic hasAddress;
@property(nonatomic) _Bool hasHeadline; // @dynamic hasHeadline;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasLatitudeE6; // @dynamic hasLatitudeE6;
@property(nonatomic) _Bool hasLongitudeE6; // @dynamic hasLongitudeE6;
@property(copy, nonatomic) NSString *headline; // @dynamic headline;
@property(retain, nonatomic) YTIInfoCardImage *image; // @dynamic image;
@property(nonatomic) int latitudeE6; // @dynamic latitudeE6;
@property(nonatomic) int longitudeE6; // @dynamic longitudeE6;

@end
