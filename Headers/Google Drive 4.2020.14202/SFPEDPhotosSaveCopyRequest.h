//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSString, PEFEditList;

@interface SFPEDPhotosSaveCopyRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *albumMediaKey; // @dynamic albumMediaKey;
@property(retain, nonatomic) PEFEditList *editList; // @dynamic editList;
@property(nonatomic) int editReason; // @dynamic editReason;
@property(nonatomic) _Bool hasAlbumMediaKey; // @dynamic hasAlbumMediaKey;
@property(nonatomic) _Bool hasEditList; // @dynamic hasEditList;
@property(nonatomic) _Bool hasEditReason; // @dynamic hasEditReason;
@property(nonatomic) _Bool hasMediaKey; // @dynamic hasMediaKey;
@property(nonatomic) _Bool hasTargetAlbumType; // @dynamic hasTargetAlbumType;
@property(copy, nonatomic) NSString *mediaKey; // @dynamic mediaKey;
@property(nonatomic) int targetAlbumType; // @dynamic targetAlbumType;

@end

