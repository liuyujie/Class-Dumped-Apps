//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MDXTriggerConditions-Protocol.h"

@class NSArray, NSString;

@interface MDXPromotionTriggerConditions : NSObject <MDXTriggerConditions>
{
    _Bool _HDRequired;
    _Bool _playingPlaylistRequired;
    _Bool _SDRequired;
    long long _requiredAppPageType;
    long long _promotionBeingEvaluatedForShownTimes;
    long long _promotionResponsibleForWait;
    long long _availableSessionsTimePeriod;
    long long _connectionCountTimePeriod;
    NSArray *_availableDays;
    NSArray *_timeOfDayRanges;
    double _timeIntervalToWaitSincePromotion;
    long long _minAvailableSessions;
    long long _minConnectionCount;
    long long _minUncastedVideoCount;
    long long _minVideoDurationInSeconds;
    long long _maxNumberOfTimesPromotionShown;
    long long _minNumberOfTimesPromotionShown;
}

- (void).cxx_destruct;
- (_Bool)areRequiredTimesOfDaySatisfied;
- (_Bool)isAvailableDaySatisfied;
- (_Bool)isPromotionShownCountSatisfiedWithPromotionHistory:(id)arg1;
- (_Bool)hasWaitedTimeIntervalForPromotionWithPromotionHistory:(id)arg1;
- (_Bool)isAppStateRequirementMetWithAppStateRecorder:(id)arg1;
- (_Bool)isSDRequirementMetWithAppStateRecorder:(id)arg1;
- (_Bool)isHDRequirementMetWithAppStateRecorder:(id)arg1;
- (_Bool)isPlaylistPlayingRequirementMetWithAppStateRecorder:(id)arg1;
- (_Bool)isMinUncastedVideoCountSatisfiedWithAppStateRecorder:(id)arg1;
- (_Bool)isMinVideoDurationSatisfiedWithAppStateRecorder:(id)arg1;
- (_Bool)isMinConnectionCountSatisfiedWithInteractionHistory:(id)arg1;
- (_Bool)areMinAvailableSessionsSatisfiedWithInteractionHistory:(id)arg1;
- (void)setAvailableDays:(id)arg1;
- (void)setTimeOfDayRanges:(id)arg1;
- (void)setExpectationForPromotion:(long long)arg1 toHaveBeenShownMinTimes:(long long)arg2 maxTimes:(long long)arg3;
- (void)setTimeIntervalToWait:(double)arg1 sincePromotion:(long long)arg2;
- (void)requireSD;
- (void)requireHD;
- (void)requirePlayingPlaylist;
- (void)setRequiredAppPageType:(long long)arg1;
- (void)setMinUncastedVideoCount:(long long)arg1;
- (void)setMinVideoDurationInSeconds:(long long)arg1;
- (void)setMinConnectionCount:(long long)arg1 timePeriod:(long long)arg2;
- (void)setMinAvailableSessions:(long long)arg1 timePeriod:(long long)arg2;
- (_Bool)areSatisfiedWithInteractionHistory:(id)arg1 elementActionHistory:(id)arg2 appStateRecorder:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
