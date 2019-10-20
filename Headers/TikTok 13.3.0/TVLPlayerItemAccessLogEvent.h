//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSDictionary, NSError, NSString;

@interface TVLPlayerItemAccessLogEvent : NSObject <NSCopying>
{
    NSDate *_eventCreateDate;
    NSString *_URI;
    NSString *_serverAddress;
    NSString *_CDNPlayAddress;
    _Bool _DNSCacheHitted;
    NSDictionary *_metaDataInfo;
    NSDictionary *_nodeOptimizeInfo;
    NSDate *_playbackStartDate;
    NSDate *_playbackStopDate;
    NSDate *_prepareStartDate;
    NSDate *_prepareEndDate;
    NSDate *_stallStartDate;
    NSDate *_stallEndDate;
    long long _stallReason;
    long long _numberOfStalls;
    long long _index;
    long long _retryCount;
    long long _SDKDNSFinishTimestamp;
    long long _playerDNSFinishTimestamp;
    long long _TCPConnectedTimestamp;
    long long _TCPFirstPackageArrivedTimestamp;
    long long _videoFirstPackageArrivedTimestamp;
    long long _audioFirstPackageArrivedTimestamp;
    long long _videoFirstFrameDecodedTimestamp;
    long long _audioFirstFrameDecodedTimestamp;
    long long _videoFirstFrameRenderedTimestamp;
    NSError *_error;
    double _durationWatched;
}

@property(readonly, nonatomic) double durationWatched; // @synthesize durationWatched=_durationWatched;
@property(readonly, nonatomic) NSDate *playbackStopDate; // @synthesize playbackStopDate=_playbackStopDate;
@property(readonly, nonatomic) NSDate *playbackStartDate; // @synthesize playbackStartDate=_playbackStartDate;
@property(readonly, nonatomic) NSString *serverAddress; // @synthesize serverAddress=_serverAddress;
@property(readonly, nonatomic) NSString *URI; // @synthesize URI=_URI;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long numberOfStalls;
@property(readonly, nonatomic) double startupTime;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
