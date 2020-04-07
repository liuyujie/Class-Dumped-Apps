//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNScrollSpeedTrackerDelegate-Protocol.h>
#import <T1Twitter/TFNViewControllerEventObserver-Protocol.h>

@class NSString, TFNDataViewController, TFNScrollSpeedTracker, TFSTimer, TLPClient, TNLLRUCache;
@protocol TNUNetworkQualityProvider;

@interface T1StatusLiveEngagementManager : NSObject <TFNScrollSpeedTrackerDelegate, TFNViewControllerEventObserver>
{
    _Bool _fetchUp;
    _Bool _scrolling;
    _Bool _trackingSuspended;
    unsigned long long _liveEngagementDisplayType;
    TFNDataViewController *_dataViewController;
    unsigned long long _cacheMinEntries;
    unsigned long long _cacheMaxEntries;
    id <TNUNetworkQualityProvider> _networkQualityProvider;
    TLPClient *_livePipelineClient;
    TNLLRUCache *_statusCache;
    TFNScrollSpeedTracker *_scrollTracker;
    TFSTimer *_trackVisibleStatusesTimer;
}

+ (id)statusFromItem:(id)arg1;
@property(nonatomic) _Bool trackingSuspended; // @synthesize trackingSuspended=_trackingSuspended;
@property(nonatomic) _Bool scrolling; // @synthesize scrolling=_scrolling;
@property(nonatomic) _Bool fetchUp; // @synthesize fetchUp=_fetchUp;
@property(readonly, nonatomic) TFSTimer *trackVisibleStatusesTimer; // @synthesize trackVisibleStatusesTimer=_trackVisibleStatusesTimer;
@property(readonly, nonatomic) TFNScrollSpeedTracker *scrollTracker; // @synthesize scrollTracker=_scrollTracker;
@property(readonly, nonatomic) TNLLRUCache *statusCache; // @synthesize statusCache=_statusCache;
@property(readonly, nonatomic) TLPClient *livePipelineClient; // @synthesize livePipelineClient=_livePipelineClient;
@property(readonly, nonatomic) id <TNUNetworkQualityProvider> networkQualityProvider; // @synthesize networkQualityProvider=_networkQualityProvider;
@property(nonatomic) unsigned long long cacheMaxEntries; // @synthesize cacheMaxEntries=_cacheMaxEntries;
@property(nonatomic) unsigned long long cacheMinEntries; // @synthesize cacheMinEntries=_cacheMinEntries;
@property(readonly, nonatomic) __weak TFNDataViewController *dataViewController; // @synthesize dataViewController=_dataViewController;
@property(readonly, nonatomic) unsigned long long liveEngagementDisplayType; // @synthesize liveEngagementDisplayType=_liveEngagementDisplayType;
- (void).cxx_destruct;
- (void)viewControllerViewDidFullyAppear:(id)arg1;
- (void)scrollSpeedTracker:(id)arg1 didEndScrollingScrollView:(id)arg2;
- (void)scrollSpeedTracker:(id)arg1 didScrollScrollView:(id)arg2 withScrollingDirection:(unsigned long long)arg3;
- (void)_trackVisibleStatusesWithDelay;
- (id)_statusItemsNearPath:(id)arg1 offset:(long long)arg2 count:(long long)arg3 fetchUp:(_Bool)arg4;
- (void)_applyConfiguration;
- (void)_updateConfiguration:(id)arg1;
- (id)_pruneCacheToSize:(unsigned long long)arg1;
- (id)_addStatus:(id)arg1;
- (void)_addStatusItems:(id)arg1 accumulateSubscriptions:(id)arg2;
- (void)_startTrackingStatusItems:(id)arg1 prefetchAtIndexPath:(id)arg2;
- (_Bool)_canStartTrackingStatusItems;
- (void)reset;
- (void)trackVisibleStatuses;
- (void)trackStatus:(id)arg1 atIndexPath:(id)arg2;
@property(readonly, nonatomic) _Bool isEnabled;
- (void)dealloc;
- (id)init;
- (id)initWithDataViewController:(id)arg1 livePipelineClient:(id)arg2 networkQualityProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
