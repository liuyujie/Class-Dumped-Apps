//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGLiveWithPrivacyConfirmationViewDelegate-Protocol.h>

@class IGLiveWithPrivacyConfirmationView, IGUser, NSString;
@protocol IGLiveWithPrivacyConfirmationViewControllerDelegate;

@interface IGLiveWithPrivacyConfirmationViewController : UIViewController <IGLiveWithPrivacyConfirmationViewDelegate>
{
    NSString *_module;
    IGUser *_actor;
    IGUser *_actee;
    unsigned long long _privacyType;
    id <IGLiveWithPrivacyConfirmationViewControllerDelegate> _delegate;
    IGLiveWithPrivacyConfirmationView *_contentView;
}

@property(readonly, nonatomic) IGLiveWithPrivacyConfirmationView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <IGLiveWithPrivacyConfirmationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long privacyType; // @synthesize privacyType=_privacyType;
@property(readonly, nonatomic) IGUser *actee; // @synthesize actee=_actee;
@property(readonly, nonatomic) IGUser *actor; // @synthesize actor=_actor;
- (void).cxx_destruct;
- (void)rejectButtonTappedInPrivacyConfirmationView:(id)arg1;
- (void)acceptButtonTappedInPrivacyConfirmationView:(id)arg1;
- (void)dismiss;
- (void)presentWithParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithActor:(id)arg1 actee:(id)arg2 privacyType:(unsigned long long)arg3 module:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

