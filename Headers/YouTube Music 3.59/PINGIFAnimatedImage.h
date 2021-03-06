//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PINAnimatedImage.h"

#import "PINAnimatedImage-Protocol.h"

@class NSData, NSError;

@interface PINGIFAnimatedImage : PINAnimatedImage <PINAnimatedImage>
{
    NSData *_animatedImageData;
    struct CGImageSource *_imageSource;
    unsigned int _width;
    unsigned int _height;
    _Bool _hasAlpha;
    unsigned long long _frameCount;
    unsigned long long _loopCount;
    double *_durations;
    NSError *_error;
}

+ (float)frameDurationAtIndex:(unsigned long long)arg1 source:(struct CGImageSource *)arg2;
- (void).cxx_destruct;
- (struct CGImage *)imageAtIndex:(unsigned long long)arg1 cacheProvider:(id)arg2;
- (double)durationAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) unsigned int bytesPerFrame;
@property(readonly, nonatomic) unsigned int height;
@property(readonly, nonatomic) unsigned int width;
@property(readonly, nonatomic) unsigned long long loopCount;
@property(readonly, nonatomic) unsigned long long frameCount;
@property(readonly, nonatomic) NSData *data;
- (void)dealloc;
- (id)initWithAnimatedImageData:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) unsigned long long frameInterval;
@property(readonly, nonatomic) double totalDuration;

@end

