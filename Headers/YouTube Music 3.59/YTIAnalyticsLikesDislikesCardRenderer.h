//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICommand, YTIFormattedString;

@interface YTIAnalyticsLikesDislikesCardRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *detailsEndpoint; // @dynamic detailsEndpoint;
@property(nonatomic) long long dislikesCount; // @dynamic dislikesCount;
@property(retain, nonatomic) YTIFormattedString *displayDislikes; // @dynamic displayDislikes;
@property(retain, nonatomic) YTIFormattedString *displayLikes; // @dynamic displayLikes;
@property(nonatomic) unsigned int graphColor; // @dynamic graphColor;
@property(nonatomic) _Bool hasDetailsEndpoint; // @dynamic hasDetailsEndpoint;
@property(nonatomic) _Bool hasDislikesCount; // @dynamic hasDislikesCount;
@property(nonatomic) _Bool hasDisplayDislikes; // @dynamic hasDisplayDislikes;
@property(nonatomic) _Bool hasDisplayLikes; // @dynamic hasDisplayLikes;
@property(nonatomic) _Bool hasGraphColor; // @dynamic hasGraphColor;
@property(nonatomic) _Bool hasLikesCount; // @dynamic hasLikesCount;
@property(nonatomic) _Bool hasSubtitle; // @dynamic hasSubtitle;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTitleDescription; // @dynamic hasTitleDescription;
@property(nonatomic) long long likesCount; // @dynamic likesCount;
@property(retain, nonatomic) YTIFormattedString *subtitle; // @dynamic subtitle;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(retain, nonatomic) YTIFormattedString *titleDescription; // @dynamic titleDescription;

@end

