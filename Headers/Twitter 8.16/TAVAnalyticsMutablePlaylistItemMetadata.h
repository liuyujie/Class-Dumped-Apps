//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterAVCore/TAVAnalyticsPlaylistItemMetadata.h>

@class NSNumber, NSString, NSURL, TAVAnalyticsPromotedMetadata, TVDIAnalyticsOwnerIdentifier;

@interface TAVAnalyticsMutablePlaylistItemMetadata : TAVAnalyticsPlaylistItemMetadata
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) _Bool isAd; // @dynamic isAd;
@property(copy, nonatomic) NSNumber *mediaTimecodeMillis; // @dynamic mediaTimecodeMillis;
@property(copy, nonatomic) NSURL *mediaURL; // @dynamic mediaURL;
@property(retain, nonatomic) TVDIAnalyticsOwnerIdentifier *ownerID; // @dynamic ownerID;
@property(copy, nonatomic) TAVAnalyticsPromotedMetadata *promotedContent; // @dynamic promotedContent;
@property(copy, nonatomic) NSString *scribeElement; // @dynamic scribeElement;
@property(copy, nonatomic) NSString *videoID; // @dynamic videoID;
@property(nonatomic) int videoType; // @dynamic videoType;

@end

