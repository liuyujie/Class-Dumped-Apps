//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTICommand, YTIFormattedString, YTIIcon, YTIRenderer, YTIThumbnailDetails;

@interface YTIFactCheckRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *articleTitle; // @dynamic articleTitle;
@property(retain, nonatomic) YTIFormattedString *claimText; // @dynamic claimText;
@property(retain, nonatomic) YTIFormattedString *claimant; // @dynamic claimant;
@property(retain, nonatomic) YTICommand *endpoint; // @dynamic endpoint;
@property(retain, nonatomic) YTIFormattedString *footerText; // @dynamic footerText;
@property(nonatomic) _Bool hasArticleTitle; // @dynamic hasArticleTitle;
@property(nonatomic) _Bool hasClaimText; // @dynamic hasClaimText;
@property(nonatomic) _Bool hasClaimant; // @dynamic hasClaimant;
@property(nonatomic) _Bool hasEndpoint; // @dynamic hasEndpoint;
@property(nonatomic) _Bool hasFooterText; // @dynamic hasFooterText;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasPublisherEndpoint; // @dynamic hasPublisherEndpoint;
@property(nonatomic) _Bool hasPublisherLinkIcon; // @dynamic hasPublisherLinkIcon;
@property(nonatomic) _Bool hasPublisherName; // @dynamic hasPublisherName;
@property(nonatomic) _Bool hasRatingText; // @dynamic hasRatingText;
@property(nonatomic) _Bool hasSectionTitle; // @dynamic hasSectionTitle;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(nonatomic) _Bool hasTitleIcon; // @dynamic hasTitleIcon;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIThumbnailDetails *image; // @dynamic image;
@property(retain, nonatomic) YTIRenderer *menu; // @dynamic menu;
@property(retain, nonatomic) YTICommand *publisherEndpoint; // @dynamic publisherEndpoint;
@property(retain, nonatomic) YTIIcon *publisherLinkIcon; // @dynamic publisherLinkIcon;
@property(retain, nonatomic) YTIFormattedString *publisherName; // @dynamic publisherName;
@property(retain, nonatomic) YTIFormattedString *ratingText; // @dynamic ratingText;
@property(retain, nonatomic) YTIFormattedString *sectionTitle; // @dynamic sectionTitle;
@property(nonatomic) int style; // @dynamic style;
@property(retain, nonatomic) YTIIcon *titleIcon; // @dynamic titleIcon;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
