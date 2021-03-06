//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIView;

@interface AWETabTitleControl : UICollectionViewCell
{
    UILabel *_titleLabel;
    UIView *_yellowDotView;
    UIView *_indicatorView;
}

+ (struct CGSize)collectionView:(id)arg1 sizeForTabTitleControlWithTitle:(id)arg2;
@property(retain, nonatomic) UIView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIView *yellowDotView; // @synthesize yellowDotView=_yellowDotView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setupUI;
- (void)showYellowDot:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

