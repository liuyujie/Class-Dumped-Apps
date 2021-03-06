//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/FBARCameraCapabilitiesProviding-Protocol.h>
#import <InstagramAppCoreFramework/FBCCCaptureModeManaging-Protocol.h>
#import <InstagramAppCoreFramework/FBCCSampleBufferCallbackProviding-Protocol.h>
#import <InstagramAppCoreFramework/FBCaptureCoordinatorFilterManaging-Protocol.h>
#import <InstagramAppCoreFramework/FBCaptureCoordinatorSubclassProtocol-Protocol.h>
#import <InstagramAppCoreFramework/FBCaptureModeCoordinating-Protocol.h>
#import <InstagramAppCoreFramework/UIGestureRecognizerDelegate-Protocol.h>

@class FBCCDataPipe, FBCCGestureCaptureController, FBCCGestureDataPipe, FBCaptureCoordinatorFilter, FBCaptureCoordinatorFilterResourcesManager, FBMPCameraInfoInput, FBMPCaptureEventInput, FBMPDataCallbackOutput, FBMPRenderer, FBMPSession, FBTimer, NSArray, NSOperationQueue, NSString;
@protocol FBAREngineAsyncAssetLoading, FBCCCTScanEventTracking, FBCCPerformanceLogger, FBCaptureCoordinatorBaseLongPressGestureDelegate, FBCaptureCoordinatorBasePanGestureDelegate, FBCaptureCoordinatorBasePinchGestureDelegate, FBCaptureCoordinatorBaseRotationGestureDelegate, FBCaptureCoordinatorBaseTapGestureDelegate, FBCaptureCoordinatorFilterFactoryProtocol, FBCaptureMode, FBCaptureSessionWaterfallLogging, FBMPFilter, FBMPInput, OS_dispatch_queue;

@interface FBCaptureCoordinatorBase : NSObject <FBCaptureModeCoordinating, FBCaptureCoordinatorSubclassProtocol, UIGestureRecognizerDelegate, FBCCCaptureModeManaging, FBARCameraCapabilitiesProviding, FBCaptureCoordinatorFilterManaging, FBCCSampleBufferCallbackProviding>
{
    id <FBCCPerformanceLogger> _performanceLogger;
    long long _framerateCap;
    id <FBCaptureMode> _currentCaptureMode;
    FBTimer *_performanceTimer;
    id <FBCaptureSessionWaterfallLogging> _waterfallLogger;
    FBCaptureCoordinatorFilterResourcesManager *_filterResourcesManager;
    FBCCDataPipe *_videoDataPipe;
    FBCaptureCoordinatorFilter *_defaultVideoFilter;
    FBCCDataPipe *_audioDataPipe;
    FBMPDataCallbackOutput *_videoBufferCallbackOutput;
    NSObject<OS_dispatch_queue> *_videoBufferCallbackQueue;
    CDUnknownBlockType _videoBufferCallback;
    FBMPDataCallbackOutput *_audioBufferCallbackOutput;
    NSObject<OS_dispatch_queue> *_audioBufferCallbackQueue;
    CDUnknownBlockType _audioBufferCallback;
    FBCCGestureCaptureController *_gestureCaptureController;
    FBCCGestureDataPipe *_tapGestureDataPipe;
    FBCCGestureDataPipe *_panGestureDataPipe;
    FBCCGestureDataPipe *_pinchGestureDataPipe;
    FBCCGestureDataPipe *_rawTouchGestureDataPipe;
    FBCCGestureDataPipe *_rotationGestureDataPipe;
    FBCCGestureDataPipe *_longPressGestureDataPipe;
    FBCCDataPipe *_cameraInfoDataPipe;
    FBCCDataPipe *_captureEventDataPipe;
    FBCCDataPipe *_worldTrackingDataPipe;
    FBCCDataPipe *_worldTrackingFrameDataPipe;
    NSOperationQueue *_filterUpdateQueue;
    NSString *_effectSessionID;
    struct FBRendererConfiguration _rendererConfiguration;
    FBMPRenderer *_filterRenderer;
    FBMPSession *_mediaSession;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSString *_sessionID;
    struct mutex _sessionIDMutex;
    id <FBCaptureCoordinatorBaseTapGestureDelegate> _tapGestureDelegate;
    id <FBCaptureCoordinatorBasePanGestureDelegate> _panGestureDelegate;
    id <FBCaptureCoordinatorBasePinchGestureDelegate> _pinchGestureDelegate;
    id <FBCaptureCoordinatorBaseRotationGestureDelegate> _rotationGestureDelegate;
    id <FBCaptureCoordinatorBaseLongPressGestureDelegate> _longPressGestureDelegate;
    id <FBAREngineAsyncAssetLoading> _asyncAssetLoaderAdapter;
    id <FBMPFilter> _filterAudioRenderer;
    id <FBCaptureCoordinatorFilterFactoryProtocol> _filterFactory;
    FBMPCameraInfoInput *_cameraInfoInput;
    FBMPCaptureEventInput *_captureEventInput;
    id <FBCCCTScanEventTracking> _ctScanEventTracker;
}

@property(readonly, nonatomic) FBCCDataPipe *worldTrackingFrameDataPipe; // @synthesize worldTrackingFrameDataPipe=_worldTrackingFrameDataPipe;
@property(readonly, nonatomic) FBCCDataPipe *worldTrackingDataPipe; // @synthesize worldTrackingDataPipe=_worldTrackingDataPipe;
@property(readonly, nonatomic) FBCCDataPipe *audioDataPipe; // @synthesize audioDataPipe=_audioDataPipe;
@property(readonly, nonatomic) FBCCDataPipe *videoDataPipe; // @synthesize videoDataPipe=_videoDataPipe;
@property(nonatomic) long long framerateCap; // @synthesize framerateCap=_framerateCap;
@property(readonly, nonatomic) id <FBCCCTScanEventTracking> ctScanEventTracker; // @synthesize ctScanEventTracker=_ctScanEventTracker;
@property(readonly, nonatomic) id <FBCaptureSessionWaterfallLogging> waterfallLogger; // @synthesize waterfallLogger=_waterfallLogger;
@property(readonly, nonatomic) id <FBCCPerformanceLogger> performanceLogger; // @synthesize performanceLogger=_performanceLogger;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue; // @synthesize sessionQueue=_sessionQueue;
@property(readonly, nonatomic) FBMPSession *mediaSession; // @synthesize mediaSession=_mediaSession;
@property(readonly, nonatomic) id <FBCaptureCoordinatorFilterFactoryProtocol> filterFactory; // @synthesize filterFactory=_filterFactory;
@property(readonly, nonatomic) id <FBMPFilter> filterAudioRenderer; // @synthesize filterAudioRenderer=_filterAudioRenderer;
@property(readonly, nonatomic) FBMPRenderer *filterRenderer; // @synthesize filterRenderer=_filterRenderer;
@property(readonly, nonatomic) FBCCGestureCaptureController *gestureCaptureController; // @synthesize gestureCaptureController=_gestureCaptureController;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long supportedCameraCapabilities;
- (void)setAudioBufferCallbackWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setVideoBufferCallbackWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)exportFilterConfigsWithCompletion:(CDUnknownBlockType)arg1;
- (id)filterFromDescriptor:(id)arg1 error:(id *)arg2;
- (void)_mountCaptureMode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mountCaptureMode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)defaultInputForDataPipe:(id)arg1;
- (void)setAnalyticsProductName:(unsigned long long)arg1;
- (void)setGestureCaptureControllerDelegate:(id)arg1;
@property(readonly, nonatomic) id <FBMPInput> worldTrackingDataInput;
@property(readonly, nonatomic) FBMPCaptureEventInput *captureEventInput; // @synthesize captureEventInput=_captureEventInput;
@property(readonly, nonatomic) FBMPCameraInfoInput *cameraInfoInput; // @synthesize cameraInfoInput=_cameraInfoInput;
@property(nonatomic) struct CGRect contentRectInPreview;
- (void)removeCaptureGestureRecognizersFromView:(id)arg1;
- (void)attachCaptureGestureRecognizersToView:(id)arg1;
- (void)sessionDidStop;
- (void)sessionDidStart;
- (void)setSessionID:(id)arg1;
- (id)filterPerformanceExtras;
- (void)_didCompleteFetchingPerformanceForFilters:(id)arg1 perfMap:(struct NSMapTable *)arg2 reason:(id)arg3 parameters:(id)arg4;
- (void)filterTopologyDidChange;
- (void)logCurrentFilterPerformanceWithReason:(id)arg1 parameters:(id)arg2;
- (id)_requiredFilterResourcesForFilterWithName:(id)arg1;
@property(readonly, nonatomic) FBCaptureCoordinatorFilterResourcesManager *filterResourcesManager;
- (_Bool)isOnlyIdentityAudioFilterActive;
- (_Bool)isOnlyIdentityVideoFilterActive;
- (id)_gestureDataPipes;
- (id)_nonCaptureModeDataPipes;
- (id)_captureModeDataPipes;
- (id)_allDataPipes;
@property(readonly, nonatomic) Class audioFilterChainDataType;
@property(readonly, nonatomic) Class videoFilterChainDataType;
- (id)audioFilterChainOutput;
- (id)audioFilterChainInput;
- (id)videoFilterChainOutput;
- (id)videoFilterChainInput;
- (void)disconnectSession;
- (void)stopSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_stopPerformanceTimer;
- (void)_startPerformanceTimer;
- (void)startSessionWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (id)preview;
- (void)_didUpdateVideoFilters:(id)arg1 error:(id)arg2;
- (id)_filterFromDescriptor:(id)arg1 error:(id *)arg2;
- (struct FBCCUpdateBundle)_updateBundleForSettingFilters:(id)arg1 error:(id *)arg2;
- (void)_performUpdateWithFilterDescriptors:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_enqueueTransaction:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) FBCaptureCoordinatorFilter *currentAudioFilter;
@property(readonly, nonatomic) id <FBMPFilter> lastFilter;
@property(readonly, nonatomic) id <FBMPFilter> firstFilter;
- (void)clearInMemoryCacheWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSArray *currentFilters;
- (void)logFilterPerformanceOnEventNamed:(id)arg1 extras:(id)arg2;
- (void)setFilters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setupDataCallbackOutputConnections;
- (void)_setupGestureConnections;
- (void)dealloc;
- (id)initWithFilterFactory:(id)arg1 captureCoordinatorLogger:(id)arg2 rendererConfiguration:(const struct FBRendererConfiguration *)arg3 gestureConfiguration:(const struct FBGestureConfiguration *)arg4 videoDataQueue:(id)arg5 audioDataQueue:(id)arg6 defaultVideoFilter:(id)arg7 asyncAssetLoaderAdapter:(id)arg8;
- (id)initWithFilterFactory:(id)arg1 captureCoordinatorLogger:(id)arg2 rendererConfiguration:(const struct FBRendererConfiguration *)arg3 gestureConfiguration:(const struct FBGestureConfiguration *)arg4;
@property(readonly, nonatomic) __weak id <FBCaptureCoordinatorBaseLongPressGestureDelegate> longPressGestureDelegate;
@property(readonly, nonatomic) __weak id <FBCaptureCoordinatorBaseRotationGestureDelegate> rotationGestureDelegate;
@property(readonly, nonatomic) __weak id <FBCaptureCoordinatorBasePinchGestureDelegate> pinchGestureDelegate;
@property(readonly, nonatomic) __weak id <FBCaptureCoordinatorBasePanGestureDelegate> panGestureDelegate;
@property(readonly, nonatomic) __weak id <FBCaptureCoordinatorBaseTapGestureDelegate> tapGestureDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

