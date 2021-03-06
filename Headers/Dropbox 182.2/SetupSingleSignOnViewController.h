//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AbstractSetupTableViewController.h"

#import "LoginViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, UITextField;
@protocol LoginViewDelegate;

@interface SetupSingleSignOnViewController : AbstractSetupTableViewController <LoginViewDelegate, UITextFieldDelegate>
{
    UITextField *_usernameField;
    id <LoginViewDelegate> _loginViewDelegate;
}

@property(nonatomic) __weak id <LoginViewDelegate> loginViewDelegate; // @synthesize loginViewDelegate=_loginViewDelegate;
- (void).cxx_destruct;
- (_Bool)areFieldsReady;
- (void)loadFields;
- (void)loadState;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)doSingleSignOn;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loginController:(id)arg1 twoFactorAuthChallenge:(id)arg2;
- (void)loginController:(id)arg1 captchaRequired:(id)arg2;
- (void)loginController:(id)arg1 popToLoginAnimated:(_Bool)arg2;
- (void)loginControllerShowSigningIn:(id)arg1;
- (void)loginController:(id)arg1 showGenericError:(id)arg2;
- (void)loginControllerEmptyPassword:(id)arg1;
- (void)loginControllerInvalidEmail:(id)arg1;
- (void)loginControllerEmptyEmail:(id)arg1;
- (void)loginController:(id)arg1 loginFailedWithError:(id)arg2;
- (id)loginControllerAppleLoginCheckpointToken:(id)arg1;
- (id)loginControllerGoogleLoginCheckpointToken:(id)arg1;
- (id)loginControllerUsername:(id)arg1;
- (void)disableUsernameField;
- (void)populateUsernameField:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithLoginController:(id)arg1 withLoginViewDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

