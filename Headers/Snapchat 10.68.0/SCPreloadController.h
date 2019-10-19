//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPreloadControllerProtocol-Protocol.h"
#import "SCPreloadInfoProvider-Protocol.h"

@class NSString, SCPreloadListenerAnnouncer;
@protocol SCObserving, SCPerforming;

@interface SCPreloadController : NSObject <SCPreloadControllerProtocol, SCPreloadInfoProvider>
{
    SCPreloadListenerAnnouncer *_announcer;
    long long _connectivity;
    double _preloadModeCachedTime;
    CDUnknownBlockType _connectivityProvider;
    id <SCObserving> _travelModeObserveContext;
    _Bool _isUserSessionConfigured;
    _Bool _travelModeUserEnabled;
    long long _preloadMode;
    long long _bandwidthClass;
    double _dataSaverExpirationMillis;
    id <SCPerforming> _queuePerformer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <SCPerforming> queuePerformer; // @synthesize queuePerformer=_queuePerformer;
@property double dataSaverExpirationMillis; // @synthesize dataSaverExpirationMillis=_dataSaverExpirationMillis;
@property _Bool travelModeUserEnabled; // @synthesize travelModeUserEnabled=_travelModeUserEnabled;
@property long long bandwidthClass; // @synthesize bandwidthClass=_bandwidthClass;
@property(readonly, nonatomic) _Bool isUserSessionConfigured; // @synthesize isUserSessionConfigured=_isUserSessionConfigured;
- (void).cxx_destruct;
- (void)configureWithUserSession:(id)arg1;
@property long long preloadMode; // @synthesize preloadMode=_preloadMode;
- (_Bool)travelModeEnabled;
- (void)logPreloadMode;
- (_Bool)isUnderPoorBandwidth;
- (_Bool)shouldPrefetchExpensiveContent;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (_Bool)isUnderWifi;
- (void)_updatePreloadMode;
- (void)_didLogout;
- (void)updatePreloadMode;
- (void)_bandwidthClassChanged:(id)arg1;
- (void)_networkConnectivityChanged:(id)arg1;
- (void)_appWillEnterForeground;
- (id)initWithConnectivity:(long long)arg1 queuePerformer:(id)arg2 networkConnectivityProvider:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
