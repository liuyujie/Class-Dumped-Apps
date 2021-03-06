//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TTTAttributedLabelDelegate-Protocol.h"

@class AWELoginButton, AWETimeLockPasswordView, NSString, TTTAttributedLabel, UILabel;

@interface AWETeenProtectionPasswordViewController : UIViewController <TTTAttributedLabelDelegate>
{
    _Bool _teenModeEnabled;
    _Bool _dismissVCWhenSucceed;
    _Bool _forUpdatingPassword;
    NSString *_onePassword;
    NSString *_oldPassword;
    long long _triggerTime;
    NSString *_enterFrom;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    TTTAttributedLabel *_retrievePasswordLabel;
    AWETimeLockPasswordView *_passwordInputView;
    AWELoginButton *_nextBtn;
    unsigned long long _type;
    unsigned long long _homeType;
    NSString *_inputPassword;
}

@property(nonatomic) _Bool forUpdatingPassword; // @synthesize forUpdatingPassword=_forUpdatingPassword;
@property(copy, nonatomic) NSString *inputPassword; // @synthesize inputPassword=_inputPassword;
@property(nonatomic) unsigned long long homeType; // @synthesize homeType=_homeType;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) AWELoginButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) AWETimeLockPasswordView *passwordInputView; // @synthesize passwordInputView=_passwordInputView;
@property(retain, nonatomic) TTTAttributedLabel *retrievePasswordLabel; // @synthesize retrievePasswordLabel=_retrievePasswordLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(nonatomic) _Bool dismissVCWhenSucceed; // @synthesize dismissVCWhenSucceed=_dismissVCWhenSucceed;
@property(nonatomic) _Bool teenModeEnabled; // @synthesize teenModeEnabled=_teenModeEnabled;
@property(nonatomic) long long triggerTime; // @synthesize triggerTime=_triggerTime;
@property(copy, nonatomic) NSString *oldPassword; // @synthesize oldPassword=_oldPassword;
@property(copy, nonatomic) NSString *onePassword; // @synthesize onePassword=_onePassword;
- (void).cxx_destruct;
- (void)dealloc;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)backBtnClicked;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)transferToEntranceViewController:(CDUnknownBlockType)arg1;
- (void)transferToTeenProtectionHomeViewController:(CDUnknownBlockType)arg1;
- (void)transferToAppropriateVC:(CDUnknownBlockType)arg1;
- (void)nextBtnClicked:(id)arg1;
- (void)setupNotifications;
- (_Bool)shouldShowRetrievePasswordLabel;
- (void)setupSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithType:(unsigned long long)arg1 andHomeType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

