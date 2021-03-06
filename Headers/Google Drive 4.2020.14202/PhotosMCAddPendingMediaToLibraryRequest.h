//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GPBEnumArray, NSMutableArray, PhotosMCAssistantAddPendingMediaParams;

@interface PhotosMCAddPendingMediaToLibraryRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PhotosMCAssistantAddPendingMediaParams *assistantParams; // @dynamic assistantParams;
@property(retain, nonatomic) NSMutableArray *collectionIdArray; // @dynamic collectionIdArray;
@property(readonly, nonatomic) unsigned long long collectionIdArray_Count; // @dynamic collectionIdArray_Count;
@property(nonatomic) _Bool enableSaveToShare; // @dynamic enableSaveToShare;
@property(nonatomic) _Bool hasAssistantParams; // @dynamic hasAssistantParams;
@property(nonatomic) _Bool hasEnableSaveToShare; // @dynamic hasEnableSaveToShare;
@property(nonatomic) _Bool hasMediaType; // @dynamic hasMediaType;
@property(retain, nonatomic) NSMutableArray *itemIdArray; // @dynamic itemIdArray;
@property(readonly, nonatomic) unsigned long long itemIdArray_Count; // @dynamic itemIdArray_Count;
@property(nonatomic) int mediaType; // @dynamic mediaType;
@property(retain, nonatomic) GPBEnumArray *supportedEnrichmentsArray; // @dynamic supportedEnrichmentsArray;
@property(readonly, nonatomic) unsigned long long supportedEnrichmentsArray_Count; // @dynamic supportedEnrichmentsArray_Count;

@end

