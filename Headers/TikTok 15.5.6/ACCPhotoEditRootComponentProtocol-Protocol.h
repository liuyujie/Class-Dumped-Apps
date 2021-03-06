//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCComponentProtocol-Protocol.h"

@class ACCEditViewControllerInputData, AWEImageProcessService, AWEPhotoEditorModel, UIView;

@protocol ACCPhotoEditRootComponentProtocol <ACCComponentProtocol>
@property(retain, nonatomic) ACCEditViewControllerInputData *inputData;
@property(retain, nonatomic) AWEPhotoEditorModel *pictureEditorModel;
@property(retain, nonatomic) AWEImageProcessService *imageProcessService;
@property(retain, nonatomic) UIView *referenceView;
@property(retain, nonatomic) UIView *containerView;
@property(retain, nonatomic) UIView *mediaContainer;
@property(retain, nonatomic) UIView *avoidShowBgColorViewWhenDisapper;
@property(retain, nonatomic) UIView *editAndPublishViewSnap;
@property(retain, nonatomic) UIView *mediaContainerSnap;
- (void)configWithInputData:(ACCEditViewControllerInputData *)arg1;
@end

