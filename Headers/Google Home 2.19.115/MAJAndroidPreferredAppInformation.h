//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface MAJAndroidPreferredAppInformation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *fallbackAppPackageArray; // @dynamic fallbackAppPackageArray;
@property(readonly, nonatomic) unsigned long long fallbackAppPackageArray_Count; // @dynamic fallbackAppPackageArray_Count;
@property(nonatomic) _Bool fallbackToFirstApp; // @dynamic fallbackToFirstApp;
@property(nonatomic) _Bool hasFallbackToFirstApp; // @dynamic hasFallbackToFirstApp;
@property(nonatomic) _Bool hasPreferOnDeviceAppFromArgumentId; // @dynamic hasPreferOnDeviceAppFromArgumentId;
@property(nonatomic) _Bool hasStickyAppKey; // @dynamic hasStickyAppKey;
@property(nonatomic) int preferOnDeviceAppFromArgumentId; // @dynamic preferOnDeviceAppFromArgumentId;
@property(copy, nonatomic) NSString *stickyAppKey; // @dynamic stickyAppKey;

@end

