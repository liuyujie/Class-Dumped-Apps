//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEAdOperationGuideStarView, AWEButton, BDSFBChoicesView, NSArray, NSString, UIImageView, UILabel;
@protocol BDSNativeAdProtocol;

@interface AWEAdSymphonyMaskView : UIView
{
    _Bool _showNewMaskStyle;
    id <BDSNativeAdProtocol> _nativeAd;
    NSString *_adTagText;
    CDUnknownBlockType _dismissBlock;
    AWEButton *_learnMoreBtn;
    AWEButton *_replayBtn;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    AWEAdOperationGuideStarView *_starView;
    UILabel *_descLabel;
    UILabel *_adTagLabel;
    BDSFBChoicesView *_choicesView;
    double _allSubViewHeight;
    NSArray *_symphonyViewArray;
}

@property(copy, nonatomic) NSArray *symphonyViewArray; // @synthesize symphonyViewArray=_symphonyViewArray;
@property(nonatomic) double allSubViewHeight; // @synthesize allSubViewHeight=_allSubViewHeight;
@property(retain, nonatomic) BDSFBChoicesView *choicesView; // @synthesize choicesView=_choicesView;
@property(retain, nonatomic) UILabel *adTagLabel; // @synthesize adTagLabel=_adTagLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) AWEAdOperationGuideStarView *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) AWEButton *replayBtn; // @synthesize replayBtn=_replayBtn;
@property(retain, nonatomic) AWEButton *learnMoreBtn; // @synthesize learnMoreBtn=_learnMoreBtn;
@property(nonatomic, getter=needShowNewMaskStyle) _Bool showNewMaskStyle; // @synthesize showNewMaskStyle=_showNewMaskStyle;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(copy, nonatomic) NSString *adTagText; // @synthesize adTagText=_adTagText;
@property(retain, nonatomic) id <BDSNativeAdProtocol> nativeAd; // @synthesize nativeAd=_nativeAd;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *interactionRegisterViews;
- (void)setHidden:(_Bool)arg1;
- (void)learnMoreBtnClicked:(id)arg1;
- (void)replayBtnClicked:(id)arg1;
- (void)layoutSubviews;
- (_Bool)needShowAdInfoView;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
