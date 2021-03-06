//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TMPhoneBindCustomContentProvider-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"

@class NSString, TMErrorHintView, TMLoginButton, TMPhoneNumberInputView, TTTAttributedLabel, UILabel, UIStackView;
@protocol TMPhoneBindViewDelegate;

@interface TMPhoneBindView : UIView <TTTAttributedLabelDelegate, TMPhoneBindCustomContentProvider>
{
    long long _accountManageStage;
    id <TMPhoneBindViewDelegate> _delegate;
    TMPhoneNumberInputView *_phoneNumberInputView;
    TMLoginButton *_nextButton;
    UILabel *_titleLabel;
    UILabel *_hintLabel;
    UIStackView *_phoneStackView;
    TMErrorHintView *_errorHintView;
    UILabel *_extraLabel;
    TTTAttributedLabel *_switchBindTypeLabel;
}

@property(retain, nonatomic) TTTAttributedLabel *switchBindTypeLabel; // @synthesize switchBindTypeLabel=_switchBindTypeLabel;
@property(retain, nonatomic) UILabel *extraLabel; // @synthesize extraLabel=_extraLabel;
@property(retain, nonatomic) TMErrorHintView *errorHintView; // @synthesize errorHintView=_errorHintView;
@property(retain, nonatomic) UIStackView *phoneStackView; // @synthesize phoneStackView=_phoneStackView;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TMLoginButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) TMPhoneNumberInputView *phoneNumberInputView; // @synthesize phoneNumberInputView=_phoneNumberInputView;
@property(nonatomic) __weak id <TMPhoneBindViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long accountManageStage; // @synthesize accountManageStage=_accountManageStage;
- (void).cxx_destruct;
- (void)remakeUIByScene;
- (void)p_hideError;
- (void)showPhoneErrorMessage:(id)arg1;
- (void)attributedLabel:(id)arg1 didSelectLinkWithTransitInformation:(id)arg2;
- (void)sendCodeButtonTapped:(id)arg1;
- (id)phoneNumber;
- (void)didMoveToWindow;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

