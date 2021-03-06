//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGDynamicOverlayImageProvider-Protocol.h>
#import <InstagramAppCoreFramework/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSString;

@interface IGStoryAnimatedStickerViewSnapshotProvider : NSObject <NSSecureCoding, IGDynamicOverlayImageProvider>
{
    double _duration;
    double _frameRate;
    NSMutableArray *_frames;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) double frameRate; // @synthesize frameRate=_frameRate;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (id)imageForTime:(CDStruct_1b6d18a9)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithStickerView:(id)arg1 duration:(double)arg2 frameRate:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

