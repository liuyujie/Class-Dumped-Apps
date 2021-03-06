//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentView.h"

@class UIButton, UILabel, UIStackView, UISwitch;

@interface SettingsSwitchAndLinkContentView : GOOBaseContentView
{
    UIStackView *_containerStackView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_learnMoreButton;
    UISwitch *_trailingSwitch;
}

+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
@property(readonly, nonatomic) UISwitch *trailingSwitch; // @synthesize trailingSwitch=_trailingSwitch;
@property(readonly, nonatomic) UIButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIStackView *containerStackView; // @synthesize containerStackView=_containerStackView;
- (void).cxx_destruct;
- (void)updateViewWithObject:(id)arg1;
- (void)didTapSwitch:(id)arg1;
- (void)didTapLearnMoreButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

