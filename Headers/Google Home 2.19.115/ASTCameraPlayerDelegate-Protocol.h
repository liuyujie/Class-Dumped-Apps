//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSError;
@protocol ASTCameraPlayer;

@protocol ASTCameraPlayerDelegate <NSObject>
- (void)playbackDidEndForPlayer:(id <ASTCameraPlayer>)arg1 reason:(long long)arg2;
- (void)playerDidReceiveError:(NSError *)arg1;
- (void)playerDidDetermineVideoResolution:(struct CGSize)arg1;
- (void)playerDidStartPlaying;

@optional
- (void)playerDidPause;
- (void)playerDidProgress:(NSDate *)arg1;
@end

