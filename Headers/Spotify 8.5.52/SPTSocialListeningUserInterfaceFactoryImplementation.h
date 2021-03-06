//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSocialListeningUserInterfaceFactory-Protocol.h"

@class NSString, SPTSocialListeningDialogPresenter, SPTSocialListeningGLUETheme, SPTSocialListeningLoggerImplementation, SPTSocialListeningModelImplementation;
@protocol GLUEImageLoader, SPTContainerUIService, SPTLinkDispatcher, SPTOfflineModeState, SPTScannablesPresenter, SPTShareFeature, SPTSocialListeningTestManager;

@interface SPTSocialListeningUserInterfaceFactoryImplementation : NSObject <SPTSocialListeningUserInterfaceFactory>
{
    SPTSocialListeningGLUETheme *_theme;
    SPTSocialListeningModelImplementation *_model;
    SPTSocialListeningLoggerImplementation *_logger;
    SPTSocialListeningDialogPresenter *_dialogPresenter;
    id <GLUEImageLoader> _imageLoader;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTSocialListeningTestManager> _testManager;
    id <SPTScannablesPresenter> _scannablesPresenter;
    id <SPTContainerUIService> _containerUIService;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTShareFeature> _shareFeature;
}

@property(nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(nonatomic) __weak id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTScannablesPresenter> scannablesPresenter; // @synthesize scannablesPresenter=_scannablesPresenter;
@property(readonly, nonatomic) id <SPTSocialListeningTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) SPTSocialListeningDialogPresenter *dialogPresenter; // @synthesize dialogPresenter=_dialogPresenter;
@property(readonly, nonatomic) SPTSocialListeningLoggerImplementation *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTSocialListeningModelImplementation *model; // @synthesize model=_model;
@property(readonly, nonatomic) SPTSocialListeningGLUETheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (id)createSocialListeningSessionView;
- (id)initWithTheme:(id)arg1 scannablesPresenter:(id)arg2 containerUIService:(id)arg3 offlineModeState:(id)arg4 shareFeature:(id)arg5 model:(id)arg6 logger:(id)arg7 dialogPresenter:(id)arg8 imageLoader:(id)arg9 linkDispatcher:(id)arg10 testManager:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

