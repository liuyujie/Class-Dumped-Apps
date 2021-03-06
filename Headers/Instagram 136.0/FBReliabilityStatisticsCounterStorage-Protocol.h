//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSArray, NSMutableDictionary;

@protocol FBReliabilityStatisticsCounterStorage <NSObject>
- (void)clear;
- (NSArray *)allCounters;
- (void)overwriteStorageWithCounters:(NSArray *)arg1;
- (void)setCounterWithPrimaryId:(int)arg1 secondaryId:(int)arg2 count:(int)arg3 datalossEnabledFunnels:(NSMutableDictionary *)arg4;
- (void)bumpCounterWithPrimaryId:(int)arg1 secondaryId:(int)arg2 delta:(int)arg3;
- (void)bumpCounterWithPrimaryId:(int)arg1 secondaryId:(int)arg2 delta:(int)arg3 datalossEnabledFunnels:(NSMutableDictionary *)arg4;
@end

