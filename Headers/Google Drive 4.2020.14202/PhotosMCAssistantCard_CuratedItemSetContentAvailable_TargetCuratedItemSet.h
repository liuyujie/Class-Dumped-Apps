//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class PhotosMCCuratedItemSetId, PhotosMCItemId;

@interface PhotosMCAssistantCard_CuratedItemSetContentAvailable_TargetCuratedItemSet : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PhotosMCCuratedItemSetId *curatedItemSetId; // @dynamic curatedItemSetId;
@property(nonatomic) _Bool hasCuratedItemSetId; // @dynamic hasCuratedItemSetId;
@property(nonatomic) _Bool hasStartItem; // @dynamic hasStartItem;
@property(retain, nonatomic) PhotosMCItemId *startItem; // @dynamic startItem;

@end

