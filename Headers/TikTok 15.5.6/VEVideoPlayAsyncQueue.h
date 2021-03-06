//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VEVideoAsyncQueue.h"

@class NSMutableArray, VEVideoConfig;

@interface VEVideoPlayAsyncQueue : VEVideoAsyncQueue
{
    _Bool _isHighSpeed;
    _Bool _enableAccurateSeek;
    _Bool _isExportorFlag;
    long long _maxCacheCount;
    NSMutableArray *_sampleDataQueue;
    NSMutableArray *_outputSampleDataQueue;
    unsigned long long _asyncThreadStatus;
    long long _freezeSize;
    VEVideoConfig *_config;
    double _maxCacheTime;
    CDStruct_1b6d18a9 _seekPos;
    CDStruct_1b6d18a9 _lastReqTime;
    CDStruct_1b6d18a9 _lastBufferTime;
}

@property(nonatomic) CDStruct_1b6d18a9 lastBufferTime; // @synthesize lastBufferTime=_lastBufferTime;
@property(nonatomic) CDStruct_1b6d18a9 lastReqTime; // @synthesize lastReqTime=_lastReqTime;
@property(nonatomic) double maxCacheTime; // @synthesize maxCacheTime=_maxCacheTime;
@property(nonatomic) _Bool isExportorFlag; // @synthesize isExportorFlag=_isExportorFlag;
@property(retain, nonatomic) VEVideoConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool enableAccurateSeek; // @synthesize enableAccurateSeek=_enableAccurateSeek;
@property(nonatomic) long long freezeSize; // @synthesize freezeSize=_freezeSize;
@property(nonatomic) CDStruct_1b6d18a9 seekPos; // @synthesize seekPos=_seekPos;
@property(nonatomic) unsigned long long asyncThreadStatus; // @synthesize asyncThreadStatus=_asyncThreadStatus;
@property(retain, nonatomic) NSMutableArray *outputSampleDataQueue; // @synthesize outputSampleDataQueue=_outputSampleDataQueue;
@property(retain, nonatomic) NSMutableArray *sampleDataQueue; // @synthesize sampleDataQueue=_sampleDataQueue;
@property(nonatomic) _Bool isHighSpeed; // @synthesize isHighSpeed=_isHighSpeed;
@property(nonatomic) long long maxCacheCount; // @synthesize maxCacheCount=_maxCacheCount;
- (void).cxx_destruct;
- (id)p_getVideoDataWithAtTime:(CDStruct_1b6d18a9)arg1;
- (id)requstVideoData:(CDStruct_1b6d18a9)arg1;
- (void)setSeekPosFrameTime:(CDStruct_1b6d18a9)arg1;
- (void)removeVideoDatas;
- (void)p_removeOutputSampleDataQue;
- (void)p_removeSampleDataQue;
- (void)p_addObjectForOutputSampleDataQueue:(id)arg1;
- (void)p_moveObjectToOutputQueueFromSampeQue;
- (void)p_pushSampleDataQueue:(id)arg1;
- (_Bool)processSampleData:(id)arg1;
- (_Bool)isGtThresholdCache;
- (_Bool)isEmptyOfSampleDataQueue;
- (void)setMaxRefFrames:(int)arg1;
- (_Bool)isHitCache:(CDStruct_1b6d18a9)arg1;
- (void)initBufferQueue;
- (void)dealloc;
- (void)setExportorFlag:(_Bool)arg1;
- (id)init;

@end

