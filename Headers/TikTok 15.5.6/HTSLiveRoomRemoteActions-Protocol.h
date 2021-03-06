//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LiveRoomModel, NSError, NSNumber;

@protocol HTSLiveRoomRemoteActions <NSObject>

@optional
- (void)liveFirstWatchingOneMinute;
- (void)didReceivedFinishMessage;
- (void)didCloseLiveRoomWithDuration:(double)arg1;
- (void)didEnterLiveRoomFail:(NSError *)arg1;
- (void)didEnterLiveRoom:(LiveRoomModel *)arg1;
- (void)didUpdateRoomFail:(NSError *)arg1;
- (void)didUpdateRoom:(LiveRoomModel *)arg1 timeStamp:(NSNumber *)arg2;
- (void)didUpdateRoom:(LiveRoomModel *)arg1;
@end

