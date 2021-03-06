//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEFeedFeedbackCameraCardViewControllerDelegate-Protocol.h"
#import "HMEFeedFeedbackSoundSensingCardViewControllerDelegate-Protocol.h"
#import "NSObject-Protocol.h"

@class HMEFeedFeedbackModelController, NSString, UIViewController;
@protocol HMEFeedFeedbackCoordinatorDelegate;

@interface HMEFeedFeedbackCoordinator : NSObject <NSObject, HMEFeedFeedbackSoundSensingCardViewControllerDelegate, HMEFeedFeedbackCameraCardViewControllerDelegate>
{
    id <HMEFeedFeedbackCoordinatorDelegate> _delegate;
    HMEFeedFeedbackModelController *_modelController;
    UIViewController *_presentingViewController;
}

@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) HMEFeedFeedbackModelController *modelController; // @synthesize modelController=_modelController;
@property(nonatomic) __weak id <HMEFeedFeedbackCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissViewControllerAndNotifyDelegateWithError:(id)arg1;
- (void)feedFeedbackCameraCardViewControllerDidTapCancel:(id)arg1;
- (void)feedFeedbackCameraCardViewController:(id)arg1 didSubmitFeedbackWithError:(id)arg2;
- (void)feedFeedbackSoundSensingCardViewController:(id)arg1 didSubmitFeedbackWithError:(id)arg2;
- (void)feedFeedbackSoundSensingCardViewControllerDidTapCancel:(id)arg1;
- (void)dismissPresentedViewController;
- (void)startWithViewModel:(id)arg1 presentingViewController:(id)arg2;
- (void)startWithFeedbackAction:(id)arg1 presentingViewController:(id)arg2;
- (id)initWithModelController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

