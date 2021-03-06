//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSString, PhotosMCSubjectId;

@interface PhotosMCAutoCompleteEntry : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *albumId; // @dynamic albumId;
@property(copy, nonatomic) NSString *albumMediaKey; // @dynamic albumMediaKey;
@property(nonatomic) int appPageId; // @dynamic appPageId;
@property(nonatomic) int category; // @dynamic category;
@property(nonatomic) unsigned int clusterId; // @dynamic clusterId;
@property(copy, nonatomic) NSString *clusterMediaKey; // @dynamic clusterMediaKey;
@property(copy, nonatomic) NSString *dateId; // @dynamic dateId;
@property(copy, nonatomic) NSString *displayText; // @dynamic displayText;
@property(copy, nonatomic) NSString *entityId; // @dynamic entityId;
@property(nonatomic) int entryVisibility; // @dynamic entryVisibility;
@property(nonatomic) _Bool hasAlbumId; // @dynamic hasAlbumId;
@property(nonatomic) _Bool hasAlbumMediaKey; // @dynamic hasAlbumMediaKey;
@property(nonatomic) _Bool hasAppPageId; // @dynamic hasAppPageId;
@property(nonatomic) _Bool hasCategory; // @dynamic hasCategory;
@property(nonatomic) _Bool hasClusterId; // @dynamic hasClusterId;
@property(nonatomic) _Bool hasClusterMediaKey; // @dynamic hasClusterMediaKey;
@property(nonatomic) _Bool hasDateId; // @dynamic hasDateId;
@property(nonatomic) _Bool hasDisplayText; // @dynamic hasDisplayText;
@property(nonatomic) _Bool hasEntityId; // @dynamic hasEntityId;
@property(nonatomic) _Bool hasEntryVisibility; // @dynamic hasEntryVisibility;
@property(nonatomic) _Bool hasImageURL; // @dynamic hasImageURL;
@property(nonatomic) _Bool hasPlaceId; // @dynamic hasPlaceId;
@property(nonatomic) _Bool hasRandomizedClusterId; // @dynamic hasRandomizedClusterId;
@property(nonatomic) _Bool hasSpecialMediaTypeId; // @dynamic hasSpecialMediaTypeId;
@property(nonatomic) _Bool hasSubjectId; // @dynamic hasSubjectId;
@property(copy, nonatomic) NSString *imageURL; // @dynamic imageURL;
@property(copy, nonatomic) NSString *placeId; // @dynamic placeId;
@property(copy, nonatomic) NSString *randomizedClusterId; // @dynamic randomizedClusterId;
@property(nonatomic) int specialMediaTypeId; // @dynamic specialMediaTypeId;
@property(retain, nonatomic) PhotosMCSubjectId *subjectId; // @dynamic subjectId;

@end

