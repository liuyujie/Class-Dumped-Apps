//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOTextFieldContentView.h"

#import "UITextFieldDelegate-Protocol.h"

@class GHKPhoneNumberFieldContentViewObject, NSString, UIImage, UIImageView, UIView;

@interface GHKPhoneNumberFieldContentView : GOOTextFieldContentView <UITextFieldDelegate>
{
    NSString *_lastPhoneNumber;
    UIView *_dialingCodeUnderline;
    UIImageView *_dropDownArrow;
    UIImage *_blueArrowImage;
    UIImage *_greyArrowImage;
}

- (void).cxx_destruct;
- (id)formatPhoneNumber:(id)arg1 countryCode:(id)arg2 deleting:(_Bool)arg3;
- (void)handleCursorPlacement:(id)arg1 cursorPos:(long long)arg2 deleting:(_Bool)arg3;
- (long long)rightOffset:(id)arg1 index:(long long)arg2;
- (long long)leftOffset:(id)arg1 index:(long long)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)updateViewWithObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) GHKPhoneNumberFieldContentViewObject *object; // @dynamic object;
@property(readonly) Class superclass;

@end
