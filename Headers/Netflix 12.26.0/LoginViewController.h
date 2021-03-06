//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseLoginViewController.h"

#import "LoginViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class LoadingViewController, LoginTextField, LoginViewModel, NFUIButton, NSString, UINavigationBar, UIScrollView, UIStackView, UIView;

@interface LoginViewController : BaseLoginViewController <UITextFieldDelegate, LoginViewDelegate>
{
    UINavigationBar *_navigationBar;
    LoginViewModel *_viewModel;
    LoadingViewController *_loadingViewController;
    UIView *_containerView;
    UIStackView *_controlsStackView;
    LoginTextField *_usernameCombinedField;
    LoginTextField *_passwordCombinedField;
    UIScrollView *_scrollView;
    NFUIButton *_loginButton;
    NFUIButton *_forgotPasswordButton;
}

@property(nonatomic) __weak NFUIButton *forgotPasswordButton; // @synthesize forgotPasswordButton=_forgotPasswordButton;
@property(nonatomic) __weak NFUIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak LoginTextField *passwordCombinedField; // @synthesize passwordCombinedField=_passwordCombinedField;
@property(nonatomic) __weak LoginTextField *usernameCombinedField; // @synthesize usernameCombinedField=_usernameCombinedField;
@property(nonatomic) __weak UIStackView *controlsStackView; // @synthesize controlsStackView=_controlsStackView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) LoadingViewController *loadingViewController; // @synthesize loadingViewController=_loadingViewController;
@property(retain, nonatomic) LoginViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;
- (void)presentAlert:(id)arg1;
- (id)alertWithTitleKey:(id)arg1 messageKey:(id)arg2 field:(id)arg3 cancelActionKey:(id)arg4 secondaryAction:(id)arg5;
- (id)simpleOkAlertWithTitleKey:(id)arg1 messageKey:(id)arg2;
- (id)simpleTryAgainAlertWithTitleKey:(id)arg1 messageKey:(id)arg2;
- (id)simpleTryAgainAlertWithMessageKey:(id)arg1;
- (id)alertForErrorPasswordNotSet;
- (id)alertForErrorUnrecognizedEmailWithField:(id)arg1;
- (id)alertForErrorIncorrectPasswordWithField:(id)arg1;
- (id)alertForErrorEmailIncorrectPassword;
- (void)showAlertForErrorKey:(id)arg1 withField:(id)arg2;
- (void)showPhoneLoginErrorForKey:(id)arg1 withField:(id)arg2;
- (void)clearInlineErrors;
- (void)handleLoginError:(id)arg1 withField:(id)arg2;
- (void)presentCountryPickerController;
- (void)initPasswordField;
- (void)initUsernameField;
- (void)setPassword:(id)arg1;
- (id)currentPassword;
- (void)setUsername:(id)arg1;
- (double)usernameTopInScrollview;
- (id)currentUsername;
- (id)currentCredentials;
- (void)hideLoadingIndicator;
- (void)showLoadingIndicator;
- (void)goBack:(id)arg1;
- (void)voipButtonTapped;
- (void)initVoipButton;
- (void)forgotPasswordButtonPressed;
- (void)loginButtonPressed;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)registrationDidDeactivate:(id)arg1;
- (void)activationCompleted:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)registerForKeyboardNotifications;
- (void)registerForActivationRegistrationNotifications;
- (void)closeButtonTapped;
- (void)updateButtonFocus;
- (void)clearPasswordField;
- (void)populateFieldsWithCredentials:(id)arg1;
- (void)handleLoginErrorWithEmail:(id)arg1 flowErrorCode:(id)arg2;
- (void)configureDisplay;
- (void)setupBackButton;
- (void)populateFieldsFromAutoLogin;
- (void)setupViewProperties;
- (void)registerForNotifications;
- (void)tappedDebug;
- (void)setupAutomatedTesting;
- (void)setupNavigationBar;
- (void)setupAccessibility;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

