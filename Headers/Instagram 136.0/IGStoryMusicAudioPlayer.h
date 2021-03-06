//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAudioMix, AVPlayer, FBTimer, NSMutableDictionary, NSString;
@protocol IGStoryMusicAudioPlayerDelegate;

@interface IGStoryMusicAudioPlayer : NSObject
{
    AVPlayer *_avPlayer;
    FBTimer *_stallTimer;
    NSMutableDictionary *_assetPlayabilityObservers;
    NSMutableDictionary *_effectivePlaybackRateObservers;
    _Bool _isStalled;
    id <IGStoryMusicAudioPlayerDelegate> _delegate;
    AVAsset *_asset;
    double _currentPlaybackTime;
    long long _playabilityStatus;
    NSString *_audioTimePitchAlgorithm;
    double _effectivePlaybackRate;
}

@property(readonly, nonatomic) double effectivePlaybackRate; // @synthesize effectivePlaybackRate=_effectivePlaybackRate;
@property(nonatomic) _Bool isStalled; // @synthesize isStalled=_isStalled;
@property(readonly, nonatomic) NSString *audioTimePitchAlgorithm; // @synthesize audioTimePitchAlgorithm=_audioTimePitchAlgorithm;
@property(readonly, nonatomic) long long playabilityStatus; // @synthesize playabilityStatus=_playabilityStatus;
@property(nonatomic) double currentPlaybackTime; // @synthesize currentPlaybackTime=_currentPlaybackTime;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) __weak id <IGStoryMusicAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prerollAtRate:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeDidDetermineAssetPlayabilityObserver:(id)arg1;
- (id)addDidDetermineAssetPlayabilityObserver:(CDUnknownBlockType)arg1;
- (void)_stopStallTimer;
- (void)_startStallTimer;
- (void)fadeVolumeToLevel:(double)arg1 overDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) double volume;
@property(nonatomic) _Bool muted;
- (void)_effectivePlaybackRateDidChange:(id)arg1;
- (void)removeEffectivePlaybackRateChangeObserver:(id)arg1;
- (id)addEffectivePlaybackRateChangeObserver:(CDUnknownBlockType)arg1;
- (void)_didPlayToEnd;
- (void)_didUpdateToPlaybackTime:(double)arg1;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
@property(nonatomic) double playbackRate;
- (void)pause;
- (void)play;
@property(readonly, nonatomic) _Bool isPlaying;
@property(readonly, nonatomic) _Bool isPaused;
@property(retain, nonatomic) AVAudioMix *audioMix;
@property(readonly, nonatomic) double audioAssetDuration;
- (void)dealloc;
- (id)initWithAudioTimePitchAlgorithm:(id)arg1;
- (id)init;

@end

