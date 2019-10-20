//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetExportSession, NSString;

@interface IESMMAVExporter : NSObject
{
    long long _rotation;
    NSString *_presetName;
    AVAssetExportSession *_exportSession;
    struct CGSize _outputSize;
}

@property(retain, nonatomic) AVAssetExportSession *exportSession; // @synthesize exportSession=_exportSession;
@property(copy, nonatomic) NSString *presetName; // @synthesize presetName=_presetName;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(nonatomic) long long rotation; // @synthesize rotation=_rotation;
- (void).cxx_destruct;
- (id)videoCompsitionWithAsset:(id)arg1;
- (double)getProgress;
- (void)cancel;
- (void)exportAsset:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)exportVideoData:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;

@end
