//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBVideoEncoderProtocol-Protocol.h>

@class AVAssetReader, FBVideoTranscoderTracer, NSDictionary, NSError, NSString;
@protocol FBAssetReaderOutputProtocol, FBAssetWriter, FBVideoProcessing, OS_dispatch_queue;

@interface FBVideoSegmentedEncoder : NSObject <FBVideoEncoderProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;
    CDStruct_1b6d18a9 _segmentDuration;
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _cancelled
    AVAssetReader *_reader;
    id <FBAssetReaderOutputProtocol> _assetOutput;
    id <FBVideoProcessing> _videoProcessor;
    id <FBAssetWriter> _writer;
    long long _imageSampleFrameInterval;
    CDStruct_1b6d18a9 _imageSampleTimestamp;
    FBVideoTranscoderTracer *_transcodeTracer;
    NSDictionary *_optionalConfig;
    NSError *_latestEncoderSoftException;
}

- (void).cxx_destruct;
- (id)latestEncoderSoftException;
- (void)cancelEncoding;
- (void)startEncodingWithFinishCallback:(CDUnknownBlockType)arg1 progressCallback:(CDUnknownBlockType)arg2 imageCallback:(CDUnknownBlockType)arg3;
- (id)initWithAssetWriter:(id)arg1 assetReader:(id)arg2 assetOutput:(id)arg3 videoProcessor:(id)arg4 segmentDuration:(CDStruct_1b6d18a9)arg5 imageSampleFrameInterval:(long long)arg6 imageSampleTimestamp:(CDStruct_1b6d18a9)arg7 transcodeTracer:(id)arg8 optionalConfig:(id)arg9 queue:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

