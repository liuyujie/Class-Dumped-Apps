//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class PhotosMCChapterDataMask, PhotosMCChapterIconsMask, PhotosMCChapterIdMask, PhotosMCChapterTagsMask;

@interface PhotosMCMediaChapterMask : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PhotosMCChapterDataMask *data_p; // @dynamic data_p;
@property(nonatomic) _Bool hasData_p; // @dynamic hasData_p;
@property(nonatomic) _Bool hasIcons; // @dynamic hasIcons;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasTags; // @dynamic hasTags;
@property(retain, nonatomic) PhotosMCChapterIconsMask *icons; // @dynamic icons;
@property(retain, nonatomic) PhotosMCChapterIdMask *id_p; // @dynamic id_p;
@property(retain, nonatomic) PhotosMCChapterTagsMask *tags; // @dynamic tags;

@end

