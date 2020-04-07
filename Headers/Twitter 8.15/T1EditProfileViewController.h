//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNFormViewController.h>

#import <T1Twitter/T1JumpBackToHomeTimelineBehavior-Protocol.h>
#import <T1Twitter/T1PickAndFilterPhotoFlowControllerDelegate-Protocol.h>
#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>
#import <T1Twitter/UIDropInteractionDelegate-Protocol.h>

@class NSString, T1EditProfileBlurrableBannerImageView, T1EditProfileForm, T1PhotoSelection, T1PickAndFilterPhotoFlowController, T1ProfileAvatarImageView, TFNTwitterAccount, UIBarButtonItem, UIImageView;
@protocol T1EditProfileViewControllerDelegate;

@interface T1EditProfileViewController : TFNFormViewController <UIDropInteractionDelegate, TFNLayoutMetricsEnvironment, T1PickAndFilterPhotoFlowControllerDelegate, T1JumpBackToHomeTimelineBehavior>
{
    _Bool _didShowAddBirthdayWarning;
    _Bool _userAddedAvatar;
    _Bool _userAddedBanner;
    _Bool _userRemovedBanner;
    _Bool _clearNavigationBarMode;
    double _bannerHeight;
    UIBarButtonItem *_doneBarButtonItem;
    struct CGRect _keyboardViewFrame;
    _Bool _keyboardViewShowing;
    long long _keyboardAnimationCurve;
    double _keyboardAnimationDuration;
    id <T1EditProfileViewControllerDelegate> _delegate;
    TFNTwitterAccount *_account;
    T1EditProfileBlurrableBannerImageView *_bannerView;
    UIImageView *_cameraIcon;
    T1ProfileAvatarImageView *_avatarImageView;
    long long _selectedField;
    T1PhotoSelection *_selectedAvatarPhoto;
    T1PhotoSelection *_selectedBannerPhoto;
    T1PickAndFilterPhotoFlowController *_photoPicker;
}

@property(retain, nonatomic) T1PickAndFilterPhotoFlowController *photoPicker; // @synthesize photoPicker=_photoPicker;
@property(retain, nonatomic) T1PhotoSelection *selectedBannerPhoto; // @synthesize selectedBannerPhoto=_selectedBannerPhoto;
@property(retain, nonatomic) T1PhotoSelection *selectedAvatarPhoto; // @synthesize selectedAvatarPhoto=_selectedAvatarPhoto;
@property(nonatomic) long long selectedField; // @synthesize selectedField=_selectedField;
@property(retain, nonatomic) T1ProfileAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIImageView *cameraIcon; // @synthesize cameraIcon=_cameraIcon;
@property(retain, nonatomic) T1EditProfileBlurrableBannerImageView *bannerView; // @synthesize bannerView=_bannerView;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak id <T1EditProfileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)private_scribeFinish;
- (void)scribeAction:(id)arg1 inComponent:(id)arg2 forPhotoType:(long long)arg3 parameters:(id)arg4;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (struct CGRect)additionalGutterFrame;
- (void)submitForm;
- (void)_t1_dropImage:(id)arg1 ofType:(long long)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)pickAndFilterPhotoFlowController:(id)arg1 removePhotoType:(long long)arg2;
- (void)pickAndFilterPhotoFlowController:(id)arg1 userDidCancelPhotoType:(long long)arg2;
- (void)pickAndFilterPhotoFlowController:(id)arg1 userDidSelectPhoto:(id)arg2 type:(long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_updateNavigationBarStyle:(_Bool)arg1;
- (void)applicationWillEnterForegroundFromBackground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)_setupBannerAppearance;
- (void)viewWillLayoutSubviews;
- (void)didSelectItem:(id)arg1 atIndexPath:(id)arg2;
- (void)_didSelectField:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_uploadBanner:(id)arg1;
- (void)_uploadAvatar:(id)arg1;
- (void)_didTapBanner:(id)arg1;
- (void)_didTapAvatar:(id)arg1;
- (void)_closeAction;
- (void)proceedAfterSaving;
- (void)save;
- (void)_removeHeaderImage;
- (void)_prepareToRemoveHeaderImage;
- (void)setPhoto:(id)arg1 ofType:(long long)arg2;
- (void)_t1_selectPhotoOfTypeWithPhotoGallery:(long long)arg1 fromView:(id)arg2;
- (unsigned long long)inputRequiredBehavior;
- (id)doneBarButtonItem;
- (double)headerHeightForScrollView:(id)arg1 minimumHeight:(double)arg2;
- (_Bool)shouldShowCloseButton;
- (_Bool)addsDoneBarButtonButtonItemToNavigationBar;
@property(readonly, nonatomic) T1EditProfileForm *profileForm;
- (id)initWithForm:(id)arg1 appearance:(id)arg2;
- (id)initWithAccount:(id)arg1 selectedField:(long long)arg2;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
