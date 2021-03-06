//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FPRRemoteConfigFlags;

@interface FPRConfigurations : NSObject
{
    unsigned long long _sources;
    FPRRemoteConfigFlags *_remoteConfigFlags;
}

+ (void)reset;
+ (id)sharedInstance;
@property(retain, nonatomic) FPRRemoteConfigFlags *remoteConfigFlags; // @synthesize remoteConfigFlags=_remoteConfigFlags;
@property(nonatomic) unsigned long long sources; // @synthesize sources=_sources;
- (void).cxx_destruct;
- (unsigned int)memorySamplingFrequencyInBackgroundInMS;
- (unsigned int)memorySamplingFrequencyInForegroundInMS;
- (unsigned int)cpuSamplingFrequencyInBackgroundInMS;
- (unsigned int)cpuSamplingFrequencyInForegroundInMS;
- (unsigned int)maxSessionLengthInMinutes;
- (float)sessionsSamplingPercentage;
- (unsigned int)backgroundNetworkEventTimeLimitForLogSource:(int)arg1;
- (unsigned int)backgroundNetworkEventCountForLogSource:(int)arg1;
- (unsigned int)foregroundNetworkEventTimeLimitForLogSource:(int)arg1;
- (unsigned int)foregroundNetworkEventCountForLogSource:(int)arg1;
- (unsigned int)backgroundEventTimeLimitForLogSource:(int)arg1;
- (unsigned int)backgroundEventCountForLogSource:(int)arg1;
- (unsigned int)foregroundEventTimeLimitForLogSource:(int)arg1;
- (unsigned int)foregroundEventCountForLogSource:(int)arg1;
- (float)logNetworkSamplingRateForLogSource:(int)arg1;
- (float)logTraceSamplingRateForLogSource:(int)arg1;
@property(nonatomic) int logSource;
- (id)sdkDisabledVersions;
@property(readonly, nonatomic) _Bool sdkEnabled;
@property(nonatomic, getter=isInstrumentationEnabled) _Bool instrumentationEnabled;
@property(nonatomic, getter=isDataCollectionEnabled) _Bool dataCollectionEnabled;
- (_Bool)hasRemoteConfigFetchHappened;
- (void)setupRemoteConfigFlags;
- (void)update;
- (void)registerForNotifications;
- (id)initWithSources:(unsigned long long)arg1;

@end

