//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTFeedFeatureFlags-Protocol.h"

@class NSString, SPTObserverManager;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTFollowFeedService, SPTLocalSettings;

@interface SPTFeedFeatureFlagsManager : NSObject <SPTFeatureFlagSignalObserver, SPTFeedFeatureFlags>
{
    _Bool _isFeedFeatureEnabled;
    _Bool _isFeedFilterFeatureEnabled;
    _Bool _homeFeedButtonEnabledEmployeesOnly;
    _Bool _collectionFeedEnabledEmployeesOnly;
    _Bool _algorithmicEndpointEnabled;
    id <SPTFeatureFlagSignal> _feedFeatureFlagSignal;
    double _feedUpdateTimeInterval;
    long long _feedIcon;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTLocalSettings> _localSettings;
    id <SPTFeatureFlagSignal> _feedHomePageFeatureFlagSignal;
    id <SPTFeatureFlagSignal> _feedArtistCollectionFeatureFlagSignal;
    id <SPTFeatureFlagSignal> _feedFiltersFeatureFlagSignal;
    id <SPTFeatureFlagSignal> _feedAlgorithmicFeatureFlagSignal;
    SPTObserverManager *_observers;
    id <SPTFollowFeedService> _followFeedService;
}

@property(readonly, nonatomic) __weak id <SPTFollowFeedService> followFeedService; // @synthesize followFeedService=_followFeedService;
@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> feedAlgorithmicFeatureFlagSignal; // @synthesize feedAlgorithmicFeatureFlagSignal=_feedAlgorithmicFeatureFlagSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> feedFiltersFeatureFlagSignal; // @synthesize feedFiltersFeatureFlagSignal=_feedFiltersFeatureFlagSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> feedArtistCollectionFeatureFlagSignal; // @synthesize feedArtistCollectionFeatureFlagSignal=_feedArtistCollectionFeatureFlagSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> feedHomePageFeatureFlagSignal; // @synthesize feedHomePageFeatureFlagSignal=_feedHomePageFeatureFlagSignal;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(nonatomic) long long feedIcon; // @synthesize feedIcon=_feedIcon;
@property(nonatomic) double feedUpdateTimeInterval; // @synthesize feedUpdateTimeInterval=_feedUpdateTimeInterval;
@property(nonatomic, getter=isAlgorithmicEndpointEnabled) _Bool algorithmicEndpointEnabled; // @synthesize algorithmicEndpointEnabled=_algorithmicEndpointEnabled;
@property(nonatomic, getter=isCollectionFeedEnabledEmployeesOnly) _Bool collectionFeedEnabledEmployeesOnly; // @synthesize collectionFeedEnabledEmployeesOnly=_collectionFeedEnabledEmployeesOnly;
@property(nonatomic, getter=isHomeFeedButtonEnabledEmployeesOnly) _Bool homeFeedButtonEnabledEmployeesOnly; // @synthesize homeFeedButtonEnabledEmployeesOnly=_homeFeedButtonEnabledEmployeesOnly;
@property(nonatomic, getter=isFeedFilterFeatureEnabled) _Bool isFeedFilterFeatureEnabled; // @synthesize isFeedFilterFeatureEnabled=_isFeedFilterFeatureEnabled;
@property(nonatomic, getter=isFeedFeatureEnabled) _Bool isFeedFeatureEnabled; // @synthesize isFeedFeatureEnabled=_isFeedFeatureEnabled;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> feedFeatureFlagSignal; // @synthesize feedFeatureFlagSignal=_feedFeatureFlagSignal;
- (void).cxx_destruct;
- (id)featureFlagSignalWithABBAKey:(id)arg1 enabledForValues:(id)arg2 settingsItemTitle:(id)arg3 settingsItemDescription:(id)arg4;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)removeFeedFeatureFlagObserver:(id)arg1;
- (void)addFeedFeatureFlagObserver:(id)arg1;
- (void)logHomeFeedButtonEnabledFlagExposure;
- (void)dealloc;
@property(readonly, nonatomic, getter=isNewFollowFeedEnabled) _Bool newFollowFeedEnabled;
- (void)setupFeedFeatureFlags;
- (id)initWithFeatureFlagFactory:(id)arg1 localSettings:(id)arg2 followFeedService:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
