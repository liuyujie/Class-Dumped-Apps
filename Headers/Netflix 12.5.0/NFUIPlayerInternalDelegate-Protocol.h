//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NFUIPlaybackRequest, NFUIPlayerInternal;

@protocol NFUIPlayerInternalDelegate <NSObject>
- (void)player:(NFUIPlayerInternal *)arg1 volumeChange:(float)arg2 previous:(float)arg3;
- (void)playerWillStop:(NFUIPlayerInternal *)arg1;
- (void)player:(NFUIPlayerInternal *)arg1 stateChange:(unsigned long long)arg2 previous:(unsigned long long)arg3;
- (void)player:(NFUIPlayerInternal *)arg1 loadPlaybackRequest:(NFUIPlaybackRequest *)arg2;
@end
