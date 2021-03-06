//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTICommand, YTIFormattedString, YTIIcon, YTIPlaylistThumbnailSupportedRenderers;

@interface YTIPlaylistAddToOptionRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *addToPlaylistServiceEndpoint; // @dynamic addToPlaylistServiceEndpoint;
@property(nonatomic) int containsSelectedVideos; // @dynamic containsSelectedVideos;
@property(nonatomic) _Bool hasAddToPlaylistServiceEndpoint; // @dynamic hasAddToPlaylistServiceEndpoint;
@property(nonatomic) _Bool hasContainsSelectedVideos; // @dynamic hasContainsSelectedVideos;
@property(nonatomic) _Bool hasPlaylistId; // @dynamic hasPlaylistId;
@property(nonatomic) _Bool hasPrivacy; // @dynamic hasPrivacy;
@property(nonatomic) _Bool hasPrivacyIcon; // @dynamic hasPrivacyIcon;
@property(nonatomic) _Bool hasRemoveFromPlaylistServiceEndpoint; // @dynamic hasRemoveFromPlaylistServiceEndpoint;
@property(nonatomic) _Bool hasShortBylineText; // @dynamic hasShortBylineText;
@property(nonatomic) _Bool hasThumbnailRenderer; // @dynamic hasThumbnailRenderer;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(copy, nonatomic) NSString *playlistId; // @dynamic playlistId;
@property(nonatomic) int privacy; // @dynamic privacy;
@property(retain, nonatomic) YTIIcon *privacyIcon; // @dynamic privacyIcon;
@property(retain, nonatomic) YTICommand *removeFromPlaylistServiceEndpoint; // @dynamic removeFromPlaylistServiceEndpoint;
@property(retain, nonatomic) YTIFormattedString *shortBylineText; // @dynamic shortBylineText;
@property(retain, nonatomic) YTIPlaylistThumbnailSupportedRenderers *thumbnailRenderer; // @dynamic thumbnailRenderer;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;

@end

