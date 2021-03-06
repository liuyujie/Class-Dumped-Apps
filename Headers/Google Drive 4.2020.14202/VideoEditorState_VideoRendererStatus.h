//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class VideoEditorState_VideoRendererStatus_IosErrorInfo;

@interface VideoEditorState_VideoRendererStatus : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIosErrorInfo; // @dynamic hasIosErrorInfo;
@property(nonatomic) _Bool hasRendererStatus; // @dynamic hasRendererStatus;
@property(nonatomic) _Bool hasRendererVariant; // @dynamic hasRendererVariant;
@property(nonatomic) _Bool hasStabilizationApplied; // @dynamic hasStabilizationApplied;
@property(retain, nonatomic) VideoEditorState_VideoRendererStatus_IosErrorInfo *iosErrorInfo; // @dynamic iosErrorInfo;
@property(nonatomic) int rendererStatus; // @dynamic rendererStatus;
@property(nonatomic) int rendererVariant; // @dynamic rendererVariant;
@property(nonatomic) _Bool stabilizationApplied; // @dynamic stabilizationApplied;

@end

