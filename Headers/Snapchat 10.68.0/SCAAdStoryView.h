//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAAdStoryView : SCAUserTrackedEvent
{
}

- (void)setViewSource:(long long)arg1;
- (void)setViewLocationPos:(long long)arg1;
- (void)setViewLocation:(long long)arg1;
- (void)setTotalMediaDurationInSec:(double)arg1;
- (void)setTimeViewed:(double)arg1;
- (void)setTabType:(id)arg1;
- (void)setStoryTypeSpecific:(long long)arg1;
- (void)setStoryType:(long long)arg1;
- (void)setStorySessionId:(long long)arg1;
- (void)setSource:(long long)arg1;
- (void)setSnapIndexCount:(long long)arg1;
- (void)setSnapCount:(long long)arg1;
- (void)setPosterId:(id)arg1;
- (void)setNumSnapsViewed:(long long)arg1;
- (void)setNumSnapsUniqueViewed:(long long)arg1;
- (void)setFullView:(_Bool)arg1;
- (void)setExitEvent:(long long)arg1;
- (void)setAutoAdvanceIndex:(long long)arg1;
- (void)setAdsnapPlacementId:(id)arg1;
- (void)setAdsnapLineItemId:(id)arg1;
- (void)setAdUnitId:(id)arg1;
- (void)setAdRequestClientId:(id)arg1;
- (void)setAdProductSourceType:(long long)arg1;
- (void)setAdId:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end
