//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary, NSString;

@interface YTIAppStoreContentEntity : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(retain, nonatomic) NSMutableDictionary *productIdPriceMap; // @dynamic productIdPriceMap;
@property(readonly, nonatomic) unsigned long long productIdPriceMap_Count; // @dynamic productIdPriceMap_Count;

@end

