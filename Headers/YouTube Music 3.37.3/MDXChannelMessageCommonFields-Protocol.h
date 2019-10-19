//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MDXChannelMessageCommonFields <NSObject>
@property(readonly, nonatomic) double liveIngestionTime;
@property(readonly, nonatomic) double seekableEndTime;
@property(readonly, nonatomic) double seekableStartTime;
@property(readonly, nonatomic) NSString *audioTrackID;
@property(readonly, nonatomic) NSString *listID;
@property(readonly, nonatomic) long long adInfoVisibilityState;
@property(readonly, nonatomic) NSString *adNextParams;
@property(readonly, nonatomic) NSString *adVideoID;
@property(readonly, nonatomic) long long adState;
@property(readonly, nonatomic) _Bool isSkippable;
@property(readonly, nonatomic) _Bool hasNext;
@property(readonly, nonatomic) _Bool hasPrevious;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) long long volume;
@property(readonly, nonatomic) long long currentIndex;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) NSString *firstVideoID;
@property(readonly, nonatomic) NSString *videoID;
@property(readonly, nonatomic) NSString *screenID;
@end
