//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, PTVPublishLadder, PTVRTSPStat, PTVStdDevStats, RollingAverage;

@interface PTVBitrateController : NSObject
{
    RollingAverage *_videoAverage;
    RollingAverage *_audioAverage;
    PTVRTSPStat *_aveSentRate;
    PTVPublishLadder *_publishLadder;
    int _tweaksMaxVideoBitrate;
    int _tweaksMinVideoBitrate;
    int _tweaksInitialBandwidth;
    int _bandwidth;
    int _maxBandwidth;
    int _videoBitrate;
    double _currentFrameRate;
    _Bool _currentFrameRateIsReduced;
    double _currentTarget;
    NSDate *_lastRateChange;
    _Bool _loss;
    _Bool _confident;
    _Bool _rateLower;
    int _reportsSinceRateLower;
    int _fixedBitrate;
    int _fixedFrameRate;
    int _initialBandwidth;
    int _usingInitialBandwidth;
    PTVStdDevStats *_uploadRate;
    PTVStdDevStats *_videoOutputRate;
    PTVStdDevStats *_indexRatio;
    _Bool _videoOK;
    _Bool _transmitOK;
    _Bool _queueFull;
    _Bool _badConnectionSeen;
    int _frameRateOverride;
    PTVStdDevStats *_bitsPerPixel;
    PTVStdDevStats *_framesPerSecond;
    PTVStdDevStats *_audioRateStats;
    _Bool _isAudioPriority;
}

@property _Bool isAudioPriority; // @synthesize isAudioPriority=_isAudioPriority;
@property(readonly) _Bool badConnectionSeen; // @synthesize badConnectionSeen=_badConnectionSeen;
@property(readonly) _Bool transmitOK; // @synthesize transmitOK=_transmitOK;
- (void).cxx_destruct;
- (void)overrideFramerate:(int)arg1;
- (struct CGSize)getVideoDimensions;
- (int)getGopLengthInFrames;
- (int)getFrameRate;
- (int)getAudioRate;
- (id)getStatistics;
- (void)reportEndOfBroadcast;
- (id)description;
- (int)getEncoderRate;
- (int)getEncoderBitrate;
- (_Bool)shouldEncodeFrameAt:(double)arg1;
- (void)dataTransfer:(long long)arg1 notSent:(long long)arg2 trimmed:(long long)arg3;
- (void)calculateBitrate;
- (int)applyBitrateLimitsToVideoBitrate:(int)arg1;
- (int)videoBitrateForBandwidth:(int)arg1 audioAverage:(int)arg2;
- (void)calculateFrameRate;
- (void)encodedAudio:(id)arg1 pts:(double)arg2;
- (_Bool)encodedVideo:(id)arg1 pts:(double)arg2 width:(int)arg3 height:(int)arg4 external:(_Bool)arg5;
- (void)setPublishLadder:(id)arg1 initialBandwidth:(int)arg2;
- (id)initWithPublishLadder:(id)arg1 initialBandwidth:(int)arg2;

@end

