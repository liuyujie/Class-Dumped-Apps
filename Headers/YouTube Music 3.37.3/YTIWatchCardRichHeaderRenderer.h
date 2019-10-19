//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIButtonSupportedRenderers, YTICommand, YTIFormattedString, YTIRenderer, YTIThumbnailDetails, YTIUniversalWatchCardHeaderColorSupportedDatas;

@interface YTIWatchCardRichHeaderRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *actionButton; // @dynamic actionButton;
@property(retain, nonatomic) YTIThumbnailDetails *avatar; // @dynamic avatar;
@property(retain, nonatomic) YTIFormattedString *avatarText; // @dynamic avatarText;
@property(retain, nonatomic) NSMutableArray *badgesArray; // @dynamic badgesArray;
@property(readonly, nonatomic) unsigned long long badgesArray_Count; // @dynamic badgesArray_Count;
@property(retain, nonatomic) YTIRenderer *callToActionButton; // @dynamic callToActionButton;
@property(retain, nonatomic) YTIRenderer *channelThumbnail; // @dynamic channelThumbnail;
@property(retain, nonatomic) YTIUniversalWatchCardHeaderColorSupportedDatas *colorSupportedDatas; // @dynamic colorSupportedDatas;
@property(retain, nonatomic) YTIUniversalWatchCardHeaderColorSupportedDatas *darkThemeColorSupportedDatas; // @dynamic darkThemeColorSupportedDatas;
@property(readonly, nonatomic) int endContentOneOfCase; // @dynamic endContentOneOfCase;
@property(nonatomic) _Bool hasCallToActionButton; // @dynamic hasCallToActionButton;
@property(nonatomic) _Bool hasColorSupportedDatas; // @dynamic hasColorSupportedDatas;
@property(nonatomic) _Bool hasDarkThemeColorSupportedDatas; // @dynamic hasDarkThemeColorSupportedDatas;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(nonatomic) _Bool hasSubtitle; // @dynamic hasSubtitle;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTitleBadge; // @dynamic hasTitleBadge;
@property(nonatomic) _Bool hasTitleNavigationEndpoint; // @dynamic hasTitleNavigationEndpoint;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) int style; // @dynamic style;
@property(retain, nonatomic) YTIFormattedString *subtitle; // @dynamic subtitle;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(retain, nonatomic) YTIRenderer *titleBadge; // @dynamic titleBadge;
@property(retain, nonatomic) YTICommand *titleNavigationEndpoint; // @dynamic titleNavigationEndpoint;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
