//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIFormattedString, YTIThumbnailDetails;

@interface YTIUnpluggedWarmWelcomeItemRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int dwellTimeMillis; // @dynamic dwellTimeMillis;
@property(nonatomic) _Bool hasDwellTimeMillis; // @dynamic hasDwellTimeMillis;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasImageIsFullyVisible; // @dynamic hasImageIsFullyVisible;
@property(nonatomic) _Bool hasImageRegularSize; // @dynamic hasImageRegularSize;
@property(nonatomic) _Bool hasImageRegularSizeLandscape; // @dynamic hasImageRegularSizeLandscape;
@property(nonatomic) _Bool hasPrimaryText; // @dynamic hasPrimaryText;
@property(nonatomic) _Bool hasSecondaryText; // @dynamic hasSecondaryText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIThumbnailDetails *image; // @dynamic image;
@property(nonatomic) _Bool imageIsFullyVisible; // @dynamic imageIsFullyVisible;
@property(retain, nonatomic) YTIThumbnailDetails *imageRegularSize; // @dynamic imageRegularSize;
@property(retain, nonatomic) YTIThumbnailDetails *imageRegularSizeLandscape; // @dynamic imageRegularSizeLandscape;
@property(retain, nonatomic) YTIFormattedString *primaryText; // @dynamic primaryText;
@property(retain, nonatomic) YTIFormattedString *secondaryText; // @dynamic secondaryText;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

