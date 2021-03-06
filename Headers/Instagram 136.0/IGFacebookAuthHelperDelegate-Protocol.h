//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGFBSDKAccessToken, IGFacebookAuthHelper, IGTwoFactorInfo, IGUser, NSDictionary, NSString;

@protocol IGFacebookAuthHelperDelegate <NSObject>
- (void)facebookAuthHelper:(IGFacebookAuthHelper *)arg1 willProceedTwoFactorWithInfo:(IGTwoFactorInfo *)arg2 facebookAccessToken:(IGFBSDKAccessToken *)arg3;
- (void)facebookAuthHelper:(IGFacebookAuthHelper *)arg1 willResetPasswordToken:(NSString *)arg2 user:(IGUser *)arg3 facebookAccessToken:(IGFBSDKAccessToken *)arg4;
- (void)facebookAuthHelper:(IGFacebookAuthHelper *)arg1 willProceedRegistrationWithFBInfo:(NSDictionary *)arg2 facebookAccessToken:(IGFBSDKAccessToken *)arg3 tosVersion:(NSString *)arg4;
- (void)facebookAuthHelperDidTapDismissButton:(IGFacebookAuthHelper *)arg1;
- (void)facebookAuthHelperDidTapHelpButton:(IGFacebookAuthHelper *)arg1;
- (void)facebookAuthHelperDidTapLogInButton:(IGFacebookAuthHelper *)arg1;
- (void)facebookAuthHelperDidTapSignUpButton:(IGFacebookAuthHelper *)arg1;
- (void)stopFacebookButtonLoading;
- (void)startFacebookButtonLoading;
@end

