//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/RCCVideoToolboxEncoderDelegate-Protocol.h>
#import <Module_Framework/RTCVideoEncoder-Protocol.h>

@class NSString, RTCVideoCodecInfo, RTCVideoEncoderQpThresholds;
@protocol RCCVideoEncoderDelegate;

@interface RCCVideoEncoderHEVC : NSObject <RTCVideoEncoder, RCCVideoToolboxEncoderDelegate>
{
    RTCVideoCodecInfo *_codecInfo;
    unsigned int _initialTargetBitrateBPS;
    unsigned int _encoderBitrateBPS;
    CDUnknownBlockType _callback;
    int _width;
    int _height;
    struct OpaqueVTCompressionSession *_compressionSession;
    unsigned long long _mode;
    struct unique_ptr<webrtc::BitstreamParser, std::__1::default_delete<webrtc::BitstreamParser>> _bitstreamParser;
    struct unique_ptr<rtc::MovingAverage, std::__1::default_delete<rtc::MovingAverage>> _averageFPS;
    struct unique_ptr<rtc::MovingAverage, std::__1::default_delete<rtc::MovingAverage>> _averageBitrateBPS;
    vector_aab22ae2 _frameScaleBuffer;
    unsigned int _currentPixelFormat;
    long long _fallbackBPSThreshold;
    long long _fallbackMeasurementIntervalSeconds;
    RTCVideoEncoderQpThresholds *_scalingSettings;
    id <RCCVideoEncoderDelegate> _delegate;
}

@property(nonatomic) __weak id <RCCVideoEncoderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) RTCVideoEncoderQpThresholds *scalingSettings; // @synthesize scalingSettings=_scalingSettings;
@property(nonatomic) long long fallbackMeasurementIntervalSeconds; // @synthesize fallbackMeasurementIntervalSeconds=_fallbackMeasurementIntervalSeconds;
@property(nonatomic) long long fallbackBPSThreshold; // @synthesize fallbackBPSThreshold=_fallbackBPSThreshold;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)frameEncodedWithStatus:(int)arg1 flags:(unsigned int)arg2 sampleBuffer:(struct opaqueCMSampleBuffer *)arg3 codecSpecificInfo:(id)arg4 width:(int)arg5 height:(int)arg6 renderTimeMs:(long long)arg7 timestamp:(unsigned int)arg8 rotation:(long long)arg9;
- (void)setBitrateBPS:(unsigned int)arg1;
- (void)destroyCompressionSession;
- (void)configureCompressionSession;
- (int)resetCompressionSessionWithPixelFormat:(unsigned int)arg1;
- (long long)releaseEncoder;
- (id)implementationName;
- (int)setBitrate:(unsigned int)arg1 framerate:(unsigned int)arg2;
- (void)setCallback:(CDUnknownBlockType)arg1;
- (long long)encode:(id)arg1 codecSpecificInfo:(id)arg2 frameTypes:(id)arg3;
- (long long)startEncodeWithSettings:(id)arg1 numberOfCores:(int)arg2;
- (void)dealloc;
- (id)initWithCodecInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

