//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LabeledTextField.h"

#import "ModFormField-Protocol.h"

@class NSArray;

@interface ModFormTextField : LabeledTextField <ModFormField>
{
    _Bool isOptional;
}

+ (id)textFieldWithPlaceholder:(id)arg1;
+ (id)usernameField;
@property(nonatomic) _Bool isOptional; // @synthesize isOptional;
- (double)heightWithMaxSize:(struct CGSize)arg1;
@property(retain, nonatomic) NSArray *keyboardFields;
- (_Bool)requirementMet;

@end
