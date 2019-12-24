//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOTextFieldContentViewObject.h"

@class NSString;

@interface GHKPhoneNumberFieldContentViewObject : GOOTextFieldContentViewObject
{
    _Bool _validated;
    _Bool _countryPickerActive;
    NSString *_countryCode;
}

@property(nonatomic) _Bool countryPickerActive; // @synthesize countryPickerActive=_countryPickerActive;
@property(nonatomic) _Bool validated; // @synthesize validated=_validated;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (void).cxx_destruct;
- (_Bool)hasReasonablePhoneNumberOrBlank;
- (_Bool)hasReasonablePhoneNumber;
- (Class)contentViewClass;
- (id)initWithTitle:(id)arg1 image:(id)arg2;

@end
