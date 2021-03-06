//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGStoryCameraOverlayViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryFormatViewControllerProtocol-Protocol.h>

@class IGCameraViewController, IGStoryCameraOverlayViewController, IGStoryExtendedGalleryViewController, NSString;
@protocol IGStoryFormatViewControllerProtocolDelegate;

@interface IGStorySuperTakeFormatViewController : UIViewController <IGStoryCameraOverlayViewControllerDelegate, IGStoryFormatViewControllerProtocol>
{
    double _contentCornerRadius;
    IGCameraViewController *_cameraViewController;
    IGStoryCameraOverlayViewController *_overlayViewController;
    IGStoryExtendedGalleryViewController *_galleryViewController;
    id <IGStoryFormatViewControllerProtocolDelegate> _delegate;
    struct CGRect _contentRegion;
}

@property(nonatomic) __weak id <IGStoryFormatViewControllerProtocolDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGStoryExtendedGalleryViewController *galleryViewController; // @synthesize galleryViewController=_galleryViewController;
@property(retain, nonatomic) IGStoryCameraOverlayViewController *overlayViewController; // @synthesize overlayViewController=_overlayViewController;
@property(retain, nonatomic) IGCameraViewController *cameraViewController; // @synthesize cameraViewController=_cameraViewController;
@property(nonatomic) double contentCornerRadius; // @synthesize contentCornerRadius=_contentCornerRadius;
@property(nonatomic) struct CGRect contentRegion; // @synthesize contentRegion=_contentRegion;
- (void).cxx_destruct;
- (void)storyCameraOverlayViewController:(id)arg1 didSelectMusicClip:(id)arg2;
- (void)storyCameraOverlayViewDidExitTextInput:(id)arg1;
- (void)storyCameraOverlayView:(id)arg1 didChangeText:(id)arg2;
- (void)storyCameraOverlayView:(id)arg1 didChangeSliderWithValue:(double)arg2;
- (void)storyCameraOverlayView:(id)arg1 didChangePickerValueWithIndex:(long long)arg2;
- (void)storyCameraOverlayViewController:(id)arg1 didFinishHandsFreeCountdown:(_Bool)arg2;
- (void)storyCameraOverlayViewControllerDidBeginHandsFreeCountdown:(id)arg1;
- (void)storyCameraOverlayView:(id)arg1 didScaleZoom:(double)arg2;
- (void)storyCameraOverlayView:(id)arg1 didZoomByPercent:(double)arg2;
- (void)storyCameraOverlayViewDidUpdatePermissions:(id)arg1;
- (void)storyCameraOverlayViewController:(id)arg1 didToggleMuteButton:(_Bool)arg2;
- (void)storyCameraOverlayViewController:(id)arg1 didTapMediaReplyOverlayView:(id)arg2;
- (void)storyCameraOverlayViewController:(id)arg1 canvasModeViewControllerDidShareToStory:(long long)arg2 andDirectRecipients:(id)arg3;
- (void)storyCameraOverlayViewController:(id)arg1 didEndScrollingOnAREffectScrollingSelectorItemIndex:(long long)arg2;
- (void)storyCameraOverlayViewController:(id)arg1 didSelectAREffectScrollingSelectorItemAtIndex:(long long)arg2;
- (void)storyCameraOverlayViewControllerDidTapEffectNetworkConsentPill:(id)arg1;
- (void)storyCameraOverlayViewControllerDidManuallyScrollToDialItem:(id)arg1;
- (void)storyCameraOverlayViewController:(id)arg1 didRequestRemovalOfAREffectWithID:(id)arg2;
- (void)storyCameraOverlayViewControllerDialDidDeselectCurrentAREffect:(id)arg1;
- (void)storyCameraOverlayViewController:(id)arg1 dialDidSelectAREffect:(id)arg2 atIndex:(unsigned long long)arg3 usingData:(id)arg4;
- (void)storyCameraOverlayViewControllerDialDidCapturePhoto:(id)arg1;
- (void)storyCameraOverlayViewControllerDialDidStopVideoCapture:(id)arg1;
- (void)storyCameraOverlayViewControllerDialDidStartVideoCapture:(id)arg1;
- (void)storyCameraOverlayViewControllerDialDidFailVideoCapture:(id)arg1;
- (void)storyCameraOverlayViewController:(id)arg1 didToggleNetworkAccess:(_Bool)arg2;
- (void)storyCameraOverlayViewMoreInfoSheetDidLeaveFullscreenMode:(id)arg1;
- (void)storyCameraOverlayViewMoreInfoSheetDidEnterFullscreenMode:(id)arg1;
- (void)storyCameraOverlayViewController:(id)arg1 didTapLiveOverlay:(id)arg2 gesture:(id)arg3 numberOfTaps:(long long)arg4;
- (void)storyCameraOverlayViewControllerDidTapSettingsButton:(id)arg1;
- (void)storyCameraOverlayViewController:(id)arg1 didEndScrollOnCameraMode:(id)arg2;
- (void)storyCameraOverlayViewControllerDidTapLightingButton:(id)arg1;
- (void)storyCameraOverlayViewControllerDidTapGalleryButton:(id)arg1;
- (void)storyCameraOverlayViewControllerDidTapLive:(id)arg1;
- (void)storyCameraOverlayViewControllerDidTapSwitchCameras:(id)arg1;
- (void)storyCameraOverlayViewControllerDidTapCloseButton:(id)arg1;
- (void)storyCameraOverlayViewController:(id)arg1 didSwitchFromCameraMode:(id)arg2 toCameraMode:(id)arg3;
- (_Bool)storyCameraOverlayViewControllerDialShouldAllowVideoCapture:(id)arg1;
- (void)cameraDidStopRecording;
- (void)cameraWillStopRecording;
- (void)cameraDidStartRecording;
- (void)didDismissPostCaptureBySharing;
- (void)didDismissPostCaptureWithoutSharing;
- (void)tearDownAnimated:(_Bool)arg1;
- (void)setupAnimated:(_Bool)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)viewDidLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

