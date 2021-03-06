//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGPasswordLoginViewController, IGResetPasswordBundle, IGTwoFactorInfo, NSString;

@protocol IGPasswordLoginViewControllerDelegate <NSObject>
- (void)passwordLoginViewController:(IGPasswordLoginViewController *)arg1 didRunIntoPasswordResetBundle:(IGResetPasswordBundle *)arg2;
- (void)passwordLoginViewController:(IGPasswordLoginViewController *)arg1 didHandleTwoFactorInfo:(IGTwoFactorInfo *)arg2;
- (void)passwordLoginViewController:(IGPasswordLoginViewController *)arg1 didTriggerAccountRecoveryForUsername:(NSString *)arg2;
@end

