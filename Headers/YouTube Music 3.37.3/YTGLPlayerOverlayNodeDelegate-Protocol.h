//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTGLAutonavOverlayNode, YTGLPlayerOverlayNode;

@protocol YTGLPlayerOverlayNodeDelegate <NSObject>
@property(readonly, nonatomic) _Bool shouldEnableAutoHide;
@property(readonly, nonatomic) _Bool shouldEnableVisibilityToggle;
- (long long)playerOverlayNodeAction:(YTGLPlayerOverlayNode *)arg1 fromMode:(long long)arg2 toMode:(long long)arg3;
- (void)playerOverlayNode:(YTGLPlayerOverlayNode *)arg1 didSetupAutonavOverlayNode:(YTGLAutonavOverlayNode *)arg2;
- (void)didPressAutonavPlay;
- (void)didPressAutonavCancel;
- (void)didScrubToTime:(double)arg1;
- (void)didPressLiveSync;
- (void)didPressPrevious;
- (void)didPressNext;
- (void)didPressReplay;
- (void)didPressPause;
- (void)didPressPlay;
@end
