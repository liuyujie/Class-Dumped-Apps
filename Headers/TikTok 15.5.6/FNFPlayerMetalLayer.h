//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAMetalLayer.h>

#import "FNFPlayerDisplayLayer-Protocol.h"

@class NSString;
@protocol FNFAVPlayer, FNFPlayerDisplayLayerDelegate, FNFPlayerMetalRenderer;

@interface FNFPlayerMetalLayer : CAMetalLayer <FNFPlayerDisplayLayer>
{
    id <FNFPlayerMetalRenderer> _renderer;
    id <FNFPlayerMetalRenderer> _detachedRenderer;
    id <FNFPlayerMetalRenderer> _defaultRenderer;
    struct __CVBuffer *_lumaTexture;
    struct __CVBuffer *_chromaTexture;
    struct __CVMetalTextureCache *_videoTextureCache;
    double _preferredRotation;
    struct CGAffineTransform _preferredTransform;
    NSString *_videoGravity;
    struct CGSize _presentationSize;
    struct CGSize _layerSize;
    long long _preferredConversion;
    _Bool _isReadyForDisplay;
    _Bool _layoutChanged;
    _Bool _shouldApplyRotationTransform;
    id <FNFPlayerDisplayLayerDelegate> _displayLayerDelegate;
}

@property(nonatomic) __weak id <FNFPlayerDisplayLayerDelegate> displayLayerDelegate; // @synthesize displayLayerDelegate=_displayLayerDelegate;
- (void).cxx_destruct;
- (void)_drawFrame:(_Bool)arg1 preventPlayback:(_Bool)arg2;
- (void)_cleanUpTextures;
- (void)_resetMetalContext:(_Bool)arg1;
- (void)_updateReadyForDisplay:(_Bool)arg1;
@property(retain, nonatomic) id <FNFAVPlayer> player;
- (void)setPreferredTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)preferredTransform;
@property(readonly, nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay;
@property(copy, nonatomic) NSString *videoGravity;
@property(readonly, nonatomic) struct CGSize presentationSize;
- (void)resetRendering;
- (void)clearBuffers;
- (void)flushDisplayLayer:(_Bool)arg1;
- (void)updateDisplayLayer;
- (void)displayEmptyBuffer:(_Bool)arg1 preventPlayback:(_Bool)arg2 lastDisplayedSampleBuffer:(struct __CVBuffer *)arg3;
- (void)displayPixelBuffer:(struct __CVBuffer *)arg1 preferredTransform:(struct CGAffineTransform)arg2 preventPlayback:(_Bool)arg3;
- (void)initializeDisplayLayer;
- (void)setRenderer:(id)arg1;
- (void)layoutSublayers;
- (id)initWithConfig:(CDStruct_b6254f9e)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

