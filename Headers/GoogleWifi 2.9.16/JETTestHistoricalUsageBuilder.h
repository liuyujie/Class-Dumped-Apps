//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTLRAccesspoints_GetHistoricalUsageResponse;

@interface JETTestHistoricalUsageBuilder : NSObject
{
    GTLRAccesspoints_GetHistoricalUsageResponse *_response;
}

@property(readonly, nonatomic) GTLRAccesspoints_GetHistoricalUsageResponse *response; // @synthesize response=_response;
- (void).cxx_destruct;
- (id)createUsageRecordsWithDownloadUsages:(id)arg1 uploadUsages:(id)arg2 granularity:(double)arg3;
- (void)addWANUsageWithGranularity:(double)arg1 downloadUsages:(id)arg2 uploadUsages:(id)arg3;
- (id)addUsageForStation:(id)arg1 granularity:(double)arg2 downloadUsages:(id)arg3 uploadUsages:(id)arg4;
- (id)alignResponseDate:(id)arg1 toRequestedEndDate:(id)arg2;
- (void)adjustToAlignWithEndTime:(id)arg1;
- (id)init;

@end

