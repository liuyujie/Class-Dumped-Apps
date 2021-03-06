//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebRTC/RTCMTLRenderer-Protocol.h>

@class MTKView, NSString, NSValue;
@protocol MTLBuffer, MTLCommandQueue, MTLDevice, MTLLibrary, MTLRenderPipelineState, OS_dispatch_semaphore;

@interface RTCMTLRenderer : NSObject <RTCMTLRenderer>
{
    MTKView *_view;
    NSObject<OS_dispatch_semaphore> *_inflight_semaphore;
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    id <MTLLibrary> _defaultLibrary;
    id <MTLRenderPipelineState> _pipelineState;
    id <MTLBuffer> _vertexBuffer;
    int _oldFrameWidth;
    int _oldFrameHeight;
    int _oldCropWidth;
    int _oldCropHeight;
    int _oldCropX;
    int _oldCropY;
    long long _oldRotation;
    NSValue *_rotationOverride;
}

@property(retain) NSValue *rotationOverride; // @synthesize rotationOverride=_rotationOverride;
- (void).cxx_destruct;
- (void)drawFrame:(id)arg1;
- (void)render;
- (void)loadAssets;
- (_Bool)setupMetal;
- (_Bool)setupTexturesForFrame:(id)arg1;
- (void)getWidth:(int *)arg1 height:(int *)arg2 cropWidth:(int *)arg3 cropHeight:(int *)arg4 cropX:(int *)arg5 cropY:(int *)arg6 ofFrame:(id)arg7;
- (void)uploadTexturesToRenderEncoder:(id)arg1;
- (id)shaderSource;
- (id)currentMetalDevice;
- (_Bool)setupWithView:(id)arg1;
- (_Bool)addRenderingDestination:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

