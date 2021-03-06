//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PlayerBase.h"

#import "VideoDecoderDelegate-Protocol.h"
#import "VideoDecoderErrorDelegate-Protocol.h"

@class DCTimestampSync, NSArray, NSConditionLock, NSDate, NSString, NSThread, NXSAnalyticsCoordinator;
@protocol VideoDecoder, VideoDecoderErrorDelegate, VideoPlayerDelegate;

@interface VideoPlayer : PlayerBase <VideoDecoderErrorDelegate, VideoDecoderDelegate>
{
    _Bool _forcePresent;
    _Bool _videoPlaybackThreadStarted;
    float _playbackRate;
    float _dropThreshold;
    int _consecutiveDroppedFrames;
    int _totalDroppedFrames;
    unsigned int _pixelBufferFormat;
    id <VideoPlayerDelegate> _delegate;
    id <VideoDecoderErrorDelegate> _decodingErrorDelegate;
    PlayerBase *_master;
    DCTimestampSync *_timestampSync;
    long long _lastPacketPTS;
    NSDate *_lastPacketSystemTime;
    id <VideoDecoder> _decoder;
    NSThread *_videoPlaybackThread;
    NSConditionLock *_shutdownConditionLock;
    NSArray *_privateDataArray;
    long long _videoQualityOfService;
    NXSAnalyticsCoordinator *_analyticsCoordinator;
}

@property(retain, nonatomic) NXSAnalyticsCoordinator *analyticsCoordinator; // @synthesize analyticsCoordinator=_analyticsCoordinator;
@property _Bool videoPlaybackThreadStarted; // @synthesize videoPlaybackThreadStarted=_videoPlaybackThreadStarted;
@property(nonatomic) long long videoQualityOfService; // @synthesize videoQualityOfService=_videoQualityOfService;
@property(nonatomic) unsigned int pixelBufferFormat; // @synthesize pixelBufferFormat=_pixelBufferFormat;
@property(nonatomic) _Bool forcePresent; // @synthesize forcePresent=_forcePresent;
@property(nonatomic) int totalDroppedFrames; // @synthesize totalDroppedFrames=_totalDroppedFrames;
@property(nonatomic) int consecutiveDroppedFrames; // @synthesize consecutiveDroppedFrames=_consecutiveDroppedFrames;
@property(retain, nonatomic) NSArray *privateDataArray; // @synthesize privateDataArray=_privateDataArray;
@property(retain, nonatomic) NSConditionLock *shutdownConditionLock; // @synthesize shutdownConditionLock=_shutdownConditionLock;
@property(retain, nonatomic) NSThread *videoPlaybackThread; // @synthesize videoPlaybackThread=_videoPlaybackThread;
@property(retain, nonatomic) id <VideoDecoder> decoder; // @synthesize decoder=_decoder;
@property(nonatomic) float dropThreshold; // @synthesize dropThreshold=_dropThreshold;
@property(nonatomic) float playbackRate; // @synthesize playbackRate=_playbackRate;
@property(retain) NSDate *lastPacketSystemTime; // @synthesize lastPacketSystemTime=_lastPacketSystemTime;
@property long long lastPacketPTS; // @synthesize lastPacketPTS=_lastPacketPTS;
@property(retain, nonatomic) DCTimestampSync *timestampSync; // @synthesize timestampSync=_timestampSync;
@property(nonatomic) __weak PlayerBase *master; // @synthesize master=_master;
@property(nonatomic) __weak id <VideoDecoderErrorDelegate> decodingErrorDelegate; // @synthesize decodingErrorDelegate=_decodingErrorDelegate;
@property(nonatomic) __weak id <VideoPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)videoDecoderDidReceiveError:(id)arg1;
- (long long)currentTimestamp;
- (void)videoPlaybackThreadEntry;
- (void)onFrameDecoded:(id)arg1;
- (void)presentFrame:(id)arg1 withDelta:(double)arg2;
- (void)dropFrame:(id)arg1 withDelta:(double)arg2;
- (double)deltaForPTS:(long long)arg1;
- (_Bool)waitForPresentationTime:(id)arg1;
- (void)stop;
- (void)start;
- (id)initWithTimebase:(int)arg1 packetBuffer:(id)arg2 privateData:(id)arg3 videoQualityOfService:(long long)arg4 remoteSessionStartTime:(id)arg5 userRequestedStartTime:(id)arg6 bufferPixelFormat:(unsigned int)arg7 analyticsCoordinator:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

