//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <Module_Framework/MDCInkTouchControllerDelegate-Protocol.h>
#import <Module_Framework/YTPageStyling-Protocol.h>

@class FLXLayout, GA11YElement, MDCInkTouchController, NSString, UIImageView, YTFormattedStringLabel, YTIPollChoice, YTProgressView;
@protocol YTCommentViewDelegate;

@interface YTBackstagePollChoiceView : UIControl <MDCInkTouchControllerDelegate, YTPageStyling>
{
    GA11YElement *_a11yElement;
    MDCInkTouchController *_inkTouchController;
    long long _pageStyle;
    id <YTCommentViewDelegate> _delegate;
    YTIPollChoice *_pollChoiceRenderer;
    double _preferredMaxLayoutWidth;
    YTFormattedStringLabel *_descriptionLabel;
    YTFormattedStringLabel *_percentageLabel;
    UIImageView *_checkImageView;
    YTProgressView *_progressBar;
    FLXLayout *_layout;
}

@property(retain, nonatomic) FLXLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) YTProgressView *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) UIImageView *checkImageView; // @synthesize checkImageView=_checkImageView;
@property(retain, nonatomic) YTFormattedStringLabel *percentageLabel; // @synthesize percentageLabel=_percentageLabel;
@property(retain, nonatomic) YTFormattedStringLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(retain, nonatomic) YTIPollChoice *pollChoiceRenderer; // @synthesize pollChoiceRenderer=_pollChoiceRenderer;
@property(nonatomic) __weak id <YTCommentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateColorsForPageStyle:(long long)arg1;
- (void)didTapPollChoiceButton;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)prepareForReuse;
- (id)root;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)postV2Enabled:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

