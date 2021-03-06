//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EAGLContext, NSData, NSDictionary, SQueue, TGPaintBrush, TGPaintPath, TGPaintRenderState, TGPaintTexture, TGPaintUndoManager;

@interface TGPainting : NSObject
{
    EAGLContext *_context;
    NSDictionary *_shaders;
    NSData *_initialImageData;
    unsigned int _textureName;
    unsigned int _quadVAO;
    unsigned int _quadVBO;
    float _projection[16];
    struct CGRect _activeStrokeBounds;
    unsigned int _reusableFramebuffer;
    unsigned int _paintTextureName;
    TGPaintTexture *_brushTexture;
    TGPaintRenderState *_renderState;
    long long _suppressChangesCounter;
    SQueue *_queue;
    TGPaintUndoManager *_undoManager;
    unsigned long long _strokeCount;
    TGPaintBrush *_brush;
    TGPaintPath *_activePath;
    CDUnknownBlockType _contentChanged;
    CDUnknownBlockType _strokeCommited;
    struct CGSize _size;
}

@property(copy, nonatomic) CDUnknownBlockType strokeCommited; // @synthesize strokeCommited=_strokeCommited;
@property(copy, nonatomic) CDUnknownBlockType contentChanged; // @synthesize contentChanged=_contentChanged;
@property(retain, nonatomic) TGPaintPath *activePath; // @synthesize activePath=_activePath;
@property(retain, nonatomic) TGPaintBrush *brush; // @synthesize brush=_brush;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
- (id)shaderForKey:(id)arg1;
- (void)_setupShaders;
- (unsigned int)_generateTextureWithPixels:(char *)arg1;
- (float *)_projection;
- (unsigned int)_quad;
- (unsigned int)_reusableFramebuffer;
- (unsigned int)_paintTextureName;
@property(readonly, nonatomic) unsigned int textureName;
- (void)restoreSlice:(id)arg1 redo:(_Bool)arg2;
- (void)registerUndoInRect:(struct CGRect)arg1;
- (id)imageForData:(id)arg1 size:(struct CGSize)arg2 outputSize:(struct CGSize)arg3;
- (id)imageWithSize:(struct CGSize)arg1 andData:(id *)arg2;
- (id)imageDataForRect:(struct CGRect)arg1 resultPaintingData:(id *)arg2;
- (void)_renderWithProjection:(float *)arg1;
- (void)_renderWithProjection:(float *)arg1 mask:(int)arg2 color:(id)arg3 erase:(_Bool)arg4;
- (void)renderWithProjection:(float *)arg1;
- (id)_queue;
- (void)clear;
- (void)updateWithBlock:(CDUnknownBlockType)arg1 bounds:(struct CGRect)arg2;
- (void)_setupBrush;
- (void)commitStrokeWithColor:(id)arg1 erase:(_Bool)arg2;
- (void)paintStroke:(id)arg1 clearBuffer:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performAsynchronouslyInContext:(CDUnknownBlockType)arg1;
- (_Bool)isSuppressingChanges;
- (void)endSuppressingChanges;
- (void)beginSuppressingChanges;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) EAGLContext *context;
- (void)setSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 undoManager:(id)arg2 imageData:(id)arg3;

@end

