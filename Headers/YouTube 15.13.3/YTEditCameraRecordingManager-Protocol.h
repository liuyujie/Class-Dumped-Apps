//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSDictionary, NSURL;
@protocol YTCameraRecordingSettings, YTEditCameraRecorderDelegate;

@protocol YTEditCameraRecordingManager <NSObject>
@property(readonly, nonatomic) NSURL *baseRecordingDirectory;
@property(readonly, nonatomic, getter=isRecording) _Bool recording;
@property(readonly, nonatomic) CDStruct_1b6d18a9 recordedDuration;
@property(nonatomic) __weak id <YTEditCameraRecorderDelegate> delegate;
- (void)sendAudioBuffer:(struct opaqueCMSampleBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2;
- (void)sendPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTimestamp:(CDStruct_1b6d18a9)arg2;
- (struct GPCPromise *)stopRecording;
- (struct GPCPromise *)startRecordingWithRecordingSettings:(id <YTCameraRecordingSettings>)arg1 videoOutputSettings:(NSDictionary *)arg2;
@end

