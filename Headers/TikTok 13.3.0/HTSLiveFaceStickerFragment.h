//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveComponent-Protocol.h"
#import "HTSLiveFaceStickersViewDelegate-Protocol.h"

@class HTSEventContext, HTSLiveFaceStickersView, IESEffectPlatformResponseModel, IESLiveFaceStickerViewModel, LiveRoomModel, NSIndexPath, NSMutableArray, NSString, NSTimer, UILabel, UIView;
@protocol HTSLiveCameraEffectProvider, HTSLiveToolbarProvider, HTSLiveViewHierarchyProvider, IESLiveEffectPlatformConfig, IESLiveEnvironment, IESLiveMonitor, IESLiveSettings, IESLiveToastFactory, IESLiveTracker;

@interface HTSLiveFaceStickerFragment : NSObject <HTSLiveFaceStickersViewDelegate, HTSLiveComponent>
{
    _Bool _needDownload;
    LiveRoomModel *_roomModel;
    HTSEventContext *_trackContext;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <HTSLiveToolbarProvider> _toolbarProvider;
    id <HTSLiveCameraEffectProvider> _cameraEffectProvider;
    id <IESLiveSettings> _settings;
    id <IESLiveTracker> _tracker;
    id <IESLiveToastFactory> _toastFactory;
    id <IESLiveMonitor> _monitor;
    id <IESLiveEffectPlatformConfig> _config;
    id <IESLiveEnvironment> _appTarget;
    UIView *_faceAlertView;
    NSMutableArray *_myEffects;
    UILabel *_hintLabel;
    NSTimer *_stickerReportTimer;
    unsigned long long _stickerUsedTime;
    unsigned long long _stickerEffectivelyUseTime;
    NSString *_currentEffectIdentifier;
    NSIndexPath *_selectedIndexPath;
    long long _selectedCategoryIndex;
    HTSLiveFaceStickersView *_popupView;
    IESEffectPlatformResponseModel *_responseModel;
    IESLiveFaceStickerViewModel *_stickerViewModel;
}

+ (id)componentWithRoom:(id)arg1 trackContext:(id)arg2 componentContext:(id)arg3;
@property(nonatomic) _Bool needDownload; // @synthesize needDownload=_needDownload;
@property(retain, nonatomic) IESLiveFaceStickerViewModel *stickerViewModel; // @synthesize stickerViewModel=_stickerViewModel;
@property(retain, nonatomic) IESEffectPlatformResponseModel *responseModel; // @synthesize responseModel=_responseModel;
@property(nonatomic) __weak HTSLiveFaceStickersView *popupView; // @synthesize popupView=_popupView;
@property(nonatomic) long long selectedCategoryIndex; // @synthesize selectedCategoryIndex=_selectedCategoryIndex;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(copy, nonatomic) NSString *currentEffectIdentifier; // @synthesize currentEffectIdentifier=_currentEffectIdentifier;
@property(nonatomic) unsigned long long stickerEffectivelyUseTime; // @synthesize stickerEffectivelyUseTime=_stickerEffectivelyUseTime;
@property(nonatomic) unsigned long long stickerUsedTime; // @synthesize stickerUsedTime=_stickerUsedTime;
@property(retain, nonatomic) NSTimer *stickerReportTimer; // @synthesize stickerReportTimer=_stickerReportTimer;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) NSMutableArray *myEffects; // @synthesize myEffects=_myEffects;
@property(retain, nonatomic) UIView *faceAlertView; // @synthesize faceAlertView=_faceAlertView;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) id <IESLiveEffectPlatformConfig> config; // @synthesize config=_config;
@property(retain, nonatomic) id <IESLiveMonitor> monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <HTSLiveCameraEffectProvider> cameraEffectProvider; // @synthesize cameraEffectProvider=_cameraEffectProvider;
@property(nonatomic) __weak id <HTSLiveToolbarProvider> toolbarProvider; // @synthesize toolbarProvider=_toolbarProvider;
@property(nonatomic) __weak id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) HTSEventContext *trackContext; // @synthesize trackContext=_trackContext;
@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
- (void).cxx_destruct;
- (void)_hideFaceAlertView;
- (void)_showHintLabel:(id)arg1;
- (void)_showFaceAlertView;
- (void)_removeAllDetectHandler;
- (void)_addFaceDetectHandlerIfNeeded;
- (void)_selectFaceStickerWithName:(id)arg1 identifier:(id)arg2 filePath:(id)arg3;
- (void)faceStickersView:(id)arg1 didDownloadedEffectWithId:(id)arg2 withError:(id)arg3 duration:(double)arg4;
- (void)cleanEffects;
- (void)onOldGestureStickerSelected;
- (void)faceStickerView:(id)arg1 selectedCategoryIndexChanged:(unsigned long long)arg2;
- (void)faceStickerView:(id)arg1 selectedIndexPathChanged:(id)arg2;
- (void)clearStickerReportTimer;
- (void)stickerUsedCount;
- (void)showFaceStickersView;
- (void)loadToolbarItem;
- (void)componentWillUnmount;
- (void)componentDidMount;
- (void)downloadEffects;
- (id)initWithRoom:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
