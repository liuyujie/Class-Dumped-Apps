//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VEAudioEffectBase.h"

@interface IESMMAudioExciter : VEAudioEffectBase
{
    struct Exciter *_exciterLeft;
    struct Exciter *_exciterRight;
    struct unique_ptr<mammon::Effect, std::__1::default_delete<mammon::Effect>> _exciterProcessor;
    long long _sampleRate;
    double _gain;
    long long _highpassfreq;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)freeExciter;
- (void)flush;
- (void)processPlanarAudioWithInput:(float **)arg1 output:(float **)arg2 channels:(int)arg3 samplesPerChannel:(int)arg4;
- (void)processAudio:(float *)arg1 output:(float *)arg2 samples:(int)arg3 channel:(int)arg4;
- (_Bool)processBufferList:(struct AudioBufferList *)arg1 outputL:(float *)arg2 outputR:(float *)arg3;
- (void)updateFormat:(id)arg1;
- (void)initExciterWithGain:(double)arg1 highpassfreq:(long long)arg2 sampleRate:(long long)arg3;
- (id)initWithGain:(double)arg1 highpassfreq:(long long)arg2 sampleRate:(long long)arg3;

@end

