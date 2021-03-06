//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGChallengeRecoveryFBConnectConfirmationViewDelegate-Protocol.h>

@class IGChallengeRecoveryFBConnectConfirmationView, NSString;
@protocol IGCheckpointViewControllerProtocol;

@interface IGChallengeRecoveryFBConnectConfirmationViewController : IGViewController <IGChallengeRecoveryFBConnectConfirmationViewDelegate>
{
    IGChallengeRecoveryFBConnectConfirmationView *_fbConnectConfirmationView;
    id <IGCheckpointViewControllerProtocol> _coordinator;
}

@property(nonatomic) __weak id <IGCheckpointViewControllerProtocol> coordinator; // @synthesize coordinator=_coordinator;
- (void).cxx_destruct;
- (void)recoveryFBConnectConfirmationViewDidTapOnFooterButton:(id)arg1;
- (void)recoveryFBConnectConfirmationViewDidTapOnDisavowButton:(id)arg1;
- (void)recoveryFBConnectConfirmationViewDidTapOnAvowButton:(id)arg1;
- (void)recoveryFBConnectConfirmationViewDidTapOnBackButton:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersNavigationBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithFBConnectConfirmationModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

