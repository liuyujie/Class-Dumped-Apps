//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSValue, UILabel, WALinkLabel, WAPasscodeView;

@interface WATwoFactorContainerView : UIView
{
    UILabel *_titleLabel;
    UIView *_contentView;
    UIView *_decorationView;
    WAPasscodeView *_passcodeView;
    WALinkLabel *_descriptionLabel;
    NSValue *_screenSize;
}

@property(retain, nonatomic) NSValue *screenSize; // @synthesize screenSize=_screenSize;
@property(readonly, nonatomic) WALinkLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) WAPasscodeView *passcodeView; // @synthesize passcodeView=_passcodeView;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)safeAreaInsetsDidChange;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
