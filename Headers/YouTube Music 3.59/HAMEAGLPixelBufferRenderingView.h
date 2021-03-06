//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HAMPixelBufferRenderingView-Protocol.h"

@class CAEAGLLayer, EAGLContext, NSArray, NSDictionary, NSString;
@protocol HAMFormat, HAMPixelBufferRenderingViewErrorDelegate, HAMPixelBufferRenderingViewFrameSizeDelegate;

@interface HAMEAGLPixelBufferRenderingView : UIView <HAMPixelBufferRenderingView>
{
    CAEAGLLayer *_layer;
    EAGLContext *_context;
    struct __CVOpenGLESTextureCache *_videoTextureCache;
    unsigned int _program;
    int _uniformYCbCrMatrix;
    int _uniformYCbCrOffset;
    unsigned int _renderBuffer;
    unsigned int _frameBuffer;
    unsigned int _vao;
    unsigned int _vbo;
    int _frameWidth;
    int _frameHeight;
    int _lumaPlaneWidth;
    int _lumaPlaneHeight;
    int _chromaPlaneWidth;
    int _chromaPlaneHeight;
    _Bool _pixelBufferAttributesChanged;
    struct CGSize _layerSize;
    _Bool _delegateRenderedSizeNeedsUpdate;
    int _drawableWidth;
    int _drawableHeight;
    id <HAMFormat> _lastRenderedFormat;
    CDStruct_1b6d18a9 _lastRenderedPresentationTime;
    _Bool _terminated;
    _Bool _prepared;
    id <HAMPixelBufferRenderingViewErrorDelegate> _errorDelegate;
    id <HAMPixelBufferRenderingViewFrameSizeDelegate> _frameSizeDelegate;
    double _scale;
}

+ (id)supportedPixelFormats;
+ (id)requiredPixelBufferAttributes;
+ (_Bool)isSupported;
+ (Class)layerClass;
@property double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) _Bool prepared; // @synthesize prepared=_prepared;
@property(nonatomic) __weak id <HAMPixelBufferRenderingViewFrameSizeDelegate> frameSizeDelegate; // @synthesize frameSizeDelegate=_frameSizeDelegate;
@property(nonatomic) __weak id <HAMPixelBufferRenderingViewErrorDelegate> errorDelegate; // @synthesize errorDelegate=_errorDelegate;
- (void).cxx_destruct;
- (_Bool)linkProgram;
- (_Bool)setupShaderOfType:(unsigned int)arg1 source:(id)arg2;
- (_Bool)setupTextureCacheAndReturnError:(id *)arg1;
- (_Bool)setupProgramAndReturnError:(id *)arg1;
- (_Bool)setupBuffersAndReturnError:(id *)arg1;
- (_Bool)updateDrawableArea;
- (void)willMoveToWindow:(id)arg1;
- (void)setEAGLContext:(id)arg1;
- (void)terminate;
- (void)appDidEnterBackground;
- (void)pixelBufferAttributesWillChange;
- (_Bool)renderPixelBuffer:(id)arg1;
- (void)clear;
- (void)reset;
- (_Bool)prepareAndReturnError:(id *)arg1;
@property(readonly, nonatomic) NSArray *supportedPixelFormats;
@property(readonly, nonatomic) NSDictionary *requiredPixelBufferAttributes;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

