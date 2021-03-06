//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, YTAdInterrupt, YTIPlayerPrebufferConfig, YTPlayerStatus, YTSingleVideoController;
@protocol MLViewportSizeProvider;

@interface YTPrebufferingVideoTransitionController : NSObject
{
    YTIPlayerPrebufferConfig *_config;
    id <MLViewportSizeProvider> _viewportSizeProvider;
    YTPlayerStatus *_initialPlayerStatus;
    YTSingleVideoController *_activeVideoController;
    double _activeVideoTransitionMediaTime;
    double _bufferedMediaTime;
    double _currentMediaTime;
    long long _activeVideoState;
    long long _state;
    GIMMe *_gimme;
    YTAdInterrupt *_adInterrupt;
    YTSingleVideoController *_nextVideoController;
}

@property(readonly, nonatomic) YTSingleVideoController *nextVideoController; // @synthesize nextVideoController=_nextVideoController;
@property(readonly, nonatomic) YTAdInterrupt *adInterrupt; // @synthesize adInterrupt=_adInterrupt;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)updateLimitsOnVideoControllers;
- (long long)nextState;
- (void)updateState;
- (double)nextVideoPreferredMaxReadahead;
- (double)nextVideoPreferredMaxBitrateRatio;
- (double)activeVideoPreferredMaxBitrateRatio;
- (void)updateVideoStateFromActiveVideoController;
- (void)constructNextVideoController;
- (void)activeVideoControllerStateDidChangeToState:(long long)arg1;
- (void)activeVideoControllerBufferedMediaTimeDidChangeToTime:(double)arg1;
- (void)activeVideoControllerCurrentMediaTimeDidChangeToTime:(id)arg1;
- (void)setCompleted;
- (void)cancelTransition;
- (void)prepareVideoControllersForTransitionToNextVideo;
- (void)dealloc;
- (id)initWithActiveVideoController:(id)arg1 activeVideoTransitionMediaTime:(double)arg2 toNewAdInterrupt:(id)arg3 initialPlayerStatus:(id)arg4 viewportSizeProvider:(id)arg5;

@end

