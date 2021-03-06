//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGGLFilter.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGSurface, NSString;

@interface IGImageFilter : IGGLFilter <NSCopying>
{
    _Bool _needsConfigure;
    IGSurface *_maskLayer;
    CDUnion_7d78eca3 _contentVertices;
    unsigned int _contentVertexBuffer;
    _Bool _isIglInitialized;
    _Bool _iglNeedsConfigure;
    shared_ptr_3ca5f01e _squaredVb0;
    shared_ptr_3ca5f01e _userCustomVb0;
    shared_ptr_3ca5f01e _vb1;
    shared_ptr_3ca5f01e _ib0;
    struct shared_ptr<igl::IVertexInputState> _vertexInput0;
    struct map<std::__1::basic_string<char>, std::__1::shared_ptr<igl::ITexture>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<igl::ITexture>>>> _textureCache;
    struct shared_ptr<igl::ISamplerState> _samplerState;
    _Bool _shouldRespectSurfaceAspectRatio;
    _Bool _shouldDrawYUVOpaquely;
    _Bool _shouldPremultiplyAlpha;
    _Bool _flip;
    double _strength;
    NSString *_fullFragmentShader;
    long long _inputPixelFormat;
    long long _targetLoadAction;
    CDUnion_7d78eca3 _textureVertices;
    struct _GLKMatrix4 _contentTransform;
    struct _GLKMatrix4 _textureTransform;
}

+ (long long)filterType;
+ (id)filterName;
@property(nonatomic) _Bool flip; // @synthesize flip=_flip;
@property(nonatomic) _Bool shouldPremultiplyAlpha; // @synthesize shouldPremultiplyAlpha=_shouldPremultiplyAlpha;
@property(nonatomic) _Bool shouldDrawYUVOpaquely; // @synthesize shouldDrawYUVOpaquely=_shouldDrawYUVOpaquely;
@property(nonatomic) _Bool shouldRespectSurfaceAspectRatio; // @synthesize shouldRespectSurfaceAspectRatio=_shouldRespectSurfaceAspectRatio;
@property(nonatomic) long long targetLoadAction; // @synthesize targetLoadAction=_targetLoadAction;
@property(nonatomic) long long inputPixelFormat; // @synthesize inputPixelFormat=_inputPixelFormat;
@property(copy, nonatomic) NSString *fullFragmentShader; // @synthesize fullFragmentShader=_fullFragmentShader;
@property(nonatomic) double strength; // @synthesize strength=_strength;
@property(nonatomic) CDUnion_7d78eca3 textureVertices; // @synthesize textureVertices=_textureVertices;
@property(nonatomic) CDUnion_7d78eca3 contentVertices; // @synthesize contentVertices=_contentVertices;
@property(nonatomic) struct _GLKMatrix4 textureTransform; // @synthesize textureTransform=_textureTransform;
@property(nonatomic) struct _GLKMatrix4 contentTransform; // @synthesize contentTransform=_contentTransform;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct __CVBuffer *maskLayer;
- (void)render:(id)arg1 to:(id)arg2 program:(id)arg3;
- (_Bool)canRenderWithIgl:(id)arg1;
- (void)renderIGL:(id)arg1 to:(id)arg2 program:(id)arg3;
- (void)setupIGL;
- (shared_ptr_b95409fc)iglLoadTexture2D:(id)arg1;
- (unsigned int)_vertexBufferWithVertices:(CDUnion_7d78eca3)arg1;
- (void)configureProgram:(id)arg1;
- (_Bool)filterSupportsIGL;
- (id)fragmentShader;
- (id)fragmentShaderPrecision;
- (id)fragmentFunctions;
- (id)_generateFullFragmentShader;
- (id)strengthShaderCode;
- (id)vertexShader;
- (shared_ptr_f8fe3212)fragmentBufferDescIGL:(id)arg1;
- (shared_ptr_3ca5f01e)fragmentBufferIGL:(shared_ptr_b95409fc)arg1;
- (shared_ptr_3ca5f01e)vertexBufferUniformsIGL;
- (id)samplersIGL;
- (id)fragmentShaderIGL;
- (id)vertexShaderIGL;
- (id)fullVertexShader;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

