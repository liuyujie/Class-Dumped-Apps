//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class PhotosMCRotateItemOperation, PhotosMCTargetItem;

@interface SFPDPhotosRotateItemsRequest_RotateItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRotateOperation; // @dynamic hasRotateOperation;
@property(nonatomic) _Bool hasTargetItem; // @dynamic hasTargetItem;
@property(retain, nonatomic) PhotosMCRotateItemOperation *rotateOperation; // @dynamic rotateOperation;
@property(retain, nonatomic) PhotosMCTargetItem *targetItem; // @dynamic targetItem;

@end

