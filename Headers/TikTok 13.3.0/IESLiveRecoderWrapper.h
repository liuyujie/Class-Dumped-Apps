//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWELiveCamera-Protocol.h"
#import "IESLiveRecoder-Protocol.h"

@class IESMMRecoder, LiveStreamCapture, NSString, UIView;
@protocol IESLiveSettings;

@interface IESLiveRecoderWrapper : NSObject <IESLiveRecoder, AWELiveCamera>
{
    _Bool _firstFrameDidRendered;
    _Bool _useLiveCore;
    IESMMRecoder *_recoder;
    long long _previousResultCount;
    LiveStreamCapture *_capture;
    UIView *_renderPreView;
    id <IESLiveSettings> _settings;
}

@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(nonatomic) _Bool useLiveCore; // @synthesize useLiveCore=_useLiveCore;
@property(retain, nonatomic) UIView *renderPreView; // @synthesize renderPreView=_renderPreView;
@property(nonatomic) _Bool firstFrameDidRendered; // @synthesize firstFrameDidRendered=_firstFrameDidRendered;
@property(retain, nonatomic) LiveStreamCapture *capture; // @synthesize capture=_capture;
@property(nonatomic) long long previousResultCount; // @synthesize previousResultCount=_previousResultCount;
@property(retain, nonatomic) IESMMRecoder *recoder; // @synthesize recoder=_recoder;
- (void).cxx_destruct;
- (void)loadLiveStreamCaptureIfNeeded;
- (void)applyEffectKey:(id)arg1 image:(id)arg2;
- (void)setTorchOn:(_Bool)arg1;
- (void)switchFilterWithLeftPath:(id)arg1 rightPath:(id)arg2 progress:(double)arg3;
- (void)switchCameraSource;
- (void)stopVideoCapture;
- (void)stopAudioCapture;
- (void)startVideoCapture;
- (void)startAudioCapture;
- (void)setVideoProcessedCallback:(CDUnknownBlockType)arg1;
- (void)setVideoProcessedBufferCallback:(CDUnknownBlockType)arg1;
- (void)setMaxStickerMemoryCache:(unsigned long long)arg1;
- (void)setFaceDetectStatusBlock:(CDUnknownBlockType)arg1;
- (id)resetPreviewView:(id)arg1;
- (void)resetOutputSize:(struct CGSize)arg1;
- (void)resetPreferredFrameRate:(unsigned long long)arg1;
- (void)enableFrontCameraMirrored:(_Bool)arg1;
- (double)currentCameraZoomFactor;
- (_Bool)cameraSetZoomFactor:(double)arg1;
- (struct LSLiveIntensityParam_t)convertToLSIndensityFromLiveIndensity:(struct IESLiveIndensityParam_t)arg1;
- (struct IESIndensityParam_t)convertIndensityFromLiveIndensity:(struct IESLiveIndensityParam_t)arg1;
- (void)applyIndensity:(struct IESLiveIndensityParam_t)arg1 type:(long long)arg2;
- (void)applyEffect:(id)arg1 type:(long long)arg2 enableFakeFace:(_Bool)arg3;
- (void)applyEffect:(id)arg1 type:(long long)arg2;
- (void)updateComposerNode:(id)arg1 tag:(id)arg2 value:(double)arg3;
- (void)applyComposerNodes:(id)arg1 enableFakeFace:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long preferedFrameRate;
@property(readonly, nonatomic) struct CGSize outputSize;
- (void)setPureCameraMode:(_Bool)arg1;
@property(nonatomic) _Bool ignoreNotification;
@property(nonatomic) long long cameraFlashMode;
@property(readonly, nonatomic) long long currentCameraPosition;
@property(readonly, nonatomic) long long status;
- (id)initWithRecoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
