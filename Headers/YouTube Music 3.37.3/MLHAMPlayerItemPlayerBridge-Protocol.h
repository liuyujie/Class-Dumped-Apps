//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MLHAMPlayerItem, NSError;

@protocol MLHAMPlayerItemPlayerBridge <NSObject>
- (_Bool)userRequestedPlay;
- (long long)currentPlayerState;
- (void)playerItem:(MLHAMPlayerItem *)arg1 DRMDidFailWithError:(NSError *)arg2;
- (void)playerItem:(MLHAMPlayerItem *)arg1 peggedToLiveDidChange:(_Bool)arg2;
- (void)playerItemRequestSeekingToEnd:(MLHAMPlayerItem *)arg1 autoSeeking:(_Bool)arg2;
- (void)playerItem:(MLHAMPlayerItem *)arg1 requestSeekingTo:(double)arg2 toleranceBefore:(double)arg3 toleranceAfter:(double)arg4;
- (void)playerItem:(MLHAMPlayerItem *)arg1 textTrackStatusDidChange:(_Bool)arg2;
- (void)playerItem:(MLHAMPlayerItem *)arg1 videoTrackStatusDidChange:(_Bool)arg2;
- (int)startedTrackRendererMediaContentType;
@end
