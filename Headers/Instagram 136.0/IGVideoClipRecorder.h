//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGAssetRecorder, NSString;

@interface IGVideoClipRecorder : NSObject
{
    IGAssetRecorder *_assetRecorder;
    long long _position;
    NSString *_type;
    NSString *_deviceID;
}

@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) long long position; // @synthesize position=_position;
- (void).cxx_destruct;
- (void)stopRecordingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)handleVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 metadata:(CDStruct_17631a97)arg2;
- (void)startRecordingWithVideoTransform:(struct CGAffineTransform)arg1;
@property(readonly, nonatomic) double runningTime;
- (id)initWithOutputFileURL:(id)arg1 videoSize:(struct CGSize)arg2 maxKeyFrameInterval:(id)arg3;

@end

