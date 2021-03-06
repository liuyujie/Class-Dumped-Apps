//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, UILabel, UITextField, WACountryCode, WALocalNumber, WAPhoneNumberTextField;

@interface WAPhoneNumberInputView : UIView <UITextFieldDelegate>
{
    UITextField *_countryCodeTextField;
    WAPhoneNumberTextField *_phoneNumberTextField;
    UIView *_countryCodeContainerView;
    UILabel *_countryCodePlaceholderLabel;
    UILabel *_labelPlusSign;
    UIView *_separatorView;
    NSLayoutConstraint *_labelPlusSignRightToCountryCodeCenter;
}

@property(retain, nonatomic) NSLayoutConstraint *labelPlusSignRightToCountryCodeCenter; // @synthesize labelPlusSignRightToCountryCodeCenter=_labelPlusSignRightToCountryCodeCenter;
@property(nonatomic) __weak UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) __weak UILabel *labelPlusSign; // @synthesize labelPlusSign=_labelPlusSign;
@property(nonatomic) __weak UILabel *countryCodePlaceholderLabel; // @synthesize countryCodePlaceholderLabel=_countryCodePlaceholderLabel;
@property(nonatomic) __weak UIView *countryCodeContainerView; // @synthesize countryCodeContainerView=_countryCodeContainerView;
@property(retain, nonatomic) WAPhoneNumberTextField *phoneNumberTextField; // @synthesize phoneNumberTextField=_phoneNumberTextField;
@property(retain, nonatomic) UITextField *countryCodeTextField; // @synthesize countryCodeTextField=_countryCodeTextField;
- (void).cxx_destruct;
- (id)accessibilityElements;
- (long long)accessibilityElementCount;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)countryCodeChanged:(id)arg1;
- (void)updateCountryCodeFieldAppearance;
@property(retain, nonatomic) WALocalNumber *localNumber;
@property(retain, nonatomic) WACountryCode *countryCode;
@property(copy, nonatomic) NSString *countryCodeFieldPlaceholder;
- (void)configureFonts;
- (void)fontSizeDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

