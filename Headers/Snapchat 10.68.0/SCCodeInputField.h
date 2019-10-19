//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UITextField;
@protocol SCCodeInputFieldDelegate, SCUnauthenticatedStyleHelper;

@interface SCCodeInputField : UIView <UITextFieldDelegate>
{
    UITextField *_codeField;
    id <SCUnauthenticatedStyleHelper> _styleHelper;
    unsigned long long _maxCodeLength;
    id <SCCodeInputFieldDelegate> _delegate;
}

- (void).cxx_destruct;
- (double)_getKerning;
- (double)_getSingleNumberWidth;
- (void)_initCodeInputFieldMaxCodeLength:(unsigned long long)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)_textFieldDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(copy, nonatomic) NSString *text;
- (_Bool)becomeFirstResponder;
- (id)initWithDelegate:(id)arg1 styleHelper:(id)arg2;
- (id)initWithDelegate:(id)arg1 styleHelper:(id)arg2 maxCodeLength:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
