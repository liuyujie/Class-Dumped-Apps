//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEAccountBaseViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class AWEAccountPasswordInputView, AWEAccountPhoneNumber, AWEBindPhoneHelperInstance, AWELoginButton, NSString, UIButton, UILabel;

@interface AWEAccountPasswordViewController : AWEAccountBaseViewController <UITextFieldDelegate>
{
    _Bool _isCounting;
    long long _carrierType;
    NSString *_platform;
    UILabel *_titleLabel;
    UILabel *_hintLabel;
    AWEAccountPasswordInputView *_passwordInputView;
    AWELoginButton *_nextButton;
    UIButton *_backButton;
    UIButton *_skipButton;
    unsigned long long _currentCounting;
    NSString *_captchaValue;
    unsigned long long _useType;
    AWEAccountPhoneNumber *_phoneNumber;
    AWEBindPhoneHelperInstance *_bindHelper;
}

@property(retain, nonatomic) AWEBindPhoneHelperInstance *bindHelper; // @synthesize bindHelper=_bindHelper;
@property(copy, nonatomic) AWEAccountPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(nonatomic) unsigned long long useType; // @synthesize useType=_useType;
@property(copy, nonatomic) NSString *captchaValue; // @synthesize captchaValue=_captchaValue;
@property(nonatomic) unsigned long long currentCounting; // @synthesize currentCounting=_currentCounting;
@property(retain, nonatomic) UIButton *skipButton; // @synthesize skipButton=_skipButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) AWELoginButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) AWEAccountPasswordInputView *passwordInputView; // @synthesize passwordInputView=_passwordInputView;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(nonatomic) long long carrierType; // @synthesize carrierType=_carrierType;
@property(nonatomic) _Bool isCounting; // @synthesize isCounting=_isCounting;
- (void).cxx_destruct;
- (void)_logWithEvent:(id)arg1 params:(id)arg2;
- (void)skipAction;
- (void)backAction;
- (void)nextAction;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (unsigned long long)_context;
- (void)_showExceedPasswordLengthAlert;
- (void)_trackToastError;
- (void)_dismiss;
- (void)_stopLoading;
- (void)_startLoading;
- (void)_updateNextButtonState;
- (void)_adjustUI;
- (void)_configureUseType;
- (_Bool)inputViewIsFirstResponder;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUseType:(unsigned long long)arg1 phoneNumber:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
