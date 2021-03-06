//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGCustomViewController-Protocol.h>
#import <InstagramAppCoreFramework/IGFeedCreationFlowControllerType-Protocol.h>
#import <InstagramAppCoreFramework/IGMediaCaptureViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVVideoCompositionUploadFlowDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UINavigationBarDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UIViewControllerTransitioningDelegate-Protocol.h>

@class IGEditorViewController, IGFeedCreationFlowLogger, IGTVVideoCompositionUploadFlow, IGUserSession, NSString, UINavigationBar, UIView;
@protocol IGFeedCreationFlowDelegate;

@interface IGCameraNavigationController : IGViewController <IGMediaCaptureViewControllerDelegate, IGTVVideoCompositionUploadFlowDelegate, UIViewControllerTransitioningDelegate, UINavigationBarDelegate, IGCustomViewController, IGFeedCreationFlowControllerType>
{
    IGFeedCreationFlowLogger *_logger;
    IGTVVideoCompositionUploadFlow *_igtvUploadFlow;
    id <IGFeedCreationFlowDelegate> _delegate;
    double _verticalOffset;
    UIView *_containerView;
    UINavigationBar *_navigationBar;
    UIView *_navigationBarShadow;
    IGEditorViewController *_currentEditor;
    IGUserSession *_userSession;
}

@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak IGEditorViewController *currentEditor; // @synthesize currentEditor=_currentEditor;
@property(retain, nonatomic) UIView *navigationBarShadow; // @synthesize navigationBarShadow=_navigationBarShadow;
@property(retain, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) double verticalOffset; // @synthesize verticalOffset=_verticalOffset;
@property(nonatomic) __weak id <IGFeedCreationFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_applicationWillEnterForeground;
- (void)_applicationDidEnterBackground;
- (void)popToRootViewControllerAndResetAssetsWithNewDraft:(id)arg1;
- (void)mediaCaptureViewController:(id)arg1 didSelectCompositionDraft:(id)arg2;
- (void)mediaCaptureViewController:(id)arg1 didSelectDraft:(id)arg2;
- (void)reloadNavigationItem:(id)arg1 animated:(_Bool)arg2;
- (void)reloadNavigationItem:(id)arg1;
- (void)videoCompositionUploadFlowDidTapPost;
- (void)mediaCaptureViewController:(id)arg1 didSelectVideoComposition:(id)arg2 creationAnalytics:(id)arg3;
- (void)mediaCaptureViewControllerDidCancel:(id)arg1;
- (void)navigationBar:(id)arg1 didPopItem:(id)arg2;
- (_Bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (void)navigationBar:(id)arg1 didPushItem:(id)arg2;
- (_Bool)navigationBar:(id)arg1 shouldPushItem:(id)arg2;
- (void)_popViewControllerWithPoppedToViewWillBeVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)popViewControllerAnimated:(_Bool)arg1;
- (void)_pushViewController:(id)arg1 viewWillBeVisible:(_Bool)arg2 animated:(_Bool)arg3;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)isNavigationBarHidden;
- (void)setNavigationBarHidden:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarUpdateAnimation;
- (id)ig_keyViewControllers;
- (id)initWithMetadata:(id)arg1 captureFlowViewModel:(id)arg2 mode:(long long)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

