//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIWebViewDelegate-Protocol.h"

@class NSString, UIImageView, UILabel, UIScrollView;

@interface AWEPOIMerchantAnnouncementViewController : UIViewController <UIWebViewDelegate>
{
    UIScrollView *_contentScrollView;
    UIImageView *_banner;
    UILabel *_titleLabel;
    UILabel *_sectionTitleLabel;
    UILabel *_descriptionLabel;
    NSString *_poiName;
}

@property(copy, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *sectionTitleLabel; // @synthesize sectionTitleLabel=_sectionTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *banner; // @synthesize banner=_banner;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
- (void).cxx_destruct;
- (id)attributedTextWithSource:(id)arg1;
- (void)backBtnClicked:(id)arg1;
- (void)p_setupUI;
- (void)addLayout;
- (void)viewDidLoad;
- (id)initWithBannerUrl:(id)arg1 title:(id)arg2 description:(id)arg3 poiName:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
