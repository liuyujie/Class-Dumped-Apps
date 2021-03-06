//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGAddPartnerTaggingViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGBrandedContentViolationConfirmationViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGGenericMegaphoneViewV2Delegate-Protocol.h>
#import <InstagramAppCoreFramework/IGSimpleReelPreviewViewDelegate-Protocol.h>

@class IGBrandedContentTagAccessFlow, IGDefaultGenericMegaphoneLogger, IGFeedItem, IGGenericMegaphone, IGGenericMegaphoneViewV2, IGReel, IGSimpleReelPreviewView, IGSimpleReelPreviewViewModel, IGStoryViewerPresentationAnimationController, IGUserSession, NSString, UIActivityIndicatorView;

@interface IGBrandedContentViolationViewController : IGViewController <IGGenericMegaphoneViewV2Delegate, IGAddPartnerTaggingViewControllerDelegate, IGBrandedContentViolationConfirmationViewControllerDelegate, IGSimpleReelPreviewViewDelegate>
{
    _Bool _hasPrefetched;
    IGGenericMegaphone *_megaphone;
    IGGenericMegaphoneViewV2 *_megaphoneView;
    IGDefaultGenericMegaphoneLogger *_megaphoneLogger;
    IGViewController *_feedPreviewController;
    UIActivityIndicatorView *_spinner;
    IGSimpleReelPreviewView *_storyPreviewView;
    IGSimpleReelPreviewViewModel *_storyPreviewViewModel;
    IGUserSession *_userSession;
    IGFeedItem *_feedItem;
    IGReel *_reel;
    NSString *_feedItemId;
    NSString *_mediaId;
    IGStoryViewerPresentationAnimationController *_animationController;
    IGBrandedContentTagAccessFlow *_tagAccessFlow;
}

- (void).cxx_destruct;
- (void)_storyPreviewTapped;
- (void)_onDoneTapped:(id)arg1;
- (void)_showStoryViewViewController;
- (void)_closeAddPartnerVC;
- (void)simpleReelPreviewViewDidTapSurveyReelPreviewView:(id)arg1;
- (void)brandedContentViolationConfirmationViewControllerDidTapDone;
- (void)addPartnerTaggingViewControllerDidCancelOut:(id)arg1;
- (void)addPartnerTaggingViewControllerDidRemoveUser:(id)arg1 viewController:(id)arg2;
- (void)_showConfirmationVCWithTitle:(id)arg1 message:(id)arg2;
- (id)_createGenericErrorAlertView;
- (void)addPartnerTaggingViewControllerDidAddUser:(id)arg1 viewController:(id)arg2;
- (void)megaphoneViewNeedsResize:(id)arg1;
- (void)megaphoneViewDidDismiss:(id)arg1;
- (void)megaphoneView:(id)arg1 didSelectButton:(id)arg2;
- (void)_fetchData;
- (void)viewDidLayoutSubviews;
- (void)_setupStoryPreviewView;
- (id)_previewForFeedItem:(id)arg1;
- (void)_setupFeedPreviewView;
- (void)_setupSpinner;
- (void)_setupMegaphoneView;
- (void)_setupViews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 megaphone:(id)arg2 feedItem:(id)arg3 reel:(id)arg4;
- (id)initWithUserSession:(id)arg1 feedItemId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

