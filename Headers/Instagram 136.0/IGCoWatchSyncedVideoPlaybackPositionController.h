//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBVideoLiveClock;

@interface IGCoWatchSyncedVideoPlaybackPositionController : NSObject
{
    FBVideoLiveClock *_syncedClock;
    duration_6174cf92 _startTimeMillis;
}

@property(nonatomic) duration_6174cf92 startTimeMillis; // @synthesize startTimeMillis=_startTimeMillis;
- (void).cxx_destruct;
- (duration_6174cf92)_currentTime;
- (void)setPlaybackPosition:(duration_6174cf92)arg1;
- (duration_6174cf92)expectedProgressMillis;
- (id)initWithSyncedClock:(id)arg1 startTimeMillis:(duration_6174cf92)arg2;
- (id)initWithSyncedClock:(id)arg1;

@end

