//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, YTHotConfig;
@protocol YTEventLogger;

@interface YTAdsEventLoggingController : NSObject
{
    id <YTEventLogger> _eventLogger;
    _Bool _includeDebugInfo;
    YTHotConfig *_adsHotConfig;
    int _eventCount;
    GIMMe *_gimme;
}

+ (int)layoutExitedEventFromLayoutExitReason:(unsigned long long)arg1;
+ (int)layoutExitRequestEventFromLayoutExitReason:(unsigned long long)arg1;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)setIncludeDebugInfo:(_Bool)arg1;
- (_Bool)shouldIncludeDebugData;
- (void)maybeLogClientEvent:(id)arg1;
- (id)prepareClientEventWithAdsClientStateChangeBlock:(CDUnknownBlockType)arg1 withEventOrder:(int)arg2;
- (void)reportClientEventWithAdsClientStateChangeBlock:(CDUnknownBlockType)arg1;
- (id)createAdClientDataEntryWithSlotData:(id)arg1 layoutData:(id)arg2 opportunityData:(id)arg3 triggerData:(id)arg4;
- (id)createTriggerDataWithTrigger:(id)arg1;
- (id)createTriggerDataWithTriggerBundle:(id)arg1;
- (id)createOpportunityDataWithType:(int)arg1 slotsFromOpportunity:(id)arg2;
- (id)createLayoutDataWithLayout:(id)arg1;
- (id)createSlotDataWithSlot:(id)arg1 unscheduledDueToError:(_Bool)arg2;
- (void)logEventWithType:(int)arg1 slot:(id)arg2 triggerBundle:(id)arg3;
- (void)logEventWithType:(int)arg1 opportunityType:(int)arg2 slotsFromOpportunity:(id)arg3;
- (void)logEventWithType:(int)arg1 slot:(id)arg2 layout:(id)arg3;
- (void)logEventWithType:(int)arg1 slot:(id)arg2 unscheduledDueToError:(_Bool)arg3;
- (void)logEvent:(int)arg1;
- (id)init;

@end

