//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, PHTPhenotypeFlags;

@interface CCTClearcutFlags : NSObject
{
    PHTPhenotypeFlags *_allFlags;
    NSMutableDictionary *_logSourceToSamplingRulesDict;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSMutableDictionary *logSourceToSamplingRulesDict; // @synthesize logSourceToSamplingRulesDict=_logSourceToSamplingRulesDict;
@property(readonly, nonatomic) PHTPhenotypeFlags *allFlags; // @synthesize allFlags=_allFlags;
- (void).cxx_destruct;
- (id)logSamplingRulesForLogSource:(long long)arg1;
@property(readonly, nonatomic) _Bool logSamplingRulesEnabled;
@property(readonly, nonatomic) unsigned long long collectForDebugCheckOnForegroundDelaySeconds;
@property(readonly, nonatomic) unsigned long long collectForDebugUploadIntervalSeconds;
@property(readonly, nonatomic) _Bool shouldSampleAllLogSources;
@property(readonly, nonatomic) _Bool batchUpload;
@property(readonly, nonatomic) _Bool shouldLogMetaEvents;
@property(readonly, nonatomic) _Bool shouldFlushMetaCounters;
@property(readonly, nonatomic) _Bool shouldLogMetaCounters;
@property(readonly, nonatomic) long long maxStorageSizeBytes;
@property(readonly, nonatomic) long long maxMetaCountersCount;
@property(readonly, nonatomic) long long logFileAgeCutoffMilliseconds;
@property(readonly, nonatomic) long long directoryConsideredOldPeriodMilliseconds;
@property(readonly, nonatomic) long long phenotypeUpdatePeriodMilliseconds;
@property(readonly, nonatomic) long long unmeteredOrDailyPeriodMilliseconds;
@property(readonly, nonatomic) long long onForegroundUploadPeriodMilliseconds;
@property(readonly, nonatomic) long long defaultUploadPeriodMilliseconds;
@property(readonly, nonatomic) long long autoUploadOnForegroundDelaySeconds;
@property(readonly, nonatomic) long long autoUploadLeewaySeconds;
@property(readonly, nonatomic) long long autoUploadPeriodSeconds;
@property(readonly, nonatomic) NSString *serverToken;
@property(readonly, nonatomic) NSString *phenotypePackageName;
- (void)update;
- (id)initWithPhenotypeFlags:(id)arg1;
- (id)initWithPhenotype:(id)arg1;

@end

