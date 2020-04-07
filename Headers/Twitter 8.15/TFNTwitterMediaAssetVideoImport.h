//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterMediaAssetALAsset.h>

#import <T1Twitter/TFNTwitterMediaAssetHashable-Protocol.h>

@class NSString, NSURL, TFNAVAssetExportSession, TFNTwitterMediaAssetVideoTrimParameters, TFSReferencedFile;

@interface TFNTwitterMediaAssetVideoImport : TFNTwitterMediaAssetALAsset <TFNTwitterMediaAssetHashable>
{
    _Bool _livePhotoPairedVideo;
    double _timeScale;
    double _ingestDuration;
    double _duration;
    NSString *_exportedVideoFilename;
    NSURL *_exportedVideoURL;
    TFNAVAssetExportSession *_exportSession;
    TFSReferencedFile *_livePhotoPairedVideoReferencedFile;
}

@property(readonly, nonatomic, getter=isLivePhotoPairedVideo) _Bool livePhotoPairedVideo; // @synthesize livePhotoPairedVideo=_livePhotoPairedVideo;
@property(retain, nonatomic) TFSReferencedFile *livePhotoPairedVideoReferencedFile; // @synthesize livePhotoPairedVideoReferencedFile=_livePhotoPairedVideoReferencedFile;
@property(retain, nonatomic) TFNAVAssetExportSession *exportSession; // @synthesize exportSession=_exportSession;
@property(readonly, nonatomic) NSURL *exportedVideoURL; // @synthesize exportedVideoURL=_exportedVideoURL;
@property(readonly, nonatomic) NSString *exportedVideoFilename; // @synthesize exportedVideoFilename=_exportedVideoFilename;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double ingestDuration; // @synthesize ingestDuration=_ingestDuration;
@property(nonatomic) double timeScale; // @synthesize timeScale=_timeScale;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_loadLivePhotoPairedVideoWithAsset:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)originalMediaURLWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long hashableSource;
- (void)avAssetWithProgressHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_writeToLibrary:(CDUnknownBlockType)arg1;
- (void)saveAssetToLibraryWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateScribeValueWithRenderingResult:(id)arg1;
- (void)_exportAvAssetWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_saveLocalBackupToFilePath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renderFinalDataWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_deleteExportedVideo;
- (void)_didUpdatePreview:(id)arg1 withOptions:(id)arg2;
- (void)_generatePreviewWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_expireCacheAfterEdits;
@property(retain, nonatomic) TFNTwitterMediaAssetVideoTrimParameters *trimParameters;
- (unsigned long long)attachmentType;
- (long long)mediaType;
- (id)_exportSessionWithAVAsset:(id)arg1;
- (void)_initExportedVideoFilename:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhotoAsset:(id)arg1;

@end
