//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MOPUBAVPlayer, NSError, NSString;

@protocol MOPUBAVPlayerDelegate <NSObject>
- (void)avPlayerDidStall:(MOPUBAVPlayer *)arg1;
- (void)avPlayerDidRecoverFromStall:(MOPUBAVPlayer *)arg1;
- (void)avPlayerDidFinishPlayback:(MOPUBAVPlayer *)arg1;
- (void)avPlayer:(MOPUBAVPlayer *)arg1 playbackTimeDidProgress:(double)arg2;
- (void)avPlayer:(MOPUBAVPlayer *)arg1 didError:(NSError *)arg2 withMessage:(NSString *)arg3;
@end
