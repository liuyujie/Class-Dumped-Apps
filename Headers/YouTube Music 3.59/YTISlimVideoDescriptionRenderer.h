//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIFormattedString, YTIRenderer, YTIVideoMetadataRowContainerSupportedRenderers;

@interface YTISlimVideoDescriptionRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int bottomDividerStyle; // @dynamic bottomDividerStyle;
@property(retain, nonatomic) YTIFormattedString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasBottomDividerStyle; // @dynamic hasBottomDividerStyle;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasMetadataRowContainer; // @dynamic hasMetadataRowContainer;
@property(nonatomic) _Bool hasPublishDate; // @dynamic hasPublishDate;
@property(nonatomic) _Bool hasSlimChannelMetadata; // @dynamic hasSlimChannelMetadata;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIVideoMetadataRowContainerSupportedRenderers *metadataRowContainer; // @dynamic metadataRowContainer;
@property(retain, nonatomic) YTIFormattedString *publishDate; // @dynamic publishDate;
@property(retain, nonatomic) YTIRenderer *slimChannelMetadata; // @dynamic slimChannelMetadata;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

