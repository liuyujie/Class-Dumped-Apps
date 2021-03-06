//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUploadPendingVideoInfo, IGUploadService, NSMutableArray, NSString;
@protocol IGPostAnalyticsProvider, IGUserExperimentSetProviding, IGUserLauncherSetProviding;

@interface IGUploadSessionBuilder : NSObject
{
    IGUploadService *_uploadService;
    id <IGPostAnalyticsProvider> _analyticsProvider;
    NSString *_waterfallId;
    NSString *_uploadServicePath;
    NSMutableArray *_maps;
    IGUploadPendingVideoInfo *_pendingVideoInfo;
    id <IGUserExperimentSetProviding> _experimentSetProvider;
    id <IGUserLauncherSetProviding> _launcherSetProvider;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)buildForResumeWithComposition:(id)arg1 context:(id)arg2;
- (id)build;
- (void)uploadAudioWithAudioFileUrl:(id)arg1 uploadId:(id)arg2 uploadParams:(id)arg3 mediaKey:(id)arg4;
- (void)commitVideoUploadWithCoverImageEncoding:(id)arg1;
- (void)uploadVideoWithSource:(id)arg1 renderOptions:(id)arg2 transcodeOptions:(id)arg3 videoSegmentsOutputFolderPath:(id)arg4 useFirstFrameForCoverPhoto:(_Bool)arg5 uploadId:(id)arg6 uploadParams:(id)arg7 mediaKey:(id)arg8 shouldMeasureQuality:(_Bool)arg9;
- (void)uploadImageUploadModel:(id)arg1 uploadId:(id)arg2 uploadParams:(id)arg3 mediaKey:(id)arg4;
- (id)initWithUploadService:(id)arg1 uploadServicePath:(id)arg2 analyticsProvider:(id)arg3 waterfallId:(id)arg4 experimentSetProvider:(id)arg5 launcherSetProvider:(id)arg6;

@end

