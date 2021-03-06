//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMTTAuthorInfo, GMSx_GMTTLoggedLink, NSString;

@interface GMSx_GMTTReview : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GMTTLoggedLink *author; // @dynamic author;
@property(retain, nonatomic) GMSx_GMTTAuthorInfo *authorInfo; // @dynamic authorInfo;
@property(copy, nonatomic) NSString *encryptedZipitAnnotationId; // @dynamic encryptedZipitAnnotationId;
@property(retain, nonatomic) GMSx_GMTTLoggedLink *flagInappropriate; // @dynamic flagInappropriate;
@property(copy, nonatomic) NSString *fullText; // @dynamic fullText;
@property(nonatomic) _Bool hasAuthor; // @dynamic hasAuthor;
@property(nonatomic) _Bool hasAuthorInfo; // @dynamic hasAuthorInfo;
@property(nonatomic) _Bool hasEncryptedZipitAnnotationId; // @dynamic hasEncryptedZipitAnnotationId;
@property(nonatomic) _Bool hasFlagInappropriate; // @dynamic hasFlagInappropriate;
@property(nonatomic) _Bool hasFullText; // @dynamic hasFullText;
@property(nonatomic) _Bool hasIsMarkedAsSpam; // @dynamic hasIsMarkedAsSpam;
@property(nonatomic) _Bool hasIsPrivate; // @dynamic hasIsPrivate;
@property(nonatomic) _Bool hasNumRatingStars; // @dynamic hasNumRatingStars;
@property(nonatomic) _Bool hasNumViews; // @dynamic hasNumViews;
@property(nonatomic) _Bool hasObfuscatedGaiaId; // @dynamic hasObfuscatedGaiaId;
@property(nonatomic) _Bool hasPublishDate; // @dynamic hasPublishDate;
@property(nonatomic) _Bool hasPublishTimestampMs; // @dynamic hasPublishTimestampMs;
@property(nonatomic) _Bool hasReviewId; // @dynamic hasReviewId;
@property(nonatomic) _Bool hasReviewURL; // @dynamic hasReviewURL;
@property(nonatomic) _Bool hasShareURL; // @dynamic hasShareURL;
@property(nonatomic) _Bool hasThumbsDownCount; // @dynamic hasThumbsDownCount;
@property(nonatomic) _Bool hasThumbsUpCount; // @dynamic hasThumbsUpCount;
@property(nonatomic) _Bool hasVed; // @dynamic hasVed;
@property(nonatomic) _Bool isMarkedAsSpam; // @dynamic isMarkedAsSpam;
@property(nonatomic) _Bool isPrivate; // @dynamic isPrivate;
@property(nonatomic) int numRatingStars; // @dynamic numRatingStars;
@property(nonatomic) long long numViews; // @dynamic numViews;
@property(copy, nonatomic) NSString *obfuscatedGaiaId; // @dynamic obfuscatedGaiaId;
@property(copy, nonatomic) NSString *publishDate; // @dynamic publishDate;
@property(nonatomic) long long publishTimestampMs; // @dynamic publishTimestampMs;
@property(copy, nonatomic) NSString *reviewId; // @dynamic reviewId;
@property(copy, nonatomic) NSString *reviewURL; // @dynamic reviewURL;
@property(copy, nonatomic) NSString *shareURL; // @dynamic shareURL;
@property(nonatomic) unsigned int thumbsDownCount; // @dynamic thumbsDownCount;
@property(nonatomic) unsigned int thumbsUpCount; // @dynamic thumbsUpCount;
@property(copy, nonatomic) NSString *ved; // @dynamic ved;

@end

