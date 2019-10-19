//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCAvatarBuilderLiveMirrorCollectionSourceDelegate-Protocol.h"
#import "SCAvatarBuilderLiveMirrorGenderPickerViewDelegate-Protocol.h"
#import "SCAvatarBuilderLiveMirrorViewDelegate-Protocol.h"
#import "SCCameraLiveDisplayCustomer-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCAvatarBuilderLiveMirrorCollectionSource, SCAvatarBuilderLiveMirrorGenderPickerView, SCAvatarBuilderLiveMirrorView, SCAvatarBuilderMirrorClassifier, SCCapturerToken, SCGrowingButton, SCLazy, SCLoadingIndicatorView, UIImage, UIView;
@protocol SCAvatarBuilderLiveMirrorViewControllerDelegate, SCCapturer, SCDownloadableContentManaging;

@interface SCAvatarBuilderLiveMirrorViewController : UIViewController <UIGestureRecognizerDelegate, SCAvatarBuilderLiveMirrorGenderPickerViewDelegate, SCAvatarBuilderLiveMirrorViewDelegate, SCAvatarBuilderLiveMirrorCollectionSourceDelegate, SCCameraLiveDisplayCustomer>
{
    id <SCCapturer> _managedCapturer;
    UIView *_cameraPreviewView;
    SCCapturerToken *_token;
    _Bool _isMirrorModelDownloading;
    unsigned long long _page;
    unsigned long long _gender;
    unsigned long long _liveMirrorState;
    id <SCDownloadableContentManaging> _downloadableContentManager;
    SCAvatarBuilderMirrorClassifier *_mirrorClassifier;
    SCAvatarBuilderLiveMirrorGenderPickerView *_genderPickerView;
    SCAvatarBuilderLiveMirrorView *_liveMirrorView;
    SCGrowingButton *_closeButton;
    SCAvatarBuilderLiveMirrorCollectionSource *_liveMirrorCollectionSource;
    _Bool _isCaptureStillImageAndClassifyQueued;
    SCLoadingIndicatorView *_activityIndicatorView;
    _Bool _viewHasAppeared;
    SCLazy *_contentDelivery;
    UIImage *_sampleSelfieImage;
    id <SCAvatarBuilderLiveMirrorViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCAvatarBuilderLiveMirrorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)timeBeforeReturningToCamera;
- (_Bool)shouldPopToRootViewController;
- (void)avatarBuilderLiveMirrorSourceDidSelectOption:(id)arg1;
- (void)avatarBuilderLiveMirrorSourceAddOptionButtonTapped:(id)arg1;
- (void)avatarBuilderLiveMirrorViewDidSelectContinue:(id)arg1;
- (void)avatarBuilderLiveMirrorViewBackButtonTapped:(id)arg1;
- (void)avatarBuilderLiveMirrorViewRetryButtonTapped:(id)arg1;
- (void)avatarBuilderLiveMirrorViewCaptureButtonTapped:(id)arg1;
- (void)avatarBuilderLiveMirrorViewSkipButtonTapped:(id)arg1;
- (void)genderAssetsFailedToLoadWithError:(id)arg1;
- (void)genderSelected:(unsigned long long)arg1;
- (void)_closeTapped;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (id)_mirrorClassificationStatusToString:(long long)arg1;
- (void)_logMirrorClassificationStatus:(long long)arg1;
- (void)_logImageCaptureWithError:(id)arg1;
- (void)_logGenderAssetsLoadTime:(double)arg1 withContentAvailable:(_Bool)arg2 error:(id)arg3;
- (void)_logMirrorModelLoadTime:(double)arg1 withContentAvailable:(_Bool)arg2 error:(id)arg3;
- (void)_transitionToState:(unsigned long long)arg1;
- (void)_stopCapturing;
- (void)_startCapturing;
- (void)_maybeDispatchCaptureStillImageAndClassifyWithDelay;
- (void)_showClassificationOutputWithMirrorResult:(id)arg1;
- (void)_captureStillImageAndClassify;
- (void)_downloadSampleSelfie;
- (void)_downloadGenderAssets;
- (void)_downloadMirrorModel;
- (id)_gradientViewForPosition:(unsigned long long)arg1 height:(double)arg2;
- (void)dealloc;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithManagedCapturer:(id)arg1 downloadableContentManager:(id)arg2 contentDelivery:(id)arg3 page:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
