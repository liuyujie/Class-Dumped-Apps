//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESAudioEqualizerFormat, IESAudioReverb2Format, IESAudioReverbFormat;

@interface IESAudioEffectData : NSObject
{
    _Bool _enableCleaner;
    _Bool _enableExciter;
    _Bool _enableCompressor;
    int _stereoWidenWeightID;
    IESAudioReverbFormat *_reverbFormat;
    IESAudioEqualizerFormat *_equalizerFormat;
    IESAudioReverb2Format *_reverb2Format;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool enableCompressor; // @synthesize enableCompressor=_enableCompressor;
@property(nonatomic) _Bool enableExciter; // @synthesize enableExciter=_enableExciter;
@property(nonatomic) _Bool enableCleaner; // @synthesize enableCleaner=_enableCleaner;
@property(retain, nonatomic) IESAudioReverb2Format *reverb2Format; // @synthesize reverb2Format=_reverb2Format;
@property(nonatomic) int stereoWidenWeightID; // @synthesize stereoWidenWeightID=_stereoWidenWeightID;
@property(retain, nonatomic) IESAudioEqualizerFormat *equalizerFormat; // @synthesize equalizerFormat=_equalizerFormat;
@property(retain, nonatomic) IESAudioReverbFormat *reverbFormat; // @synthesize reverbFormat=_reverbFormat;
- (void).cxx_destruct;
- (id)init;

@end
