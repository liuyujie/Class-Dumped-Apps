//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XLFormBaseCell.h"

@class UIColor;

@interface XLFormInlineSelectorCell : XLFormBaseCell
{
    UIColor *_beforeChangeColor;
}

- (void).cxx_destruct;
- (id)valueDisplayText;
- (void)unhighlight;
- (void)highlight;
- (void)formDescriptorCellDidSelectedWithFormController:(id)arg1;
- (_Bool)formDescriptorCellBecomeFirstResponder;
- (_Bool)formDescriptorCellCanBecomeFirstResponder;
- (void)update;
- (void)configure;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;

@end

