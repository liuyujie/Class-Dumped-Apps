//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTBannerViewDelegate-Protocol.h"
#import "SPTNowPlayingModeResolverObserver-Protocol.h"
#import "SPTNowPlayingStateObserver-Protocol.h"
#import "SPTWazeViewModelDelegate-Protocol.h"

@class NSString, SPTWazeViewModel;
@protocol GLUETheme, SPTBannerPresentationManager, SPTBannerPresentationManagerTicket, SPTExternalIntegrationDebugLog, SPTNowPlayingManager, SPTNowPlayingMode, SPTNowPlayingModeResolver, SPTNowPlayingStateObservable, SPTPartnerLogger, SPTPartnerService, SPTPartnerTestManager, SPTSlateBuilderProvider, SPTSlateManager;

@interface SPTWazePresenter : NSObject <SPTBannerViewDelegate, SPTNowPlayingModeResolverObserver, SPTNowPlayingStateObserver, SPTWazeViewModelDelegate>
{
    id <SPTBannerPresentationManagerTicket> _bannerTicket;
    id <SPTBannerPresentationManager> _bannerPresentationManager;
    id <SPTSlateManager> _slateManager;
    id <SPTSlateBuilderProvider> _slateBuilderProvider;
    id <SPTNowPlayingManager> _nowPlayingManager;
    id <SPTNowPlayingModeResolver> _nowPlayingModeResolver;
    id <SPTNowPlayingStateObservable> _nowPlayingStateObservable;
    id <SPTNowPlayingMode> _nowPlayingMode;
    SPTWazeViewModel *_viewModel;
    id <SPTExternalIntegrationDebugLog> _debugLog;
    id <GLUETheme> _glueTheme;
    id <SPTPartnerTestManager> _partnerTestManager;
    id <SPTPartnerLogger> _partnerLogger;
    id <SPTPartnerService> _partnerService;
}

@property(readonly, nonatomic) __weak id <SPTPartnerService> partnerService; // @synthesize partnerService=_partnerService;
@property(readonly, nonatomic) id <SPTPartnerLogger> partnerLogger; // @synthesize partnerLogger=_partnerLogger;
@property(readonly, nonatomic) id <SPTPartnerTestManager> partnerTestManager; // @synthesize partnerTestManager=_partnerTestManager;
@property(readonly, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(readonly, nonatomic) id <SPTExternalIntegrationDebugLog> debugLog; // @synthesize debugLog=_debugLog;
@property(readonly, nonatomic) __weak SPTWazeViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SPTNowPlayingMode> nowPlayingMode; // @synthesize nowPlayingMode=_nowPlayingMode;
@property(readonly, nonatomic) __weak id <SPTNowPlayingStateObservable> nowPlayingStateObservable; // @synthesize nowPlayingStateObservable=_nowPlayingStateObservable;
@property(readonly, nonatomic) __weak id <SPTNowPlayingModeResolver> nowPlayingModeResolver; // @synthesize nowPlayingModeResolver=_nowPlayingModeResolver;
@property(readonly, nonatomic) __weak id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
@property(readonly, nonatomic) id <SPTSlateBuilderProvider> slateBuilderProvider; // @synthesize slateBuilderProvider=_slateBuilderProvider;
@property(readonly, nonatomic) id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
@property(readonly, nonatomic) id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(retain, nonatomic) id <SPTBannerPresentationManagerTicket> bannerTicket; // @synthesize bannerTicket=_bannerTicket;
- (void).cxx_destruct;
- (void)nowPlayingViewWillAppear:(id)arg1;
- (void)modeResolver:(id)arg1 didChangeToMode:(id)arg2 fromMode:(id)arg3;
- (void)viewModelDidReceiveWazeDeepLink:(id)arg1;
- (void)viewModel:(id)arg1 didUpdateState:(long long)arg2;
- (void)closeButtonTappedInBannerView:(id)arg1;
- (void)actionButtonTappedInBannerView:(id)arg1;
- (_Bool)isNowPlayingViewInDrivingMode;
- (void)dismiss;
- (void)dismissCurrentWazeBanner;
- (void)presentWazeBannerItem:(id)arg1;
- (void)updatePresentation;
- (id)initWithBannerPresentationManager:(id)arg1 slateManager:(id)arg2 slateBuilderProvider:(id)arg3 glueTheme:(id)arg4 viewModel:(id)arg5 nowPlayingManager:(id)arg6 nowPlayingModeResolver:(id)arg7 nowPlayingStateObservable:(id)arg8 partnerTestManager:(id)arg9 debugLog:(id)arg10 partnerLogger:(id)arg11 partnerService:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

