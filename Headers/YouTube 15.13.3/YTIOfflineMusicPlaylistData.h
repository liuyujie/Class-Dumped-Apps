//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIDate, YTIThumbnailDetails;

@interface YTIOfflineMusicPlaylistData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *albumArtistDisplayName; // @dynamic albumArtistDisplayName;
@property(retain, nonatomic) YTIThumbnailDetails *albumArtistThumbnail; // @dynamic albumArtistThumbnail;
@property(retain, nonatomic) YTIThumbnailDetails *albumHqThumbnail; // @dynamic albumHqThumbnail;
@property(retain, nonatomic) YTIDate *albumReleaseDate; // @dynamic albumReleaseDate;
@property(nonatomic) int albumReleaseExplicitType; // @dynamic albumReleaseExplicitType;
@property(nonatomic) int albumReleaseType; // @dynamic albumReleaseType;
@property(nonatomic) int fullPlaylistLength; // @dynamic fullPlaylistLength;
@property(nonatomic) _Bool hasAlbumArtistDisplayName; // @dynamic hasAlbumArtistDisplayName;
@property(nonatomic) _Bool hasAlbumArtistThumbnail; // @dynamic hasAlbumArtistThumbnail;
@property(nonatomic) _Bool hasAlbumHqThumbnail; // @dynamic hasAlbumHqThumbnail;
@property(nonatomic) _Bool hasAlbumReleaseDate; // @dynamic hasAlbumReleaseDate;
@property(nonatomic) _Bool hasAlbumReleaseExplicitType; // @dynamic hasAlbumReleaseExplicitType;
@property(nonatomic) _Bool hasAlbumReleaseType; // @dynamic hasAlbumReleaseType;
@property(nonatomic) _Bool hasFullPlaylistLength; // @dynamic hasFullPlaylistLength;
@property(nonatomic) _Bool hasIsAlbum; // @dynamic hasIsAlbum;
@property(nonatomic) _Bool hasRemoveFromAutoOfflineFeedbackToken; // @dynamic hasRemoveFromAutoOfflineFeedbackToken;
@property(nonatomic) _Bool hasRemoveFromManualOfflineFeedbackToken; // @dynamic hasRemoveFromManualOfflineFeedbackToken;
@property(nonatomic) _Bool isAlbum; // @dynamic isAlbum;
@property(copy, nonatomic) NSString *removeFromAutoOfflineFeedbackToken; // @dynamic removeFromAutoOfflineFeedbackToken;
@property(copy, nonatomic) NSString *removeFromManualOfflineFeedbackToken; // @dynamic removeFromManualOfflineFeedbackToken;

@end

