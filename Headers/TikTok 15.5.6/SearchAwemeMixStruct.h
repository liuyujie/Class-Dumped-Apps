//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64Array, MixStruct, NSMutableArray;

@interface SearchAwemeMixStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMixInfo; // @dynamic hasMixInfo;
@property(retain, nonatomic) MixStruct *mixInfo; // @dynamic mixInfo;
@property(retain, nonatomic) NSMutableArray *mixItemsArray; // @dynamic mixItemsArray;
@property(readonly, nonatomic) unsigned long long mixItemsArray_Count; // @dynamic mixItemsArray_Count;
@property(retain, nonatomic) GPBInt64Array *mixMoreArray; // @dynamic mixMoreArray;
@property(readonly, nonatomic) unsigned long long mixMoreArray_Count; // @dynamic mixMoreArray_Count;
@property(retain, nonatomic) NSMutableArray *mixMoreStrArray; // @dynamic mixMoreStrArray;
@property(readonly, nonatomic) unsigned long long mixMoreStrArray_Count; // @dynamic mixMoreStrArray_Count;

@end

