//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETRealtimeUsageDetailsCollectionViewModel.h"

@class NSString;

@interface JETRealtimeStationUsageDetailsCollectionViewModel : JETRealtimeUsageDetailsCollectionViewModel
{
    NSString *_stationID;
}

@property(readonly, nonatomic) NSString *stationID; // @synthesize stationID=_stationID;
- (void).cxx_destruct;
- (id)trafficUsage;
- (id)initWithNavigationController:(id)arg1 usageDetailsDelegate:(id)arg2 userState:(id)arg3 cache:(id)arg4;
- (id)initWithNavigationController:(id)arg1 usageDetailsDelegate:(id)arg2 userState:(id)arg3 stationID:(id)arg4 cache:(id)arg5;

@end

