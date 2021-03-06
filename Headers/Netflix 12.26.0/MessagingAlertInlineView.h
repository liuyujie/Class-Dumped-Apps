//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NFUILabel, NFUILinkLabel, UIButton, UILabel;

@interface MessagingAlertInlineView : UIView
{
    UILabel *_iconLabel;
    NFUILabel *_titleLabel;
    NFUILinkLabel *_bodyLabel;
    NFUILinkLabel *_footerLabel;
    UIButton *_button1;
    UIButton *_button2;
}

@property(retain, nonatomic) UIButton *button2; // @synthesize button2=_button2;
@property(retain, nonatomic) UIButton *button1; // @synthesize button1=_button1;
@property(retain, nonatomic) NFUILinkLabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) NFUILinkLabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) NFUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
- (void).cxx_destruct;
- (void)preLayout;
- (double)layoutButtonsAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2;
- (double)localLayoutForWidth:(double)arg1;
- (void)addButton2:(id)arg1;
- (void)addButton1:(id)arg1;
- (void)setButtonAccessibility;
- (void)internalLayoutSubviews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

