//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGTapButton, UILabel;
@protocol IGInsightsInlineMetricViewDelegate;

@interface IGInsightsInlineMetricView : UIView
{
    UILabel *_titleLabel;
    UILabel *_valueLabel;
    UILabel *_seeAllLabel;
    IGTapButton *_infoButton;
    id <IGInsightsInlineMetricViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)configureWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)_didTapInfoButton:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_layoutSeeAllLabel;
- (void)_layoutInfoButton;
- (void)_layoutValueLabel;
- (void)_layoutTitleLabel;
- (void)layoutSubviews;
- (void)_updateLabelsWithStyle:(long long)arg1;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

