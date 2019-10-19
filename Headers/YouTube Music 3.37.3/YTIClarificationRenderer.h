//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTICommand, YTIFormattedString, YTIIcon, YTILoggingDirectives, YTIMenuSupportedRenderers, YTIThumbnailDetails;

@interface YTIClarificationRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *contentTitle; // @dynamic contentTitle;
@property(retain, nonatomic) YTICommand *endpoint; // @dynamic endpoint;
@property(nonatomic) _Bool hasContentTitle; // @dynamic hasContentTitle;
@property(nonatomic) _Bool hasEndpoint; // @dynamic hasEndpoint;
@property(nonatomic) _Bool hasLoggingDirectives; // @dynamic hasLoggingDirectives;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasSectionTitle; // @dynamic hasSectionTitle;
@property(nonatomic) _Bool hasSource; // @dynamic hasSource;
@property(nonatomic) _Bool hasSourceIcon; // @dynamic hasSourceIcon;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool hasTimestamp; // @dynamic hasTimestamp;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(retain, nonatomic) YTIThumbnailDetails *image; // @dynamic image;
@property(readonly, nonatomic) int imageOneofOneOfCase; // @dynamic imageOneofOneOfCase;
@property(retain, nonatomic) YTILoggingDirectives *loggingDirectives; // @dynamic loggingDirectives;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(retain, nonatomic) YTIFormattedString *sectionTitle; // @dynamic sectionTitle;
@property(retain, nonatomic) YTIFormattedString *source; // @dynamic source;
@property(retain, nonatomic) YTIIcon *sourceIcon; // @dynamic sourceIcon;
@property(nonatomic) int style; // @dynamic style;
@property(retain, nonatomic) YTIFormattedString *text; // @dynamic text;
@property(retain, nonatomic) YTIFormattedString *timestamp; // @dynamic timestamp;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
