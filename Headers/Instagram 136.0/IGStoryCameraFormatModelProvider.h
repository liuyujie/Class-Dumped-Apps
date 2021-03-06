//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGStoryCameraFormatModelProviding-Protocol.h>
#import <FBSharedFramework/IGUserSessionObject-Protocol.h>

@class IGStoryCameraFormatModel, NSString;
@protocol IGUserExperimentSetProviding, IGUserLauncherSetProviding;

@interface IGStoryCameraFormatModelProvider : NSObject <IGUserSessionObject, IGStoryCameraFormatModelProviding>
{
    id <IGUserExperimentSetProviding> _experimentSet;
    id <IGUserLauncherSetProviding> _launcherSet;
    IGStoryCameraFormatModel *_normalFormatModel;
    IGStoryCameraFormatModel *_liveFormatModel;
    IGStoryCameraFormatModel *_boomerangFormatModel;
    IGStoryCameraFormatModel *_handsFreeFormatModel;
    IGStoryCameraFormatModel *_superzoomFormatModel;
    IGStoryCameraFormatModel *_mirrorFormatModel;
    IGStoryCameraFormatModel *_superTakeFormatModel;
    IGStoryCameraFormatModel *_photoBoothFormatModel;
    IGStoryCameraFormatModel *_portraitFormatModel;
    IGStoryCameraFormatModel *_richTextFormatModel;
    IGStoryCameraFormatModel *_musicFormatModel;
    IGStoryCameraFormatModel *_createFormatModel;
    IGStoryCameraFormatModel *_proPhotoFormatModel;
    IGStoryCameraFormatModel *_clipFormatModel;
    IGStoryCameraFormatModel *_layoutFormatModel;
    IGStoryCameraFormatModel *_multiCamFormatModel;
    IGStoryCameraFormatModel *_igtvFormatModel;
}

- (void).cxx_destruct;
- (id)_modelForCameraSwitcherMode:(long long)arg1 cameraStyle:(long long)arg2;
- (id)modelForCameraSwitcherMode:(long long)arg1 cameraStyle:(long long)arg2;
- (id)modelForCameraSwitcherMode:(long long)arg1;
- (void)clearFormatModels;
- (id)initWithExperimentSet:(id)arg1 launcherSet:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

