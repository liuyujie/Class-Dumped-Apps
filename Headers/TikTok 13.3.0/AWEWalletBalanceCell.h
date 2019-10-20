//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel;

@interface AWEWalletBalanceCell : UITableViewCell
{
    UILabel *_titleLabel;
    UIImageView *_doubiImageView;
    UILabel *_balanceLabel;
    UIButton *_chargeButton;
}

+ (id)identifier;
@property(retain, nonatomic) UIButton *chargeButton; // @synthesize chargeButton=_chargeButton;
@property(retain, nonatomic) UILabel *balanceLabel; // @synthesize balanceLabel=_balanceLabel;
@property(retain, nonatomic) UIImageView *doubiImageView; // @synthesize doubiImageView=_doubiImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)chargeButtonClicked:(id)arg1;
- (void)updateWithWalletModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
