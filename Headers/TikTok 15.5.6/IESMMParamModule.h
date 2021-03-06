//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary, NSString;

@interface IESMMParamModule : NSObject
{
    _Bool _editorCanUseAmazing;
    _Bool _useAmazingBuildIn;
    _Bool _useNewEffectLabAPI;
    _Bool _effectAPISupportUsingAsynCall;
    _Bool _isVideoFileSuffixUseMP4;
    _Bool _enableHardResolutionLimited;
    _Bool _enableHardResolutionLimitedV2;
    _Bool _openTextureToImage;
    _Bool _useServerPar;
    _Bool _useOpenGLES3;
    _Bool _useHEVCEncodeInRecorder;
    _Bool _useHEVCEncodeInEditor;
    _Bool _useHEVCRemuxInPublish;
    _Bool _revertMerge;
    _Bool _allowMixWithOther;
    _Bool _useReverseCache;
    _Bool _enableEffectRTReuse;
    _Bool _effect_use_pipeline_processor;
    _Bool _logAudioSessionOuputPort;
    _Bool _useMaxFrameSizeLimit;
    _Bool _recordCanUseAmazing;
    _Bool _infoStickerCanUseAmazing;
    _Bool _useNewTransStrategy;
    _Bool _fastImportNoForceEncode;
    _Bool _useFileFrameTimeInDuet;
    _Bool _isLVMode;
    _Bool _useNewAudioEditor;
    _Bool _useNewVideoExport;
    _Bool _useNewVideoPlayer;
    _Bool _useFFmpegDemuxForExport;
    _Bool _lvUseEditorSession;
    _Bool _copyFrameInAudioTranscoder;
    _Bool _transcoderCompleteSync;
    _Bool _useCrossPlatformProcessUnit;
    _Bool _enableCrossPlatformGLBase;
    _Bool _enableVEEditorReaderError;
    _Bool _enableVEEditorGLRefactor;
    _Bool _enableComposerBufferQueueOptimize;
    _Bool _imageGeneratorWithSecondVideoComp;
    _Bool _checkToPlayAndRecordInEditorPlayer;
    _Bool _fastImportPassThroughWithoutCheckRotation;
    _Bool _cancelMergeOptimize;
    _Bool _timemachineOptimize;
    _Bool _capturePreviewUpTo1080P;
    _Bool _enableColorOpt;
    _Bool _useNewAudioAPI;
    _Bool _enableUploadBitrateOpt;
    _Bool _enableFFmpegWriterForCompile;
    _Bool _reuseEncodedVideoFile;
    _Bool _veabtest_glrenderBgOptimize;
    int _composerMode;
    int _composerOrder;
    int _uploadBitrateOptBaseBitrate;
    int _editFpsLimited;
    int _enableAssetWriterHooks;
    double _fastImportFramerateTHR;
    unsigned long long _testAuthor;
    double _insertFrameFps;
    long long _frontPreferredStabilizationMode;
    long long _rearPreferredStabilizationMode;
    NSString *_effectJsonConfig;
    NSMutableDictionary *_abInfoDict;
    NSLock *_abInfoLock;
    struct CGSize _maxEditSize;
    struct CGSize _maxExportSize;
    struct CGSize _maxWaterMarkSize;
}

+ (void)updateLVModeParams:(_Bool)arg1;
+ (CDUnknownFunctionPointerType)getResourceFinder;
+ (void)setResourceFinder:(CDUnknownFunctionPointerType)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSLock *abInfoLock; // @synthesize abInfoLock=_abInfoLock;
@property(retain, nonatomic) NSMutableDictionary *abInfoDict; // @synthesize abInfoDict=_abInfoDict;
@property(nonatomic) int enableAssetWriterHooks; // @synthesize enableAssetWriterHooks=_enableAssetWriterHooks;
@property(nonatomic) int editFpsLimited; // @synthesize editFpsLimited=_editFpsLimited;
@property(nonatomic) _Bool veabtest_glrenderBgOptimize; // @synthesize veabtest_glrenderBgOptimize=_veabtest_glrenderBgOptimize;
@property(nonatomic) _Bool reuseEncodedVideoFile; // @synthesize reuseEncodedVideoFile=_reuseEncodedVideoFile;
@property(nonatomic) _Bool enableFFmpegWriterForCompile; // @synthesize enableFFmpegWriterForCompile=_enableFFmpegWriterForCompile;
@property(nonatomic) int uploadBitrateOptBaseBitrate; // @synthesize uploadBitrateOptBaseBitrate=_uploadBitrateOptBaseBitrate;
@property(nonatomic) _Bool enableUploadBitrateOpt; // @synthesize enableUploadBitrateOpt=_enableUploadBitrateOpt;
@property(nonatomic) _Bool useNewAudioAPI; // @synthesize useNewAudioAPI=_useNewAudioAPI;
@property(nonatomic) _Bool enableColorOpt; // @synthesize enableColorOpt=_enableColorOpt;
@property(nonatomic) _Bool capturePreviewUpTo1080P; // @synthesize capturePreviewUpTo1080P=_capturePreviewUpTo1080P;
@property(nonatomic) _Bool timemachineOptimize; // @synthesize timemachineOptimize=_timemachineOptimize;
@property(nonatomic) _Bool cancelMergeOptimize; // @synthesize cancelMergeOptimize=_cancelMergeOptimize;
@property(nonatomic) _Bool fastImportPassThroughWithoutCheckRotation; // @synthesize fastImportPassThroughWithoutCheckRotation=_fastImportPassThroughWithoutCheckRotation;
@property(nonatomic) _Bool checkToPlayAndRecordInEditorPlayer; // @synthesize checkToPlayAndRecordInEditorPlayer=_checkToPlayAndRecordInEditorPlayer;
@property(nonatomic) _Bool imageGeneratorWithSecondVideoComp; // @synthesize imageGeneratorWithSecondVideoComp=_imageGeneratorWithSecondVideoComp;
@property(nonatomic) _Bool enableComposerBufferQueueOptimize; // @synthesize enableComposerBufferQueueOptimize=_enableComposerBufferQueueOptimize;
@property(nonatomic) _Bool enableVEEditorGLRefactor; // @synthesize enableVEEditorGLRefactor=_enableVEEditorGLRefactor;
@property(nonatomic) _Bool enableVEEditorReaderError; // @synthesize enableVEEditorReaderError=_enableVEEditorReaderError;
@property(copy, nonatomic) NSString *effectJsonConfig; // @synthesize effectJsonConfig=_effectJsonConfig;
@property(nonatomic) _Bool enableCrossPlatformGLBase; // @synthesize enableCrossPlatformGLBase=_enableCrossPlatformGLBase;
@property(nonatomic) _Bool useCrossPlatformProcessUnit; // @synthesize useCrossPlatformProcessUnit=_useCrossPlatformProcessUnit;
@property(nonatomic) _Bool transcoderCompleteSync; // @synthesize transcoderCompleteSync=_transcoderCompleteSync;
@property(nonatomic) _Bool copyFrameInAudioTranscoder; // @synthesize copyFrameInAudioTranscoder=_copyFrameInAudioTranscoder;
@property(nonatomic) _Bool lvUseEditorSession; // @synthesize lvUseEditorSession=_lvUseEditorSession;
@property(nonatomic) _Bool useFFmpegDemuxForExport; // @synthesize useFFmpegDemuxForExport=_useFFmpegDemuxForExport;
@property(nonatomic) _Bool useNewVideoPlayer; // @synthesize useNewVideoPlayer=_useNewVideoPlayer;
@property(nonatomic) _Bool useNewVideoExport; // @synthesize useNewVideoExport=_useNewVideoExport;
@property(nonatomic) _Bool useNewAudioEditor; // @synthesize useNewAudioEditor=_useNewAudioEditor;
@property(nonatomic) _Bool isLVMode; // @synthesize isLVMode=_isLVMode;
@property(nonatomic) _Bool useFileFrameTimeInDuet; // @synthesize useFileFrameTimeInDuet=_useFileFrameTimeInDuet;
@property(nonatomic) long long rearPreferredStabilizationMode; // @synthesize rearPreferredStabilizationMode=_rearPreferredStabilizationMode;
@property(nonatomic) long long frontPreferredStabilizationMode; // @synthesize frontPreferredStabilizationMode=_frontPreferredStabilizationMode;
@property(nonatomic) _Bool fastImportNoForceEncode; // @synthesize fastImportNoForceEncode=_fastImportNoForceEncode;
@property(nonatomic) _Bool useNewTransStrategy; // @synthesize useNewTransStrategy=_useNewTransStrategy;
@property(nonatomic) _Bool infoStickerCanUseAmazing; // @synthesize infoStickerCanUseAmazing=_infoStickerCanUseAmazing;
@property(nonatomic) _Bool recordCanUseAmazing; // @synthesize recordCanUseAmazing=_recordCanUseAmazing;
@property(nonatomic) _Bool useMaxFrameSizeLimit; // @synthesize useMaxFrameSizeLimit=_useMaxFrameSizeLimit;
@property(nonatomic) struct CGSize maxWaterMarkSize; // @synthesize maxWaterMarkSize=_maxWaterMarkSize;
@property(nonatomic) struct CGSize maxExportSize; // @synthesize maxExportSize=_maxExportSize;
@property(nonatomic) struct CGSize maxEditSize; // @synthesize maxEditSize=_maxEditSize;
@property(nonatomic) double insertFrameFps; // @synthesize insertFrameFps=_insertFrameFps;
@property(nonatomic) int composerOrder; // @synthesize composerOrder=_composerOrder;
@property(nonatomic) int composerMode; // @synthesize composerMode=_composerMode;
@property(nonatomic) _Bool logAudioSessionOuputPort; // @synthesize logAudioSessionOuputPort=_logAudioSessionOuputPort;
@property(nonatomic) _Bool effect_use_pipeline_processor; // @synthesize effect_use_pipeline_processor=_effect_use_pipeline_processor;
@property(nonatomic) _Bool enableEffectRTReuse; // @synthesize enableEffectRTReuse=_enableEffectRTReuse;
@property(nonatomic) _Bool useReverseCache; // @synthesize useReverseCache=_useReverseCache;
@property(nonatomic) _Bool allowMixWithOther; // @synthesize allowMixWithOther=_allowMixWithOther;
@property(nonatomic) unsigned long long testAuthor; // @synthesize testAuthor=_testAuthor;
@property(nonatomic) _Bool revertMerge; // @synthesize revertMerge=_revertMerge;
@property(nonatomic) _Bool useHEVCRemuxInPublish; // @synthesize useHEVCRemuxInPublish=_useHEVCRemuxInPublish;
@property(nonatomic) _Bool useHEVCEncodeInEditor; // @synthesize useHEVCEncodeInEditor=_useHEVCEncodeInEditor;
@property(nonatomic) _Bool useHEVCEncodeInRecorder; // @synthesize useHEVCEncodeInRecorder=_useHEVCEncodeInRecorder;
@property(nonatomic) _Bool useOpenGLES3; // @synthesize useOpenGLES3=_useOpenGLES3;
@property(nonatomic) _Bool useServerPar; // @synthesize useServerPar=_useServerPar;
@property(nonatomic) _Bool openTextureToImage; // @synthesize openTextureToImage=_openTextureToImage;
@property(nonatomic) _Bool enableHardResolutionLimitedV2; // @synthesize enableHardResolutionLimitedV2=_enableHardResolutionLimitedV2;
@property(nonatomic) _Bool enableHardResolutionLimited; // @synthesize enableHardResolutionLimited=_enableHardResolutionLimited;
@property(nonatomic) double fastImportFramerateTHR; // @synthesize fastImportFramerateTHR=_fastImportFramerateTHR;
@property(nonatomic) _Bool isVideoFileSuffixUseMP4; // @synthesize isVideoFileSuffixUseMP4=_isVideoFileSuffixUseMP4;
@property(nonatomic) _Bool effectAPISupportUsingAsynCall; // @synthesize effectAPISupportUsingAsynCall=_effectAPISupportUsingAsynCall;
@property(nonatomic) _Bool useNewEffectLabAPI; // @synthesize useNewEffectLabAPI=_useNewEffectLabAPI;
@property(nonatomic) _Bool useAmazingBuildIn; // @synthesize useAmazingBuildIn=_useAmazingBuildIn;
@property(nonatomic) _Bool editorCanUseAmazing; // @synthesize editorCanUseAmazing=_editorCanUseAmazing;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool veabtest_crossplatGLContext;
@property(readonly, nonatomic) _Bool veabtest_autoBlueTooth;
@property(readonly, nonatomic) _Bool veabtest_mvUseAmazing;
@property(readonly, nonatomic) _Bool useNewFilterChain;
@property(readonly, nonatomic) _Bool veabtest_crossplatGLbaseFBO;
@property(readonly, nonatomic) _Bool veabtest_recorderUseReaderUnitAsPlayer;
@property(readonly, nonatomic) float veabtest_float;
@property(readonly, nonatomic) _Bool veabtest_bool;
@property(readonly, nonatomic) int veabtest_int;
@property(readonly, nonatomic) NSString *veabtest_string;
- (id)getABInfoByKey:(id)arg1;
- (id)init;

@end

