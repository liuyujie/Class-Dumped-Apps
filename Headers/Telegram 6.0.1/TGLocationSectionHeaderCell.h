//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class TGLocationPallete, UILabel;

@interface TGLocationSectionHeaderCell : UITableViewCell
{
    UILabel *_titleLabel;
    TGLocationPallete *_pallete;
}

@property(retain, nonatomic) TGLocationPallete *pallete; // @synthesize pallete=_pallete;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureWithTitle:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

