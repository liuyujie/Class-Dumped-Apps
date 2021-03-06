//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HTSLiveCameraEffectProvider-Protocol.h"

@class LiveStreamCapture, NSString;
@protocol IESLiveCamera, IESLiveRecoderService, IESLiveSettings;

@interface HTSLiveSmallCameraPreviewView : UIView <HTSLiveCameraEffectProvider>
{
    _Bool _inPreviewMode;
    id <IESLiveCamera> _camera;
    id <IESLiveSettings> _settings;
    id <IESLiveRecoderService> _recoderFactory;
    LiveStreamCapture *_capture;
}

@property(retain, nonatomic) LiveStreamCapture *capture; // @synthesize capture=_capture;
@property(retain, nonatomic) id <IESLiveRecoderService> recoderFactory; // @synthesize recoderFactory=_recoderFactory;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) _Bool inPreviewMode; // @synthesize inPreviewMode=_inPreviewMode;
@property(retain, nonatomic) id <IESLiveCamera> camera; // @synthesize camera=_camera;
- (void).cxx_destruct;
- (id)cameraPreview;
- (void)stopVideoEffectProcess;
- (void)startVideoEffectProcess;
- (id)liveCapture;
- (void)loadCamera;
- (void)stopPreview;
- (void)startPreview;
- (void)switchCameraSource;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

