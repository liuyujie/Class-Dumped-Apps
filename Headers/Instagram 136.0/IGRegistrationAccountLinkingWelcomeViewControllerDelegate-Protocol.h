//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGRegistrationAccountLinkingWelcomeViewController, IGRegistrationAccountLinkingWelcomeViewSignUpContext, IGUserSession, NSDictionary, NSString;

@protocol IGRegistrationAccountLinkingWelcomeViewControllerDelegate <NSObject>
- (void)registrationAccountLinkingWelcomeViewControllerDidTriggerGoingBackToUsernameStep:(IGRegistrationAccountLinkingWelcomeViewController *)arg1 entryPoint:(NSString *)arg2;
- (void)registrationAccountLinkingWelcomeViewControllerPasswordNeedsModification:(IGRegistrationAccountLinkingWelcomeViewController *)arg1;
- (void)registrationAccountLinkingWelcomeViewControllerDidFailGDPRSignUp:(IGRegistrationAccountLinkingWelcomeViewController *)arg1;
- (void)registrationAccountLinkingWelcomeViewControllerDidGetBlockedByGDPR:(IGRegistrationAccountLinkingWelcomeViewController *)arg1;
- (void)registrationAccountLinkingWelcomeViewController:(IGRegistrationAccountLinkingWelcomeViewController *)arg1 registrationFailedWithErrors:(NSDictionary *)arg2;
- (void)registrationAccountLinkingWelcomeViewController:(IGRegistrationAccountLinkingWelcomeViewController *)arg1 registrationSucceededWithUserSession:(IGUserSession *)arg2 actorPk:(NSString *)arg3;
- (void)registrationAccountLinkingWelcomeViewController:(IGRegistrationAccountLinkingWelcomeViewController *)arg1 registrationSucceededWithUserSession:(IGUserSession *)arg2 email:(NSString *)arg3 actorPk:(NSString *)arg4;
- (void)registrationAccountLinkingWelcomeViewController:(IGRegistrationAccountLinkingWelcomeViewController *)arg1 registrationSucceededWithUserSession:(IGUserSession *)arg2 phoneNumber:(NSString *)arg3 actorPk:(NSString *)arg4;
- (void)registrationAccountLinkingWelcomeViewController:(IGRegistrationAccountLinkingWelcomeViewController *)arg1 registrationSucceededWithUserSession:(IGUserSession *)arg2 mainAccountPk:(NSString *)arg3 actorPk:(NSString *)arg4;
- (void)registrationAccountLinkingWelcomeViewController:(IGRegistrationAccountLinkingWelcomeViewController *)arg1 registrationRequestSentWithSignUpContext:(IGRegistrationAccountLinkingWelcomeViewSignUpContext *)arg2;
- (void)registrationAccountLinkingWelcomeViewControllerDidTapTermLabel:(IGRegistrationAccountLinkingWelcomeViewController *)arg1;
- (void)registrationAccountLinkingWelcomeViewControllerDidTapNextButton:(IGRegistrationAccountLinkingWelcomeViewController *)arg1;
@end

