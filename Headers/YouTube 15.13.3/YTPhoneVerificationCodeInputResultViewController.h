//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/YTGraftingViewController-Protocol.h>
#import <Module_Framework/YTResponder-Protocol.h>
#import <Module_Framework/YTTopController-Protocol.h>

@class GIMMe, NSString, YTCommandResponderEvent, YTICommand, YTIPhoneVerificationCodeInputSuccessScreenRenderer, YTPhoneVerificationCodeInputResultView;
@protocol YTResponder;

@interface YTPhoneVerificationCodeInputResultViewController : UIViewController <YTGraftingViewController, YTResponder, YTTopController>
{
    YTIPhoneVerificationCodeInputSuccessScreenRenderer *_renderer;
    YTPhoneVerificationCodeInputResultView *_resultView;
    YTICommand *_navigationEndpoint;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)dismissScreens;
- (id)navEndpoint;
- (_Bool)isEqualTopController:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (_Bool)prefersStatusBarHidden;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTCommandResponderEvent *sourceEvent;
@property(readonly) Class superclass;

@end

