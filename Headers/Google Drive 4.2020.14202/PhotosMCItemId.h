//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSString, PhotosMCItemId_LegacyPhotoId;

@interface PhotosMCItemId : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLegacyPhotoId; // @dynamic hasLegacyPhotoId;
@property(nonatomic) _Bool hasMediaKey; // @dynamic hasMediaKey;
@property(retain, nonatomic) PhotosMCItemId_LegacyPhotoId *legacyPhotoId; // @dynamic legacyPhotoId;
@property(copy, nonatomic) NSString *mediaKey; // @dynamic mediaKey;

@end

