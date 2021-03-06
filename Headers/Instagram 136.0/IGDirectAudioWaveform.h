//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSArray;

@interface IGDirectAudioWaveform : FBValueObject <NSCopying, NSCoding>
{
    double _volumeRecordingInterval;
    NSArray *_averageVolume;
}

@property(readonly, copy, nonatomic) NSArray *averageVolume; // @synthesize averageVolume=_averageVolume;
@property(readonly, nonatomic) double volumeRecordingInterval; // @synthesize volumeRecordingInterval=_volumeRecordingInterval;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithVolumeRecordingInterval:(double)arg1 averageVolume:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

