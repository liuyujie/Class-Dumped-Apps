//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSError, NSString, NSURL, T1WatchBroadcastExternalVideoPlayer, TAVAnalyticsPresentationScribeParameters, TAVPlaylistItem, UIButton;

@protocol T1WatchBroadcastExternalVideoPlayerDelegate <NSObject>
- (void)externalVideoPlayer:(T1WatchBroadcastExternalVideoPlayer *)arg1 didReceiveShareURL:(NSURL *)arg2;
- (void)externalVideoPlayer:(T1WatchBroadcastExternalVideoPlayer *)arg1 didReceiveLifecycleToken:(NSString *)arg2 chatToken:(NSString *)arg3 chatPermissionType:(NSString *)arg4;
- (void)externalVideoPlayer:(T1WatchBroadcastExternalVideoPlayer *)arg1 didObservePlaybackStateError:(NSError *)arg2;
- (TAVAnalyticsPresentationScribeParameters *)presentationScribeParametersForExternalVideoPlayer:(T1WatchBroadcastExternalVideoPlayer *)arg1;
- (void)externalVideoPlayer:(T1WatchBroadcastExternalVideoPlayer *)arg1 didPressDismissButton:(UIButton *)arg2;
- (void)externalVideoPlayer:(T1WatchBroadcastExternalVideoPlayer *)arg1 didChangePlaylistItem:(TAVPlaylistItem *)arg2;
@end
