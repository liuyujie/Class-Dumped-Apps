//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGAnalyticsModule-Protocol.h>
#import <InstagramAppCoreFramework/IGCoreTextLinkHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGFacebookAuthHelperDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGKeyboardObserverHideDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGKeyboardObserverShowDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGRegistrationLoginFBInfoFetcherManagerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGRegistrationLoginManagerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGRegistrationLoginResponseHandlerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGRegistrationLoginViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGRetroRegistraionLoginAutoCompleteDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTextFieldDelegate-Protocol.h>

@class IGAccountStoreCoordinator, IGAuthenticator, IGContinueAsRegistrationConfig, IGFacebookAuthHelper, IGKeyboardObserver, IGRegistrationLogger, IGRegistrationLoginFBInfoFetcherManager, IGRegistrationLoginManager, IGRegistrationLoginResponseHandler, IGRegistrationLoginView, IGRegistrationLoginViewModel, IGRetroRegistrationLoginAutoCompleteController, NSString;
@protocol IGAPIClient, IGAlertHUDHandling, IGRetroRegistrationLoginViewControllerDelegate;

@interface IGRetroRegistrationLoginViewController : UIViewController <IGTextFieldDelegate, IGFacebookAuthHelperDelegate, IGCoreTextLinkHandler, IGRegistrationLoginViewDelegate, IGAnalyticsModule, IGKeyboardObserverShowDelegate, IGKeyboardObserverHideDelegate, IGRegistrationLoginResponseHandlerDelegate, IGRetroRegistraionLoginAutoCompleteDelegate, IGRegistrationLoginFBInfoFetcherManagerDelegate, IGRegistrationLoginManagerDelegate>
{
    _Bool _isSwitchingUsers;
    _Bool _hideFacebookButton;
    _Bool _isBackButtonEnabled;
    _Bool _isSubmitting;
    IGAuthenticator *_authenticator;
    IGAccountStoreCoordinator *_accountStoreCoordinator;
    IGContinueAsRegistrationConfig *_directAppConfig;
    long long _regStep;
    id <IGAlertHUDHandling> _alertHUDHandler;
    IGRegistrationLoginResponseHandler *_responseHandler;
    IGRetroRegistrationLoginAutoCompleteController *_autoCompleteController;
    IGFacebookAuthHelper *_fbAuthHelper;
    IGRegistrationLoginFBInfoFetcherManager *_fbInfoFetcherManager;
    IGRegistrationLoginManager *_loginManager;
    IGRegistrationLogger *_logger;
    id <IGAPIClient> _networker;
    IGKeyboardObserver *_keyboardObserver;
    NSString *_igUserPkLinkedWithFetchedFBInfo;
    NSString *_prefillUsername;
    NSString *_stepName;
    unsigned long long _numLoginAttempts;
    IGRegistrationLoginView *_redesignLoginView;
    IGRegistrationLoginViewModel *_viewModel;
    long long _brandingVariant;
    id <IGRetroRegistrationLoginViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGRetroRegistrationLoginViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loginManager:(id)arg1 authenticationFailureWithError:(id)arg2 responseDict:(id)arg3 notification:(id)arg4 currentUserSession:(id)arg5;
- (void)loginManagerAttemptToLoginFailed:(id)arg1;
- (void)loginManager:(id)arg1 didAttemptToLoginWithUsername:(id)arg2;
- (void)loginManager:(id)arg1 biometricsLoginFailedForUsername:(id)arg2;
- (void)loginManager:(id)arg1 didAttemptToLoginFromEmail:(_Bool)arg2;
- (void)loginManager:(id)arg1 didAttemptToLoginWithUsernameAndPassword:(_Bool)arg2;
- (void)registrationLoginFBInfoFetcherManager:(id)arg1 didFetchLoginAutoCompleteUser:(id)arg2;
- (void)registrationLoginFBInfoFetcherManager:(id)arg1 didFetchIgUserPk:(id)arg2;
- (void)registrationLoginFBInfoFetcherManager:(id)arg1 didFetchIgName:(id)arg2 fbName:(id)arg3;
- (void)autoCompleteController:(id)arg1 displayViewWithSize:(struct CGSize)arg2;
- (void)autoCompleteController:(id)arg1 tableViewDidSelectRowWithFBUser:(id)arg2;
- (void)autoCompleteController:(id)arg1 tableViewDidSelectRowWithOneTapLoginAccount:(id)arg2;
- (id)analyticsModule;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersNavigationBarHidden;
- (void)loginViewAdjustContainerViewPosition:(id)arg1 usernameTextField:(id)arg2;
- (void)loginViewDidTapShaderView:(id)arg1;
- (void)loginViewDidTapForgotPasswordButton:(id)arg1;
- (void)loginViewDidTapSwitchAccountButton:(id)arg1;
- (void)loginViewDidTapGearButton:(id)arg1;
- (void)loginViewDidTapBackButton:(id)arg1;
- (void)loginViewDidTapLoginButton:(id)arg1;
- (void)loginViewDidTapDismissButton:(id)arg1;
- (void)loginViewDidTapSignUpButton:(id)arg1;
- (void)loginViewDidTapFacebookButton:(id)arg1;
- (void)loginViewDidTapBranding:(id)arg1;
- (void)_adjustLoginViewFieldsTextWithUsername:(id)arg1;
- (void)_prefillUsername:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)facebookAuthHelper:(id)arg1 willResetPasswordToken:(id)arg2 user:(id)arg3 facebookAccessToken:(id)arg4;
- (void)facebookAuthHelper:(id)arg1 willProceedTwoFactorWithInfo:(id)arg2 facebookAccessToken:(id)arg3;
- (void)facebookAuthHelper:(id)arg1 willProceedRegistrationWithFBInfo:(id)arg2 facebookAccessToken:(id)arg3 tosVersion:(id)arg4;
- (void)facebookAuthHelperDidTapDismissButton:(id)arg1;
- (void)facebookAuthHelperDidTapHelpButton:(id)arg1;
- (void)facebookAuthHelperDidTapLogInButton:(id)arg1;
- (void)facebookAuthHelperDidTapSignUpButton:(id)arg1;
- (void)stopFacebookButtonLoading;
- (void)startFacebookButtonLoading;
- (void)loginResponseHandlerDidFailOneTapLogin:(id)arg1;
- (void)loginResponseHandlerDidSwitchToSignUpAfterFailure:(id)arg1;
- (void)loginResponseHandlerDidTriggerAccountRecovery:(id)arg1;
- (void)loginResponseHandlerDidTriggerFbLogin:(id)arg1;
- (void)loginResponseHandler:(id)arg1 didHandleTwoFactorInfo:(id)arg2;
- (void)loginResponseHandler:(id)arg1 didHandleResetPasswordWithBundle:(id)arg2;
- (void)_loginOneTapAccount:(id)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)_hideSpinner;
- (void)_showSpinner;
- (void)_loginCompletionHandlerForAutheticationResult:(id)arg1 notification:(id)arg2 currentUserSession:(id)arg3 recoverySource:(long long)arg4;
- (void)loginFromOneClickWithUserID:(id)arg1 token:(id)arg2 source:(id)arg3 notification:(id)arg4 currentUserSession:(id)arg5;
- (void)loginWithUsername:(id)arg1 password:(id)arg2;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)_facebookButtonTapped;
- (void)_loginHelperButtonTapped;
- (void)_loginButtonTapped;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserverKeyboardDidHide:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)_keyboardWillHide;
- (long long)preferredStatusBarStyle;
- (void)_appearedFromBackground;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithBackButtonEnabled:(_Bool)arg1 networker:(id)arg2 authenticator:(id)arg3 accountStoreCoordinator:(id)arg4 fbInfoFetcherManager:(id)arg5 fbAuthHelper:(id)arg6 loginManager:(id)arg7 isSwitchingUsers:(_Bool)arg8 hideFacebookButton:(_Bool)arg9 directAppConfig:(id)arg10 regStep:(long long)arg11 stepName:(id)arg12 prefillUsername:(id)arg13 logger:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

