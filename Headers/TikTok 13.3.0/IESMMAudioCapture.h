//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface IESMMAudioCapture : NSObject
{
    _Bool _needConvert;
    _Bool _isCaptureStarted;
    CDUnknownBlockType _audioCaptureBlock;
    CDUnknownBlockType _audioConvertCallback;
    unsigned long long _sampleRate;
    unsigned long long _channelNum;
    NSTimer *_timer;
    double _currentHeartBeat;
    struct OpaqueAudioComponent *_component;
    struct OpaqueAudioComponentInstance *_componetInstance;
    struct OpaqueAudioConverter *_audioConverter;
    struct AudioBuffer _dstAudioBuffer;
    struct AudioBufferList _bufferList;
    struct AudioStreamBasicDescription _convertDesc;
}

@property(nonatomic) struct AudioStreamBasicDescription convertDesc; // @synthesize convertDesc=_convertDesc;
@property(nonatomic) struct AudioBufferList bufferList; // @synthesize bufferList=_bufferList;
@property(nonatomic) struct AudioBuffer dstAudioBuffer; // @synthesize dstAudioBuffer=_dstAudioBuffer;
@property(nonatomic) struct OpaqueAudioConverter *audioConverter; // @synthesize audioConverter=_audioConverter;
@property(nonatomic) struct OpaqueAudioComponentInstance *componetInstance; // @synthesize componetInstance=_componetInstance;
@property(nonatomic) struct OpaqueAudioComponent *component; // @synthesize component=_component;
@property(nonatomic) double currentHeartBeat; // @synthesize currentHeartBeat=_currentHeartBeat;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool isCaptureStarted; // @synthesize isCaptureStarted=_isCaptureStarted;
@property(nonatomic) unsigned long long channelNum; // @synthesize channelNum=_channelNum;
@property(nonatomic) unsigned long long sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) _Bool needConvert; // @synthesize needConvert=_needConvert;
@property(copy, nonatomic) CDUnknownBlockType audioConvertCallback; // @synthesize audioConvertCallback=_audioConvertCallback;
@property(copy, nonatomic) CDUnknownBlockType audioCaptureBlock; // @synthesize audioCaptureBlock=_audioCaptureBlock;
- (void).cxx_destruct;
- (_Bool)isAudioCaptureRuning;
- (void)dealloc;
- (_Bool)isUseExternalPluggUseA2DP;
- (void)convertAudioBuffer:(struct AudioBuffer)arg1 timeInfo:(CDStruct_505dd565)arg2;
- (void)stopAudioCapture;
- (void)startAudioCapture:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) struct AudioStreamBasicDescription audioDescription;
- (void)heartBeatListen;
- (void)initAudioConvert;
- (void)initMicrophoneSource;
- (id)init;

@end
