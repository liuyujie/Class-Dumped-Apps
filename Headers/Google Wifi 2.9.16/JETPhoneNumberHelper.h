//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JETPhoneNumberHelper : NSObject
{
}

+ (id)countryCodeToSupportPhoneNumber;
+ (void)getDeviceCountryCode:(CDUnknownBlockType)arg1;
+ (id)localeCountryCode;
+ (void)setLocaleCountryCode:(id)arg1;
+ (id)carrier;
+ (void)setCarrier:(id)arg1;
+ (void)setDeviceCountryCode:(id)arg1;
+ (id)formatPhoneNumber:(id)arg1 countryCode:(id)arg2;
+ (id)accessibilityLabelForFormattedPhoneNumber:(id)arg1;
+ (id)phoneLinkURL:(id)arg1;
+ (void)getSupportPhoneNumberWithCompletion:(CDUnknownBlockType)arg1;

@end
