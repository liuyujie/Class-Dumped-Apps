//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface IESLiveFirstChargePopupItemView : UIView
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIImageView *_bonusView;
}

@property(retain, nonatomic) UIImageView *bonusView; // @synthesize bonusView=_bonusView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)updateWithTitle:(id)arg1 desc:(id)arg2 iconName:(id)arg3;
- (void)updateWithTitle:(id)arg1 desc:(id)arg2 iconURL:(id)arg3;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

