//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCCollectionViewCell.h"

@class HMELabel, UIButton, UIImageView, UIView;
@protocol HMENoStructureCellDelegate;

@interface HMENoStructureCell : MDCCollectionViewCell
{
    id <HMENoStructureCellDelegate> _delegate;
    UIImageView *_emptyDiscoveryImageView;
    HMELabel *_label;
    UIButton *_button;
    UIView *_separatorView;
}

+ (double)preferredHeightForWidth:(double)arg1;
@property(readonly, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
@property(readonly, nonatomic) HMELabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIImageView *emptyDiscoveryImageView; // @synthesize emptyDiscoveryImageView=_emptyDiscoveryImageView;
@property(nonatomic) __weak id <HMENoStructureCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapGetStarted;
@property(nonatomic) _Bool shouldShowSeparator;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

