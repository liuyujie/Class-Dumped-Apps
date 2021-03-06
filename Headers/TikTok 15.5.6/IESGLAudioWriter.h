//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESMMObject.h"

@class AVAssetWriter, AVAssetWriterInput, NSString, NSURL, VEAudioEncodeConfig;
@protocol IESGLAudioWriterDelegate;

@interface IESGLAudioWriter : IESMMObject
{
    _Bool alreadyFinishedRecording;
    NSURL *audioURL;
    NSString *fileType;
    AVAssetWriter *assetWriter;
    AVAssetWriterInput *assetWriterAudioInput;
    CDStruct_1b6d18a9 startTime;
    CDStruct_1b6d18a9 previousAudioTime;
    _Bool audioEncodingIsFinished;
    _Bool videoEncodingIsFinished;
    _Bool isRecording;
    _Bool allowWriteAudio;
    _Bool _shouldInvalidateAudioSampleWhenDone;
    _Bool _isAudioReady;
    CDUnknownBlockType failureBlock;
    id <IESGLAudioWriterDelegate> _delegate;
    double _progressStartTime;
    double _progressTotalTime;
    double _progressCurrentTime;
    VEAudioEncodeConfig *_audioSettings;
}

@property(retain, nonatomic) VEAudioEncodeConfig *audioSettings; // @synthesize audioSettings=_audioSettings;
@property(nonatomic) _Bool isAudioReady; // @synthesize isAudioReady=_isAudioReady;
@property(nonatomic) double progressCurrentTime; // @synthesize progressCurrentTime=_progressCurrentTime;
@property(nonatomic) double progressTotalTime; // @synthesize progressTotalTime=_progressTotalTime;
@property(nonatomic) double progressStartTime; // @synthesize progressStartTime=_progressStartTime;
@property(nonatomic) __weak id <IESGLAudioWriterDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock;
@property(nonatomic) _Bool shouldInvalidateAudioSampleWhenDone; // @synthesize shouldInvalidateAudioSampleWhenDone=_shouldInvalidateAudioSampleWhenDone;
- (void).cxx_destruct;
- (void)initializeAudioWithOutputSettings;
- (double)getProgress;
- (void)processAudioBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)cancelRecording;
- (void)finishRecordingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finishRecording;
- (void)startRecording;
- (id)initWithAudioURL:(id)arg1 fileType:(id)arg2 audioSettings:(id)arg3;
- (void)setAllowWriteAudio:(_Bool)arg1;

@end

