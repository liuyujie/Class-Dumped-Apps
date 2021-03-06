//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGInterestProfileSwitchViewModel, UILabel, UISwitch;

@interface IGInterestProfileSwitchView : UIView
{
    IGInterestProfileSwitchViewModel *_viewModel;
    UILabel *_titleLabel;
    UISwitch *_switchView;
    CDUnknownBlockType _didToggleSwitch;
}

@property(copy, nonatomic) CDUnknownBlockType didToggleSwitch; // @synthesize didToggleSwitch=_didToggleSwitch;
- (void).cxx_destruct;
- (void)_toggleSwitched;
- (struct CGSize)_titleLabelSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_calculateLayout:(struct CGSize)arg1;
- (void)configureWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

