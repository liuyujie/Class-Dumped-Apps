//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetReader, AVAssetWriter, AVAssetWriterInputPixelBufferAdaptor, GIMMe, NSCondition, NSString, NSURL, YTUploadTranscodeConfig;
@protocol OS_dispatch_queue, YTUploadTranscodeFrameOperation, YTUploadTranscoderDelegate;

@interface YTUploadTranscoder : NSObject
{
    long long _transcodeState;
    YTUploadTranscodeConfig *_transcodeConfig;
    CDUnknownBlockType _completionBlock;
    _Bool _skippable;
    AVAssetWriterInputPixelBufferAdaptor *_pixelAdaptor;
    CDStruct_1b6d18a9 _processedVideoUpToTime;
    NSCondition *_pauseCondition;
    id <YTUploadTranscodeFrameOperation> _frameOperation;
    unsigned long long _cancellationReason;
    NSURL *_transcodeURL;
    _Bool _isSlomo;
    GIMMe *_gimme;
    long long _uploadQuality;
    long long _bitrateOptimization;
    long long _uploadScaleMode;
    NSObject<YTUploadTranscoderDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_processingQueue;
    AVAssetWriter *_writer;
    AVAssetReader *_reader;
    unsigned long long _backgroundTaskIdentifier;
    NSString *_frontendUploadID;
}

@property(retain, nonatomic) NSString *frontendUploadID; // @synthesize frontendUploadID=_frontendUploadID;
@property(nonatomic) unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(retain, nonatomic) AVAssetReader *reader; // @synthesize reader=_reader;
@property(retain, nonatomic) AVAssetWriter *writer; // @synthesize writer=_writer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(nonatomic) __weak NSObject<YTUploadTranscoderDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long uploadScaleMode; // @synthesize uploadScaleMode=_uploadScaleMode;
@property(nonatomic) long long bitrateOptimization; // @synthesize bitrateOptimization=_bitrateOptimization;
@property(nonatomic) long long uploadQuality; // @synthesize uploadQuality=_uploadQuality;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)notifyDidProgressTranscodeWithFrontendUploadID:(id)arg1 progress:(float)arg2;
- (void)notifyDidBeginTranscodeWithFrontendUploadID:(id)arg1;
- (id)generateUniqueTranscodeURL;
- (unsigned long long)bytesRequiredForTranscodingAVAsset:(id)arg1;
- (_Bool)hasSpaceToTranscodeAssetWithSize:(unsigned long long)arg1;
- (void)resetState;
- (void)finishTranscodeWithError:(id)arg1;
- (void)finishTranscodeWithErrorCode:(long long)arg1 underlyingError:(id)arg2;
- (void)finishTranscodeWithErrorCode:(long long)arg1;
- (void)finishTranscode;
- (_Bool)useHEVCCodecForTrack:(id)arg1;
- (void)configureVideoSettingsForHEVC:(id)arg1 bitrate:(id)arg2;
- (void)configureVideoSettingsForH264:(id)arg1 bitrate:(id)arg2;
- (id)videoSettingsForTrack:(id)arg1 frameSize:(struct CGSize)arg2;
- (double)percentCompleted;
- (void)deleteTranscodeIfNeeded;
- (void)handleWriterFailure;
- (void)finishWriting;
- (void)finishTranscodeIfReady;
- (void)endInput:(id)arg1;
- (long long)cancellationErrorCode;
- (void)copyReaderOutput:(id)arg1 intoInput:(id)arg2;
- (_Bool)setupVideoTracks:(id)arg1 videoComposition:(id)arg2 frameSize:(struct CGSize)arg3;
- (_Bool)setupAudioTracks:(id)arg1 withAudioMix:(id)arg2;
- (_Bool)setUpReaderAndWriterForAsset:(id)arg1 videoComposition:(id)arg2 frameSize:(struct CGSize)arg3 audioMix:(id)arg4 error:(id *)arg5;
- (void)createBackgroundTask;
- (void)beginTranscodeWithComposition:(id)arg1 editInstructions:(id)arg2;
- (void)beginTranscodeWithAsset:(id)arg1 editInstructions:(id)arg2;
- (void)transcodeAssetURL:(id)arg1 withTranscodeConfig:(id)arg2 frontendUploadID:(id)arg3 editInstructions:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)cancelTranscodeWithReason:(unsigned long long)arg1;
- (void)cancelTranscodeForFrontendUploadID:(id)arg1;
- (_Bool)isPaused;
- (_Bool)isReady;
- (void)resume;
- (void)pause;
- (void)dealloc;
- (id)init;
- (void)transcodeAssetSegmentURLs:(id)arg1 withTranscodeConfig:(id)arg2 frontendUploadID:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

