//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGCameraLegacyEffectTrayDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGCameraViewControllerAREffectDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGVideoCallAREffectViewControllerInterface-Protocol.h>

@class IGCameraLegacyEffectTray, IGUserSession, IGVideoCallLoggingContext, NSString;
@protocol IGAlertHUDHandling, IGVideoCallAREffectSelectionDelegate, IGVideoCallCaptureCoordinatorAREffectProtocol;

@interface IGVideoCallAREffectViewController : UIViewController <IGCameraLegacyEffectTrayDataSource, IGCameraViewControllerAREffectDelegate, IGVideoCallAREffectViewControllerInterface>
{
    IGUserSession *_userSession;
    id <IGVideoCallCaptureCoordinatorAREffectProtocol> _captureCoordinator;
    IGVideoCallLoggingContext *_loggingContext;
    id <IGVideoCallAREffectSelectionDelegate> _delegate;
    id <IGAlertHUDHandling> _alertPresenter;
    IGCameraLegacyEffectTray *_faceFiltersTray;
    NSString *_lastAppliedEffectId;
}

- (void).cxx_destruct;
- (long long)arEffectTrayViewLoggingSurface:(id)arg1;
- (_Bool)arEffectTrayViewShouldDisplayDiscoveryEntryPoint:(id)arg1;
- (void)cameraViewController:(id)arg1 didFailFetchWithError:(id)arg2;
- (void)cameraViewController:(id)arg1 didFailFetchForEffectTarget:(id)arg2 response:(id)arg3;
- (void)cameraViewController:(id)arg1 didCompleteFetchForEffectTarget:(id)arg2;
- (void)cameraViewController:(id)arg1 didBeginFetchingEffectTarget:(id)arg2;
- (void)cameraViewControllerIsReadyToProcessNewAREffect:(id)arg1;
- (void)arEffectApplicator:(id)arg1 didApplyAREffectWithID:(id)arg2 effectInstanceID:(id)arg3 effectAttribution:(id)arg4 cameraPosition:(long long)arg5;
- (void)arEffectApplicatorWillUnApplyAREffect:(id)arg1 isSwitchingAREffect:(_Bool)arg2;
- (void)arEffectApplicator:(id)arg1 willApplyAREffect:(id)arg2;
- (void)instructionServiceHandlerRequestsHideAREffectInstructions:(id)arg1;
- (void)instructionServiceHandler:(id)arg1 requestsShowAREffectInstructions:(id)arg2 forDuration:(double)arg3;
- (void)arEffectApplicatorDidFailToDownloadRemoteModel:(id)arg1;
- (void)arEffectApplicatorDidFailToDownload:(id)arg1;
- (void)arEffectApplicator:(id)arg1 didFailFetchWithError:(id)arg2;
- (void)arEffectApplicator:(id)arg1 didFailWithTargetEffectResponse:(id)arg2;
- (void)arEffectApplicatorDidUpdateEffectList:(id)arg1 fromNetwork:(_Bool)arg2;
- (void)arEffectApplicator:(id)arg1 didUpdateAREffectTouchSupportedStatus:(_Bool)arg2;
- (void)arEffectApplicatorUserDidTurnOffAREffect:(id)arg1;
- (void)arEffectApplicatorHairSegmentationDidBecomeAvailable:(id)arg1;
- (void)arEffectApplicatorSegmentationDidBecomeAvailable:(id)arg1;
- (void)arEffectApplicatorAREffectDidBecomeAvailable:(id)arg1;
- (void)arEffectApplicator:(id)arg1 didDownloadAREffectAsset:(id)arg2;
- (id)selectedAREffectId;
- (void)reapplyAREffect;
- (void)hideAREffectTray:(_Bool)arg1;
- (void)showAREffectTray:(_Bool)arg1 isTallDevice:(_Bool)arg2;
- (_Bool)isAREffectTrayVisible;
- (void)_createFaceFiltersTray;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 captureCoordinator:(id)arg2 loggingContext:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

