//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSFilterInterface.h"

@class HTSGLProgram, IESMMEffectGroup;

@interface HTSGLFilterInput : HTSFilterInterface
{
    unsigned long long _formatType;
    const float *_preferredConversion;
    unsigned int luminanceTexture;
    unsigned int chrominanceTexture;
    int yuvConversionMatrixUniform;
    int yuvConversionPositionAttribute;
    int yuvConversionTextureCoordinateAttribute;
    int yuvConversionLuminanceTextureUniform;
    int yuvConversionChrominanceTextureUniform;
    HTSGLProgram *yuvConversionProgram;
    int yuvConversionPositionAttributeRGBFormat;
    int yuvConversionTextureCoordinateAttributeRGBFormat;
    int yuvConversionLuminanceTextureUniformRGBFormat;
    int yuvConversionChrominanceTextureUniformRGBFormat;
    HTSGLProgram *yuvConversionProgramRGBFormat;
    int imageBufferWidth;
    int imageBufferHeight;
    _Bool isEndProcessing;
    IESMMEffectGroup *_effectGroup;
    struct CGSize _targetSize;
}

+ (const float *)textureCoordinatesForRotation;
@property(nonatomic) __weak IESMMEffectGroup *effectGroup; // @synthesize effectGroup=_effectGroup;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
- (void).cxx_destruct;
- (void)endProcessing;
- (void)updateTargetsForVideoCameraUsingCacheTextureAtWidth:(int)arg1 height:(int)arg2 time:(CDStruct_1b6d18a9)arg3;
- (void)convertYUVToRGBOutput:(id)arg1;
- (void)renderRGBOutput:(id)arg1;
- (void)processInputBuffer:(struct __CVBuffer *)arg1 andFrametime:(CDStruct_1b6d18a9)arg2 withInfo:(id)arg3;
- (void)processInputBufferOnQueue:(struct __CVBuffer *)arg1 andFrametime:(CDStruct_1b6d18a9)arg2 withInfo:(id)arg3;
- (void)processInputBufferOnQueue:(struct __CVBuffer *)arg1 andFrametime:(CDStruct_1b6d18a9)arg2;
- (void)processInputBuffer:(struct opaqueCMSampleBuffer *)arg1 withInfo:(id)arg2;
- (void)processInputBuffer:(struct opaqueCMSampleBuffer *)arg1;
@property(readonly, nonatomic) unsigned long long formatType;
- (id)initWithBufferFormat:(unsigned long long)arg1;

@end
