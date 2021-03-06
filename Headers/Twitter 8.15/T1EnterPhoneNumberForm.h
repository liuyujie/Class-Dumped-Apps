//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNForm.h>

@class NSArray, NSString, TFNFormBooleanItem, TFNFormField;

@interface T1EnterPhoneNumberForm : TFNForm
{
    _Bool _discoverabilitySettingsValue;
    NSString *_hintText;
    NSString *_defaultCountryCode;
    NSString *_discoverabilitySettingsTitle;
    NSArray *_countryCodes;
    TFNFormField *_countryCodeField;
    TFNFormField *_phoneNumberField;
    TFNFormBooleanItem *_discoverabilityItem;
}

@property(retain, nonatomic) TFNFormBooleanItem *discoverabilityItem; // @synthesize discoverabilityItem=_discoverabilityItem;
@property(retain, nonatomic) TFNFormField *phoneNumberField; // @synthesize phoneNumberField=_phoneNumberField;
@property(retain, nonatomic) TFNFormField *countryCodeField; // @synthesize countryCodeField=_countryCodeField;
- (void).cxx_destruct;
- (id)private_nameForCountryChoice:(id)arg1;
- (void)private_countryCodeDidUpdateWithNotification:(id)arg1;
- (void)private_updatePhoneNumberFieldFormatterForCountryCode:(id)arg1;
- (id)sections;
@property(readonly, nonatomic) _Bool discoverabilitySettingsValue;
@property(readonly, nonatomic) NSString *countryCode;
@property(readonly, nonatomic) NSString *phoneNumber;
- (id)initWithHintText:(id)arg1 countryCodes:(id)arg2 defaultCountryCode:(id)arg3 discoverabilitySettingsTitle:(id)arg4 discoverabilitySettingsValue:(_Bool)arg5;

@end

