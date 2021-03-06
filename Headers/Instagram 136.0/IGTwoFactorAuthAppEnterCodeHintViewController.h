//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGTwoFactorAuthAppCommonViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTwoFactorAuthAppManualSetupViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTwoFactorConfirmationCodeViewControllerDelegate-Protocol.h>

@class IGTwoFactorAuthAppCommonView, IGTwoFactorSetupFlowContext, IGTwoFactorSetupLogger, IGUserSession, NSString;
@protocol IGTwoFactorAuthAppEnterCodeHintViewControllerDelegate;

@interface IGTwoFactorAuthAppEnterCodeHintViewController : IGViewController <IGTwoFactorAuthAppCommonViewDelegate, IGTwoFactorConfirmationCodeViewControllerDelegate, IGTwoFactorAuthAppManualSetupViewControllerDelegate>
{
    IGUserSession *_userSession;
    IGTwoFactorSetupFlowContext *_setupFlowContext;
    IGTwoFactorSetupLogger *_setupLogger;
    IGTwoFactorAuthAppCommonView *_authAppEnterCodeHintView;
    NSString *_authAppSeeds;
    id <IGTwoFactorAuthAppEnterCodeHintViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGTwoFactorAuthAppEnterCodeHintViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)twoFactorConfirmationCodeViewControllerRequestChangePhoneNumber:(id)arg1;
- (void)twoFactorConfirmationCodeViewControllerDidFinishSetupFlow:(id)arg1;
- (void)twoFactorAuthAppManualSetupViewControllerDidFinishSetupFlow:(id)arg1;
- (void)twoFactorAuthAppCommonView:(id)arg1 didTapOnBottomTextLink:(id)arg2;
- (void)twoFactorAuthAppCommonViewDidTapOnBottomButton:(id)arg1;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (void)onCancelModal;
- (_Bool)prefersTabBarHidden;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 setupFlowContext:(id)arg2 setupLogger:(id)arg3 authAppSeeds:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

