//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNCanvasEventHandler-Protocol.h>
#import <T1Twitter/TFNUIPlaybackControlsViewDelegate-Protocol.h>

@class T1CanvasVideoPlayerView;

@protocol T1CanvasVideoPlayerViewDelegate <TFNCanvasEventHandler, TFNUIPlaybackControlsViewDelegate>
@property(readonly, nonatomic) double viewEdgePadding;
@property(nonatomic, getter=isVideoPlaying) _Bool videoPlaying;
- (void)videoPlayerViewDidTapVideoView:(T1CanvasVideoPlayerView *)arg1;

@optional
- (void)videoPlayerView:(T1CanvasVideoPlayerView *)arg1 isRotatingToLandscape:(_Bool)arg2;
@end

