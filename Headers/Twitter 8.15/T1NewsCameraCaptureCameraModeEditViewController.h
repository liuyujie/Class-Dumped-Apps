//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1AltTextViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1AutocompleteViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1NewsCameraCapturePreviewTopChromeViewDelegate-Protocol.h>
#import <T1Twitter/T1NewsCameraColorPickerDelegate-Protocol.h>
#import <T1Twitter/T1NewsCameraEventHashtagsViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1NewsCameraGeoPickerControllerDelegate-Protocol.h>
#import <T1Twitter/T1NewsCameraTweetTextEditViewDelegate-Protocol.h>
#import <T1Twitter/T1ThreadTweetsViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNCircularCountProgressDataSource-Protocol.h>
#import <T1Twitter/TFNKeyboardDismissalContainerViewDelegate-Protocol.h>
#import <T1Twitter/TFNModalHitTestViewDelegate-Protocol.h>
#import <T1Twitter/TFNTooltipDelegate-Protocol.h>
#import <T1Twitter/UIGestureRecognizerDelegate-Protocol.h>
#import <T1Twitter/UITextViewDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, T1AutocompleteViewController, T1ComposeAccountAvatarImageView, T1NewsCameraCaptureChyronView, T1NewsCameraCaptureOutput, T1NewsCameraCapturePreviewTopChromeView, T1NewsCameraCapturePreviewView, T1NewsCameraColorPicker, T1NewsCameraComposition, T1NewsCameraControlButton, T1NewsCameraEventHashtagsViewController, T1NewsCameraFetchResult, T1NewsCameraGeoPickerButton, T1NewsCameraGeoPickerController, T1NewsCameraTweetTextEditView, T1ThreadTweetsViewController, TFNCircularCountProgressView, TFNKeyboardDismissalContainerView, TFNModalHitTestView, TFNTwitterAccount, TFSTimer, TFSTwitterScribeContext, UIButton, UILayoutGuide, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol T1NewsCameraCaptureCameraModeEditViewControllerDelegate;

@interface T1NewsCameraCaptureCameraModeEditViewController : TFNViewController <T1AltTextViewControllerDelegate, T1AutocompleteViewControllerDelegate, T1NewsCameraCapturePreviewTopChromeViewDelegate, T1NewsCameraColorPickerDelegate, T1NewsCameraEventHashtagsViewControllerDelegate, T1NewsCameraGeoPickerControllerDelegate, T1NewsCameraTweetTextEditViewDelegate, T1ThreadTweetsViewControllerDelegate, TFNCircularCountProgressDataSource, TFNKeyboardDismissalContainerViewDelegate, TFNModalHitTestViewDelegate, TFNTooltipDelegate, UIGestureRecognizerDelegate, UITextViewDelegate>
{
    _Bool _viewFullyLoaded;
    _Bool _fullyPresented;
    _Bool _selectThreadEnabled;
    id <T1NewsCameraCaptureCameraModeEditViewControllerDelegate> _delegate;
    TFNTwitterAccount *_account;
    T1NewsCameraComposition *_composition;
    T1NewsCameraCaptureOutput *_captureOutput;
    T1NewsCameraFetchResult *_currentPlacesFetchResult;
    T1NewsCameraFetchResult *_currentEventHashtagsFetchResult;
    TFSTwitterScribeContext *_scribeContext;
    unsigned long long _state;
    UILayoutGuide *_previewContainerViewLayoutMarginsGuidePositionLayoutGuide;
    UIView *_selectThreadContainerView;
    T1ThreadTweetsViewController *_selectThreadViewController;
    UIView *_previewContainerView;
    UILayoutGuide *_previewContainerViewLayoutMarginsGuide;
    NSLayoutConstraint *_previewContainerViewLayoutMarginsGuideTopAnchorConstraint;
    UIPanGestureRecognizer *_previewContainerViewPanGestureRecognizer;
    double _initialPreviewContainerViewDraggingPositionPercentage;
    double _previewContainerViewPositionPercentage;
    TFSTimer *_previewContainerViewPositionTimer;
    T1NewsCameraCapturePreviewView *_previewView;
    UILayoutGuide *_previewViewLayoutMarginsGuide;
    T1NewsCameraCapturePreviewTopChromeView *_previewTopChromeView;
    UITapGestureRecognizer *_previewTopChromeViewTapGestureRecognizer;
    UILayoutGuide *_controlButtonsLayoutGuide;
    TFNKeyboardDismissalContainerView *_keyboardDismissalContainerView;
    UILongPressGestureRecognizer *_contentViewLongPressGestureRecognizer;
    UIView *_chyronBackgroundView;
    UITapGestureRecognizer *_chyronBackgroundViewTapGestureRecognizer;
    UILayoutGuide *_chyronViewLayoutGuide;
    NSLayoutConstraint *_chyronViewLayoutGuideTopAnchorConstraint;
    UILayoutGuide *_expandedChyronViewLayoutGuide;
    T1NewsCameraCaptureChyronView *_chyronView;
    NSLayoutConstraint *_chyronViewTopAnchorConstraint;
    NSArray *_chyronViewPercentageTransitionLayoutConstraints;
    UITapGestureRecognizer *_chyronViewTapGestureRecognizer;
    double _chyronViewPositionPercentage;
    double _chyronViewTransitionPercentage;
    UILayoutGuide *_chyronViewContentLayoutGuide;
    NSLayoutConstraint *_chyronViewContentLayoutGuideTopAnchorConstraint;
    T1NewsCameraGeoPickerButton *_geoPickerButton;
    NSLayoutConstraint *_geoPickerButtonLeadingAnchorConstraint;
    T1NewsCameraGeoPickerController *_currentGeoPickerViewController;
    T1ComposeAccountAvatarImageView *_avatarImageView;
    T1NewsCameraTweetTextEditView *_tweetTextEditView;
    T1NewsCameraEventHashtagsViewController *_eventHashtagsViewController;
    UIView *_controlsView;
    UIButton *_tweetButton;
    TFNCircularCountProgressView *_tweetTextCountProgressView;
    T1NewsCameraColorPicker *_colorPickerViewController;
    NSLayoutConstraint *_colorPickerViewControllerLeadingAnchorConstraint;
    NSLayoutConstraint *_colorPickerViewControllerExpandedLeadingAnchorConstraint;
    NSLayoutConstraint *_colorPickerViewControllerTrailingAnchorConstraint;
    NSLayoutConstraint *_colorPickerViewControllerExpandedTrailingAnchorConstraint;
    T1AutocompleteViewController *_autocompleteViewController;
    NSLayoutConstraint *_autocompleteViewControllerHeightAnchorConstraint;
    NSLayoutConstraint *_autocompleteViewControllerHiddenHeightAnchorConstraint;
    T1NewsCameraControlButton *_cancelButton;
    UIButton *_muteButton;
    UIButton *_addDescriptionButton;
    NSLayoutConstraint *_addDescriptionButtonTrailingAnchorConstraint;
    NSLayoutConstraint *_addDescriptionButtonWithMuteButtonTrailingAnchorConstraint;
    struct CGPoint _lastPreviewContainerViewDraggingTranslation;
    struct CGPoint _lastKeyboardDismissContainerViewDraggingTranslation;
}

+ (_Bool)needsToPresentSelectThreadOnboarding;
+ (void)setNeedsToPresentSelectThreadOnboarding:(_Bool)arg1;
@property(retain, nonatomic) NSLayoutConstraint *addDescriptionButtonWithMuteButtonTrailingAnchorConstraint; // @synthesize addDescriptionButtonWithMuteButtonTrailingAnchorConstraint=_addDescriptionButtonWithMuteButtonTrailingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *addDescriptionButtonTrailingAnchorConstraint; // @synthesize addDescriptionButtonTrailingAnchorConstraint=_addDescriptionButtonTrailingAnchorConstraint;
@property(retain, nonatomic) UIButton *addDescriptionButton; // @synthesize addDescriptionButton=_addDescriptionButton;
@property(retain, nonatomic) UIButton *muteButton; // @synthesize muteButton=_muteButton;
@property(retain, nonatomic) T1NewsCameraControlButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NSLayoutConstraint *autocompleteViewControllerHiddenHeightAnchorConstraint; // @synthesize autocompleteViewControllerHiddenHeightAnchorConstraint=_autocompleteViewControllerHiddenHeightAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *autocompleteViewControllerHeightAnchorConstraint; // @synthesize autocompleteViewControllerHeightAnchorConstraint=_autocompleteViewControllerHeightAnchorConstraint;
@property(retain, nonatomic) T1AutocompleteViewController *autocompleteViewController; // @synthesize autocompleteViewController=_autocompleteViewController;
@property(retain, nonatomic) NSLayoutConstraint *colorPickerViewControllerExpandedTrailingAnchorConstraint; // @synthesize colorPickerViewControllerExpandedTrailingAnchorConstraint=_colorPickerViewControllerExpandedTrailingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *colorPickerViewControllerTrailingAnchorConstraint; // @synthesize colorPickerViewControllerTrailingAnchorConstraint=_colorPickerViewControllerTrailingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *colorPickerViewControllerExpandedLeadingAnchorConstraint; // @synthesize colorPickerViewControllerExpandedLeadingAnchorConstraint=_colorPickerViewControllerExpandedLeadingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *colorPickerViewControllerLeadingAnchorConstraint; // @synthesize colorPickerViewControllerLeadingAnchorConstraint=_colorPickerViewControllerLeadingAnchorConstraint;
@property(retain, nonatomic) T1NewsCameraColorPicker *colorPickerViewController; // @synthesize colorPickerViewController=_colorPickerViewController;
@property(retain, nonatomic) TFNCircularCountProgressView *tweetTextCountProgressView; // @synthesize tweetTextCountProgressView=_tweetTextCountProgressView;
@property(retain, nonatomic) UIButton *tweetButton; // @synthesize tweetButton=_tweetButton;
@property(retain, nonatomic) UIView *controlsView; // @synthesize controlsView=_controlsView;
@property(retain, nonatomic) T1NewsCameraEventHashtagsViewController *eventHashtagsViewController; // @synthesize eventHashtagsViewController=_eventHashtagsViewController;
@property(retain, nonatomic) T1NewsCameraTweetTextEditView *tweetTextEditView; // @synthesize tweetTextEditView=_tweetTextEditView;
@property(retain, nonatomic) T1ComposeAccountAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak T1NewsCameraGeoPickerController *currentGeoPickerViewController; // @synthesize currentGeoPickerViewController=_currentGeoPickerViewController;
@property(retain, nonatomic) NSLayoutConstraint *geoPickerButtonLeadingAnchorConstraint; // @synthesize geoPickerButtonLeadingAnchorConstraint=_geoPickerButtonLeadingAnchorConstraint;
@property(retain, nonatomic) T1NewsCameraGeoPickerButton *geoPickerButton; // @synthesize geoPickerButton=_geoPickerButton;
@property(retain, nonatomic) NSLayoutConstraint *chyronViewContentLayoutGuideTopAnchorConstraint; // @synthesize chyronViewContentLayoutGuideTopAnchorConstraint=_chyronViewContentLayoutGuideTopAnchorConstraint;
@property(retain, nonatomic) UILayoutGuide *chyronViewContentLayoutGuide; // @synthesize chyronViewContentLayoutGuide=_chyronViewContentLayoutGuide;
@property(nonatomic) double chyronViewTransitionPercentage; // @synthesize chyronViewTransitionPercentage=_chyronViewTransitionPercentage;
@property(nonatomic) double chyronViewPositionPercentage; // @synthesize chyronViewPositionPercentage=_chyronViewPositionPercentage;
@property(retain, nonatomic) UITapGestureRecognizer *chyronViewTapGestureRecognizer; // @synthesize chyronViewTapGestureRecognizer=_chyronViewTapGestureRecognizer;
@property(copy, nonatomic) NSArray *chyronViewPercentageTransitionLayoutConstraints; // @synthesize chyronViewPercentageTransitionLayoutConstraints=_chyronViewPercentageTransitionLayoutConstraints;
@property(retain, nonatomic) NSLayoutConstraint *chyronViewTopAnchorConstraint; // @synthesize chyronViewTopAnchorConstraint=_chyronViewTopAnchorConstraint;
@property(retain, nonatomic) T1NewsCameraCaptureChyronView *chyronView; // @synthesize chyronView=_chyronView;
@property(retain, nonatomic) UILayoutGuide *expandedChyronViewLayoutGuide; // @synthesize expandedChyronViewLayoutGuide=_expandedChyronViewLayoutGuide;
@property(retain, nonatomic) NSLayoutConstraint *chyronViewLayoutGuideTopAnchorConstraint; // @synthesize chyronViewLayoutGuideTopAnchorConstraint=_chyronViewLayoutGuideTopAnchorConstraint;
@property(retain, nonatomic) UILayoutGuide *chyronViewLayoutGuide; // @synthesize chyronViewLayoutGuide=_chyronViewLayoutGuide;
@property(retain, nonatomic) UITapGestureRecognizer *chyronBackgroundViewTapGestureRecognizer; // @synthesize chyronBackgroundViewTapGestureRecognizer=_chyronBackgroundViewTapGestureRecognizer;
@property(retain, nonatomic) UIView *chyronBackgroundView; // @synthesize chyronBackgroundView=_chyronBackgroundView;
@property(nonatomic) struct CGPoint lastKeyboardDismissContainerViewDraggingTranslation; // @synthesize lastKeyboardDismissContainerViewDraggingTranslation=_lastKeyboardDismissContainerViewDraggingTranslation;
@property(retain, nonatomic) UILongPressGestureRecognizer *contentViewLongPressGestureRecognizer; // @synthesize contentViewLongPressGestureRecognizer=_contentViewLongPressGestureRecognizer;
@property(retain, nonatomic) TFNKeyboardDismissalContainerView *keyboardDismissalContainerView; // @synthesize keyboardDismissalContainerView=_keyboardDismissalContainerView;
@property(retain, nonatomic) UILayoutGuide *controlButtonsLayoutGuide; // @synthesize controlButtonsLayoutGuide=_controlButtonsLayoutGuide;
@property(retain, nonatomic) UITapGestureRecognizer *previewTopChromeViewTapGestureRecognizer; // @synthesize previewTopChromeViewTapGestureRecognizer=_previewTopChromeViewTapGestureRecognizer;
@property(retain, nonatomic) T1NewsCameraCapturePreviewTopChromeView *previewTopChromeView; // @synthesize previewTopChromeView=_previewTopChromeView;
@property(retain, nonatomic) UILayoutGuide *previewViewLayoutMarginsGuide; // @synthesize previewViewLayoutMarginsGuide=_previewViewLayoutMarginsGuide;
@property(retain, nonatomic) T1NewsCameraCapturePreviewView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) TFSTimer *previewContainerViewPositionTimer; // @synthesize previewContainerViewPositionTimer=_previewContainerViewPositionTimer;
@property(nonatomic) double previewContainerViewPositionPercentage; // @synthesize previewContainerViewPositionPercentage=_previewContainerViewPositionPercentage;
@property(nonatomic) struct CGPoint lastPreviewContainerViewDraggingTranslation; // @synthesize lastPreviewContainerViewDraggingTranslation=_lastPreviewContainerViewDraggingTranslation;
@property(nonatomic) double initialPreviewContainerViewDraggingPositionPercentage; // @synthesize initialPreviewContainerViewDraggingPositionPercentage=_initialPreviewContainerViewDraggingPositionPercentage;
@property(retain, nonatomic) UIPanGestureRecognizer *previewContainerViewPanGestureRecognizer; // @synthesize previewContainerViewPanGestureRecognizer=_previewContainerViewPanGestureRecognizer;
@property(retain, nonatomic) NSLayoutConstraint *previewContainerViewLayoutMarginsGuideTopAnchorConstraint; // @synthesize previewContainerViewLayoutMarginsGuideTopAnchorConstraint=_previewContainerViewLayoutMarginsGuideTopAnchorConstraint;
@property(retain, nonatomic) UILayoutGuide *previewContainerViewLayoutMarginsGuide; // @synthesize previewContainerViewLayoutMarginsGuide=_previewContainerViewLayoutMarginsGuide;
@property(retain, nonatomic) UIView *previewContainerView; // @synthesize previewContainerView=_previewContainerView;
@property(retain, nonatomic) T1ThreadTweetsViewController *selectThreadViewController; // @synthesize selectThreadViewController=_selectThreadViewController;
@property(retain, nonatomic) UIView *selectThreadContainerView; // @synthesize selectThreadContainerView=_selectThreadContainerView;
@property(nonatomic, getter=isSelectThreadEnabled) _Bool selectThreadEnabled; // @synthesize selectThreadEnabled=_selectThreadEnabled;
@property(retain, nonatomic) UILayoutGuide *previewContainerViewLayoutMarginsGuidePositionLayoutGuide; // @synthesize previewContainerViewLayoutMarginsGuidePositionLayoutGuide=_previewContainerViewLayoutMarginsGuidePositionLayoutGuide;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic, getter=isFullyPresented) _Bool fullyPresented; // @synthesize fullyPresented=_fullyPresented;
@property(nonatomic, getter=isViewFullyLoaded) _Bool viewFullyLoaded; // @synthesize viewFullyLoaded=_viewFullyLoaded;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(retain, nonatomic) T1NewsCameraFetchResult *currentEventHashtagsFetchResult; // @synthesize currentEventHashtagsFetchResult=_currentEventHashtagsFetchResult;
@property(retain, nonatomic) T1NewsCameraFetchResult *currentPlacesFetchResult; // @synthesize currentPlacesFetchResult=_currentPlacesFetchResult;
@property(retain, nonatomic) T1NewsCameraCaptureOutput *captureOutput; // @synthesize captureOutput=_captureOutput;
@property(copy, nonatomic) T1NewsCameraComposition *composition; // @synthesize composition=_composition;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak id <T1NewsCameraCaptureCameraModeEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tooltipDidTap:(id)arg1;
- (void)altTextViewController:(id)arg1 didCompleteWithAltText:(id)arg2;
- (void)altTextViewControllerDidCancel:(id)arg1;
- (void)newsCameraEventHashtagsViewController:(id)arg1 didChangeSelectedIndex:(long long)arg2;
- (void)geoPickerDidSelectPlaceWithPlace:(id)arg1 preciseLocation:(id)arg2;
- (void)geoPickerRequestedLocationRetry;
- (void)geoPickerRequestedDismiss;
- (void)geoPickerRequestedPresentation;
- (void)_t1_main_updateModalHitTestView;
- (void)colorPicker:(id)arg1 didSelectItemWithIdentifier:(id)arg2;
- (void)colorPickerWillSelect:(id)arg1;
- (void)modalHitTestViewDidTapModalBackgroundView:(id)arg1;
- (void)keyboardDismissalContainerView:(id)arg1 didEndDraggingWithVelocity:(struct CGPoint)arg2 state:(unsigned long long)arg3;
- (void)keyboardDismissalContainerView:(id)arg1 didChangeDraggingWithTranslation:(struct CGPoint)arg2;
- (void)keyboardDismissalContainerViewDidBeginDragging:(id)arg1;
- (_Bool)keyboardDismissalContainerView:(id)arg1 shouldBeginDraggingAtLocation:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3;
- (void)keyboardDismissalContainerView:(id)arg1 keyboardDidChangeFrameInView:(struct CGRect)arg2;
- (long long)remainingCountForWarningDisplayInProgressView:(id)arg1;
- (long long)remainingCountForProgressView:(id)arg1;
- (long long)currentCountForProgressView:(id)arg1;
- (void)autocompleteViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)_t1_main_updateAutocompleteViewAnimated:(_Bool)arg1;
- (void)newsCameraTweetTextEditView:(id)arg1 didUpdateAutocompleteResult:(id)arg2;
- (void)newsCameraTweetTextEditViewDidEndAutocomplete:(id)arg1;
- (void)newsCameraTweetTextEditViewDidBeginAutocomplete:(id)arg1;
- (void)_t1_main_reloadTweetTextCountProgressView;
- (void)newsCameraTweetTextEditView:(id)arg1 didChangeInputLocalIdentifier:(id)arg2;
- (void)_t1_main_updateChyronViewLayoutGuideHeight;
- (void)newsCameraTweetTextEditView:(id)arg1 didChangeText:(id)arg2;
- (void)newsCameraTweetTextEditViewDidEndEditing:(id)arg1;
- (void)newsCameraTweetTextEditViewDidBeginEditing:(id)arg1;
- (_Bool)newsCameraTweetTextEditViewShouldBeginEditing:(id)arg1;
- (void)threadTweetsViewController:(id)arg1 didSelectTweet:(id)arg2 atIndexPath:(id)arg3;
- (void)threadTweetsViewControllerDidTapDone:(id)arg1;
- (void)newsCameraCapturePreviewTopChromeViewDidAccessibilityActivateHandle:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_t1_gesture_chyronViewDidTap:(id)arg1;
- (void)_t1_gesture_contentViewDidLongPress:(id)arg1;
- (void)_t1_gesture_contentViewDidTap:(id)arg1;
- (void)_t1_gesture_previewTopChromeViewDidTap:(id)arg1;
- (void)_t1_gesture_previewContainerViewDidPan:(id)arg1;
- (void)_t1_main_sendNewsCameraComposition:(id)arg1 withAttachment:(id)arg2 cameraScribeValue:(id)arg3 fromAccount:(id)arg4;
- (void)_t1_main_sendNewsCameraComposition;
- (void)_t1_action_tweetButtonDidTouchUpInside:(id)arg1;
- (void)_t1_action_addDescriptionButtonDidTouchUpInside:(id)arg1;
- (void)_t1_action_muteButtonDidTouchUpInside:(id)arg1;
- (void)_t1_action_cancelButtonDidTouchUpInside:(id)arg1;
- (void)_t1_main_updateCurrentGeoPickerViewController;
- (void)_t1_main_presentGeoPickerViewController;
- (void)_t1_main_requestsUpdateCurrentLocationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_t1_action_geoPickerButtonDidTouchUpInside:(id)arg1;
- (void)_t1_notification_accessibilityVoiceOverStatusDidChange:(id)arg1;
- (void)_t1_main_reset;
- (void)viewControllerDidDismissAnimated:(_Bool)arg1;
- (void)viewControllerWillDismissAnimated:(_Bool)arg1;
- (void)_t1_main_presentSelectThreadOnboarding;
- (void)viewControllerDidPresentAnimated:(_Bool)arg1;
- (double)lengthOfLayoutGuide:(long long)arg1 forEnvironment:(id)arg2;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)tfn_viewControllerWillSwapWithTransitionCoordinator:(id)arg1;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)_t1_main_loadEventHashtagsViewControllerWithConstraints:(id)arg1;
- (void)_t1_main_loadAvatarImageViewWithConstraints:(id)arg1;
- (void)_t1_main_loadTweetTextEditViewWithConstraints:(id)arg1;
- (void)_t1_main_loadGeoPickerButtonWithConstraints:(id)arg1;
- (void)_t1_main_updateChyronViewPercentageTransitionLayoutConstraints;
- (void)_t1_main_updateChyronViewTopAnchorConstraint;
- (void)_t1_main_loadChyronViewWithConstraints:(id)arg1;
- (void)_t1_main_loadChyronViewLayoutGuidesWithConstraints:(id)arg1;
- (void)_t1_main_loadChyronBackgroundViewWithConstraints:(id)arg1;
- (void)_t1_main_loadAutocompleteViewControllerWithConstraints:(id)arg1;
- (void)_t1_main_loadColorPickerViewControllerWithConstraints:(id)arg1;
- (void)_t1_main_loadTweetTextCountProgressViewWithConstraints:(id)arg1;
- (void)_t1_main_loadTweetButtonWithConstraints:(id)arg1;
- (void)_t1_main_loadControlsViewWithConstraints:(id)arg1;
- (void)_t1_main_loadAddDescriptionButtonWithConstraints:(id)arg1;
- (void)_t1_main_loadMuteButtonWithConstraints:(id)arg1;
- (void)_t1_main_loadCancelButtonWithConstraints:(id)arg1;
- (void)_t1_main_updateKeyboardDismissalContainerView;
- (void)_t1_main_loadKeyboardDismissalContainerViewWithConstraints:(id)arg1;
- (void)_t1_main_loadControlButtonsLayoutGuideWithConstraints:(id)arg1;
- (void)_t1_main_updatePreviewTopChromeView;
- (void)_t1_main_loadPreviewTopChromeViewWithConstraints:(id)arg1;
- (void)_t1_main_updatePreviewViewOverlay;
- (void)_t1_main_loadPreviewViewWithConstraints:(id)arg1;
- (void)_t1_main_updatePreviewContainerViewLayoutMarginsGuideTopAnchorConstraint;
- (void)_t1_main_loadPreviewContainerViewWithConstraints:(id)arg1;
- (void)_t1_main_loadSelectThreadContainerViewWithConstraints:(id)arg1;
- (void)_t1_main_loadPreviewContainerViewLayoutGuideWithConstraints:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)_t1_main_updatePreviewContainerViewPercentagePosition;
- (void)setPreviewContainerViewPositionPercentage:(double)arg1 animated:(_Bool)arg2 withDelay:(double)arg3 duration:(double)arg4 velocity:(double)arg5 completion:(CDUnknownBlockType)arg6;
- (void)setPreviewContainerViewPositionPercentage:(double)arg1 animatedWithVelocity:(double)arg2;
- (void)_t1_main_updateSelectThreadViewController;
- (void)_t1_main_updateTweetTextCountProgressViewAnimated:(_Bool)arg1;
- (void)_t1_main_updateControlsAnimated:(_Bool)arg1;
- (void)_t1_main_updateTweetTextEditViewBorders;
@property(readonly, nonatomic, getter=isChyronViewExpanded) _Bool chyronViewExpanded;
- (void)_t1_main_updateChyronViewPercentageTransition;
- (void)_t1_main_updateChyronViewPercentagePosition;
- (void)setChyronViewPositionPercentage:(double)arg1 animated:(_Bool)arg2;
- (void)_t1_main_updateForEventHashtagsAnimated:(_Bool)arg1;
- (void)_t1_main_updateEventHashtagsViewAnimated:(_Bool)arg1;
- (void)_t1_main_updateAddDescriptionButton;
- (void)_t1_main_updateMuteButton;
- (void)_t1_main_updateCancelButton;
- (void)_t1_main_updateTweetButton;
- (void)_t1_main_updatePreviewViewContent;
- (void)_t1_main_updateForEventHashtag;
- (void)_t1_main_updateForPlace;
- (void)_t1_main_updateForCameraPaletteID;
- (void)_t1_main_updateForText;
- (void)_t1_main_storeLastSelectedCameraPaletteID:(id)arg1;
- (void)_t1_main_restoreLastSelectedCameraPaletteID;
- (void)_t1_main_updateSelectThreadViewControllerForComposition;
- (void)_t1_main_validateCompositionReplyStatusInfo;
- (void)_t1_main_updateAutocompleteViewControllerForAccount;
- (void)_t1_main_updateTweetTextEditViewForAccount;
- (void)_t1_main_updateAvatarImageViewForAccount;
- (void)_t1_main_updateSelectThreadViewControllerForAccount;
- (void)_t1_main_triggerMuteButtonTooltip;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) TFNModalHitTestView *view; // @dynamic view;

@end
