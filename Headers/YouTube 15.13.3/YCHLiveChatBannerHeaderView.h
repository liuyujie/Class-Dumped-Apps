//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/GA11YMixinEmbedder-Protocol.h>

@class GIMMe, NSString, UILabel, YTILiveChatBannerHeaderRenderer, YTImageView, YTQTMButton;
@protocol GA11YMixinImpl, YCHLiveChatBannerHeaderViewDelegate, YCHLiveChatStyleProtocol;

@interface YCHLiveChatBannerHeaderView : UIView <GA11YMixinEmbedder>
{
    id <GA11YMixinImpl> _accessibilityMixin;
    GIMMe *_gimme;
    id <YCHLiveChatBannerHeaderViewDelegate> _delegate;
    YTImageView *_iconImageView;
    UILabel *_label;
    YTILiveChatBannerHeaderRenderer *_bannerHeaderRender;
    YTQTMButton *_contextMenuButton;
    id <YCHLiveChatStyleProtocol> _style;
    long long _pageStyle;
}

@property(readonly, nonatomic) long long pageStyle; // @synthesize pageStyle=_pageStyle;
@property(readonly, nonatomic) __weak id <YCHLiveChatStyleProtocol> style; // @synthesize style=_style;
@property(readonly, nonatomic) YTQTMButton *contextMenuButton; // @synthesize contextMenuButton=_contextMenuButton;
@property(readonly, nonatomic) YTILiveChatBannerHeaderRenderer *bannerHeaderRender; // @synthesize bannerHeaderRender=_bannerHeaderRender;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) YTImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak id <YCHLiveChatBannerHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (struct CGSize)labelSizeThatFits:(struct CGSize)arg1;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)didTapContextMenuButton:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateHeaderViewWithBannerContentMode:(unsigned long long)arg1;
- (void)setEntry:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

