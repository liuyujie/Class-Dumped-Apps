//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESMMObject.h"

#import "VEAppStatusProtocol-Protocol.h"

@class EAGLContext, EAGLSharegroup, HTSGLFramebufferCache, IESGLesProgramCache, IESQueue, NSLock, NSMutableArray, NSObject, NSString, VEBlockChecker;
@protocol OS_dispatch_queue;

@interface HTSGLContext : IESMMObject <VEAppStatusProtocol>
{
    EAGLSharegroup *_sharegroup;
    IESQueue *_glesContextQueue;
    NSLock *_textureCacheLock;
    struct TESharedGLContext *_cppSharedGLContext;
    _Bool _checkOpenGLES3;
    _Bool _isInBackground;
    EAGLContext *_context;
    NSObject<OS_dispatch_queue> *_contextQueue;
    struct __CVOpenGLESTextureCache *_coreVideoTextureCache;
    HTSGLFramebufferCache *_framebufferCache;
    IESGLesProgramCache *_programCache;
    VEBlockChecker *_blockChecker;
    NSMutableArray *_frameBufferIdTrash;
    NSMutableArray *_renderBufferIdTrash;
    NSMutableArray *_textureIdTrash;
    NSMutableArray *_objectTrash;
    NSMutableArray *_effectHandleTrash;
}

+ (_Bool)supportsFastTextureUpload;
+ (struct CGSize)sizeThatFitsWithinATextureForSize:(struct CGSize)arg1;
+ (_Bool)deviceSupportsFramebufferReads;
+ (_Bool)deviceSupportsRedTextures;
+ (_Bool)deviceSupportsOpenGLESExtension:(id)arg1;
+ (int)maximumVaryingVectorsForThisDevice;
+ (int)maximumTextureUnitsForThisDevice;
+ (int)maximumTextureSizeForThisDevice;
+ (id)shareProcesingContext;
+ (id)sharedImageProcessingContext;
+ (_Bool)isMainProcessingContextExisted;
+ (id)innerShareProcesingContext;
+ (id)innerMainProcessingContext;
+ (_Bool)isSupportGLES30AndCreateGLESContextOnAppLoad:(_Bool)arg1;
+ (_Bool)isSupportGLES30AndCreateGLESContext;
+ (void)preloadGLContext;
+ (_Bool)enableCrossPlatUnified;
@property(retain, nonatomic) NSMutableArray *effectHandleTrash; // @synthesize effectHandleTrash=_effectHandleTrash;
@property(retain, nonatomic) NSMutableArray *objectTrash; // @synthesize objectTrash=_objectTrash;
@property(retain, nonatomic) NSMutableArray *textureIdTrash; // @synthesize textureIdTrash=_textureIdTrash;
@property(retain, nonatomic) NSMutableArray *renderBufferIdTrash; // @synthesize renderBufferIdTrash=_renderBufferIdTrash;
@property(retain, nonatomic) NSMutableArray *frameBufferIdTrash; // @synthesize frameBufferIdTrash=_frameBufferIdTrash;
@property(retain, nonatomic) VEBlockChecker *blockChecker; // @synthesize blockChecker=_blockChecker;
@property(readonly, nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property(readonly) IESGLesProgramCache *programCache; // @synthesize programCache=_programCache;
- (void).cxx_destruct;
- (void)clearTrash;
- (void)memoryWarning;
- (void)enterForeground;
- (void)enterBackground;
- (void)becomeActive;
- (void)resignActive;
@property(readonly) HTSGLFramebufferCache *framebufferCache; // @synthesize framebufferCache=_framebufferCache;
@property(readonly) struct __CVOpenGLESTextureCache *coreVideoTextureCache; // @synthesize coreVideoTextureCache=_coreVideoTextureCache;
- (_Bool)isContextExist;
- (void)releaseContext;
@property(readonly, retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
- (id)createContext;
- (void)addEffectHandleToBeDeleted:(void *)arg1;
- (void)addObjectToBeDeleted:(id)arg1;
- (void)addTextureIdToBeDeleted:(unsigned int)arg1;
- (void)addRenderbufferIdToBeDeleted:(unsigned int)arg1;
- (void)addFramebufferIdToBeDeleted:(unsigned int)arg1;
- (void)useSharegroup:(id)arg1;
- (void)presentBufferForDisplay;
- (void)useAsCurrentContext;
@property(nonatomic) _Bool checkOpenGLES3; // @synthesize checkOpenGLES3=_checkOpenGLES3;
- (void *)contextKey;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *contextQueue; // @synthesize contextQueue=_contextQueue;
- (void)resetContext;
- (void *)getCppGLVideoFrameAllocator;
- (void *)getCppSharedGLContext;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

