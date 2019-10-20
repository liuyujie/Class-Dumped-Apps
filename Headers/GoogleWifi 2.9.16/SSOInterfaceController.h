//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOOBottomSheetControllerDelegate-Protocol.h"
#import "SSOAccountSelectorDelegate-Protocol.h"
#import "SSOSafariSignInHandlerDelegate-Protocol.h"
#import "SSOServiceSignInUIDelegate-Protocol.h"

@class GOOAlertView, GOOBottomSheetController, GTMSessionFetcher, NSNumber, NSString, SSOAccountSelectorViewController, SSOActivityShieldView, SSODefaultAccountSelectorViewController, SSONavigationController, SSOSignInContext, UIViewController;
@protocol SSOInterfaceControllerDelegate, SSOInterfaceControllerSecurityKeyDelegate, SSOService;

@interface SSOInterfaceController : NSObject <GOOBottomSheetControllerDelegate, SSOAccountSelectorDelegate, SSOSafariSignInHandlerDelegate, SSOServiceSignInUIDelegate>
{
    _Bool _presenting;
    _Bool _isCanceling;
    id <SSOInterfaceControllerDelegate> _delegate;
    id _userObject;
    id <SSOService> _service;
    UIViewController *_savedPresentingViewController;
    SSONavigationController *_navigationController;
    SSOAccountSelectorViewController *_accountSelector;
    SSODefaultAccountSelectorViewController *_defaultAccountSelector;
    GOOBottomSheetController *_bottomSheetController;
    CDUnknownBlockType _signInFinishBlock;
    CDUnknownBlockType _signInMultipleFinishBlock;
    CDUnknownBlockType _selectAccountsBlock;
    CDUnknownBlockType _switchAccountBlock;
    CDUnknownBlockType _addAccountBlock;
    SSOInterfaceController *_selfRetainer;
    GTMSessionFetcher *_fetcherForAccountRemoval;
    GOOAlertView *_visibleAlertView;
    SSOActivityShieldView *_loadingShieldView;
    SSOSignInContext *_signInContext;
    NSNumber *_oldGOONavigationDefersTransitionLogicValue;
    id <SSOInterfaceControllerSecurityKeyDelegate> _securityKeyDelegate;
}

+ (_Bool)isIdentityUnsupportedError:(id)arg1;
+ (_Bool)isInternallyHandledError:(id)arg1;
+ (_Bool)isSignInCancelledError:(id)arg1;
@property(nonatomic) __weak id <SSOInterfaceControllerSecurityKeyDelegate> securityKeyDelegate; // @synthesize securityKeyDelegate=_securityKeyDelegate;
@property(copy, nonatomic) NSNumber *oldGOONavigationDefersTransitionLogicValue; // @synthesize oldGOONavigationDefersTransitionLogicValue=_oldGOONavigationDefersTransitionLogicValue;
@property(retain, nonatomic) SSOSignInContext *signInContext; // @synthesize signInContext=_signInContext;
@property(retain, nonatomic) SSOActivityShieldView *loadingShieldView; // @synthesize loadingShieldView=_loadingShieldView;
@property(retain, nonatomic) GOOAlertView *visibleAlertView; // @synthesize visibleAlertView=_visibleAlertView;
@property(nonatomic) __weak GTMSessionFetcher *fetcherForAccountRemoval; // @synthesize fetcherForAccountRemoval=_fetcherForAccountRemoval;
@property(readonly, nonatomic) _Bool isCanceling; // @synthesize isCanceling=_isCanceling;
@property(retain, nonatomic) SSOInterfaceController *selfRetainer; // @synthesize selfRetainer=_selfRetainer;
@property(copy, nonatomic) CDUnknownBlockType addAccountBlock; // @synthesize addAccountBlock=_addAccountBlock;
@property(copy, nonatomic) CDUnknownBlockType switchAccountBlock; // @synthesize switchAccountBlock=_switchAccountBlock;
@property(copy, nonatomic) CDUnknownBlockType selectAccountsBlock; // @synthesize selectAccountsBlock=_selectAccountsBlock;
@property(copy, nonatomic) CDUnknownBlockType signInMultipleFinishBlock; // @synthesize signInMultipleFinishBlock=_signInMultipleFinishBlock;
@property(copy, nonatomic) CDUnknownBlockType signInFinishBlock; // @synthesize signInFinishBlock=_signInFinishBlock;
@property(retain, nonatomic) GOOBottomSheetController *bottomSheetController; // @synthesize bottomSheetController=_bottomSheetController;
@property(retain, nonatomic) SSODefaultAccountSelectorViewController *defaultAccountSelector; // @synthesize defaultAccountSelector=_defaultAccountSelector;
@property(retain, nonatomic) SSOAccountSelectorViewController *accountSelector; // @synthesize accountSelector=_accountSelector;
@property(retain, nonatomic) SSONavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak UIViewController *savedPresentingViewController; // @synthesize savedPresentingViewController=_savedPresentingViewController;
@property(retain, nonatomic) id <SSOService> service; // @synthesize service=_service;
@property(retain, nonatomic) id userObject; // @synthesize userObject=_userObject;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
@property(nonatomic) __weak id <SSOInterfaceControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeLoadingShieldView;
- (void)dismissAlertView;
- (void)showAlertView:(id)arg1;
- (void)resetInternalState;
- (void)invokeAddAccountBlockWithIdentity:(id)arg1 error:(id)arg2;
- (void)invokeSelectAccountsBlockWithOldIdentities:(id)arg1 newIdentities:(id)arg2 error:(id)arg3;
- (void)invokeSwitchAccountBlockWithOldIdentity:(id)arg1 newIdentity:(id)arg2 error:(id)arg3;
- (void)invokeSignInBlockWithIdentity:(id)arg1 error:(id)arg2;
- (void)invokeSignInMultipleBlockWithIdentities:(id)arg1 error:(id)arg2;
- (void)invokeCallbackBlockWithCancelError:(id)arg1;
- (_Bool)safariSignInHandlerPausedBySecurityKey:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)safariSignInHandler:(id)arg1 handleOpenURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)accountSelectorManageAccountButtonDidTap:(id)arg1;
- (void)accountSelector:(id)arg1 showAlertView:(id)arg2;
- (void)accountSelectorDidCancelIdentityRemoval:(id)arg1;
- (void)accountSelector:(id)arg1 didSwitchFromIdentities:(id)arg2 toIdentities:(id)arg3;
- (void)accountSelector:(id)arg1 willDismissWithSelectedIdentity:(id)arg2;
- (void)accountSelector:(id)arg1 didSwitchFromIdentity:(id)arg2 toIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)accountSelector:(id)arg1 removeIdentity:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)accountSelector:(id)arg1 didCancelWithIdentity:(id)arg2;
- (void)popOrDismissSignInViewControllerFromAccountSelector:(id)arg1;
- (void)finishAddAccountWithAccountSelector:(id)arg1 newIdentity:(id)arg2 error:(id)arg3;
- (void)handleSignInResultFromAccountSelector:(id)arg1 identity:(id)arg2 error:(id)arg3;
- (void)accountSelector:(id)arg1 didSelectIdentityRequiringReauth:(id)arg2;
- (void)accountSelectorAddAccountButtonDidTap:(id)arg1;
- (id)accountSelector:(id)arg1 sectionIdentities:(id)arg2;
- (void)signInDidCancel:(id)arg1;
- (void)showDialogWithTitle:(id)arg1 error:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)signInViewControllerWithService:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)service:(id)arg1 showDialogWithTitle:(id)arg2 error:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)service:(id)arg1 dismissSafariSignInUIWithCompletion:(CDUnknownBlockType)arg2;
- (void)service:(id)arg1 startSignInWithAuthAdvice:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)serviceWillBeginSignIn:(id)arg1;
- (void)bottomSheetControllerDidCancel:(id)arg1;
- (void)restoreGOONavigationDefersTransitionLogicValue;
- (void)saveAndEnableGOONavigationDefersTransitionLogic;
- (void)resumeSignInSessionWithURL:(id)arg1 useAuthSession:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)pauseSignIn;
- (_Bool)hasIdentities;
- (void)showInfoDialogWithTitle:(id)arg1 subtitle:(id)arg2;
- (void)showAlertViewForError:(id)arg1 stringID:(int)arg2;
- (void)cancelAndDismissAnimated:(_Bool)arg1;
- (void)cancelAndDismissViewControllersAnimated:(_Bool)arg1;
- (void)startSelectDefaultAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)startSwitchAccount:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)presentSignInViewController:(id)arg1 showsCancelButton:(_Bool)arg2;
- (void)reauthenticateUser:(id)arg1 userID:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)reauthenticateIdentity:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)startSignInWithOptions:(unsigned long long)arg1 completed:(CDUnknownBlockType)arg2;
- (void)startSignIn:(CDUnknownBlockType)arg1;
- (void)startMultipleSignIn:(CDUnknownBlockType)arg1;
- (void)startSelectAccounts:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)startRemoveAccount:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)startAddAccountWithUserEmail:(id)arg1 showingCancelButton:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (void)startAddAccountShowingCancelButton:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (id)titleForAccountSelector;
- (void)accountSelector:(id)arg1 filterIdentity:(id)arg2 profile:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (_Bool)shouldRequireSignIn;
- (unsigned long long)supportedOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldShowCancelButton;
- (void)dismissPushedViewControllersAnimated:(_Bool)arg1 selectedIdentities:(id)arg2;
- (void)dismissSignInUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pushViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pushViewController:(id)arg1;
- (id)presentingViewController;
- (id)navigationStyle;
- (id)internalSSOService;
- (void)dealloc;
- (id)initWithSSOService:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

