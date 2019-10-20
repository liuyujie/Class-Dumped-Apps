//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEAccountBaseViewController.h"

#import "AWEUserMessage-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class AWEBindPhoneHelperInstance, AWELoginButton, AWEPhoneNumberInputView, NSString, UIButton, UILabel;

@interface AWEI18NPhoneNumberViewController : AWEAccountBaseViewController <UITextFieldDelegate, AWEUserMessage>
{
    _Bool _isCounting;
    _Bool _hideBackButton;
    _Bool _enableSkipAlert;
    _Bool _disableLog;
    _Bool _fromCharge;
    _Bool _fromThirdLogin;
    CDUnknownBlockType _didFinishBindBlock;
    CDUnknownBlockType _didCancelBindBlock;
    unsigned long long _useType;
    NSString *_tracePlatformString;
    NSString *_clientKey;
    UILabel *_titleLabel;
    UILabel *_hintLabel;
    AWEPhoneNumberInputView *_phoneNumberInputView;
    AWELoginButton *_nextButton;
    UIButton *_backButton;
    NSString *_captchaValue;
    AWEBindPhoneHelperInstance *_bindHelper;
}

@property(retain, nonatomic) AWEBindPhoneHelperInstance *bindHelper; // @synthesize bindHelper=_bindHelper;
@property(nonatomic) _Bool fromThirdLogin; // @synthesize fromThirdLogin=_fromThirdLogin;
@property(nonatomic) _Bool fromCharge; // @synthesize fromCharge=_fromCharge;
@property(retain, nonatomic) NSString *captchaValue; // @synthesize captchaValue=_captchaValue;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) AWELoginButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) AWEPhoneNumberInputView *phoneNumberInputView; // @synthesize phoneNumberInputView=_phoneNumberInputView;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *clientKey; // @synthesize clientKey=_clientKey;
@property(copy, nonatomic) NSString *tracePlatformString; // @synthesize tracePlatformString=_tracePlatformString;
@property(nonatomic) _Bool disableLog; // @synthesize disableLog=_disableLog;
@property(nonatomic) _Bool enableSkipAlert; // @synthesize enableSkipAlert=_enableSkipAlert;
@property(nonatomic) _Bool hideBackButton; // @synthesize hideBackButton=_hideBackButton;
@property(nonatomic) unsigned long long useType; // @synthesize useType=_useType;
@property(copy, nonatomic) CDUnknownBlockType didCancelBindBlock; // @synthesize didCancelBindBlock=_didCancelBindBlock;
@property(copy, nonatomic) CDUnknownBlockType didFinishBindBlock; // @synthesize didFinishBindBlock=_didFinishBindBlock;
@property(nonatomic) _Bool isCounting; // @synthesize isCounting=_isCounting;
- (void).cxx_destruct;
- (void)didFinishLogout;
- (_Bool)checkAndShowSkipAlert;
- (_Bool)handleBindProcessActionWithError:(id)arg1;
- (unsigned long long)accountUtilsContext;
- (unsigned long long)_context;
- (void)backAction;
- (_Bool)isWaitingForVoiceCodeForContext:(unsigned long long)arg1;
- (void)sendVoiceCodeActionWithContext:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)nextAction;
- (void)showKeyBoardWhenWindowComeBack;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)_isFirstResponder;
- (void)_dismiss;
- (void)_stopLoading;
- (void)_startLoading;
- (void)_adjustUI;
- (void)_configureUseType;
- (_Bool)inputViewIsFirstResponder;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithType:(unsigned long long)arg1 enterFrom:(id)arg2;
- (id)initWithType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
