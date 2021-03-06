//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/IGGDPRConsentBottomButtonViewDelegate-Protocol.h>

@class IGCoreTextView, IGGDPRConsentBottomButtonView, IGGDPRConsentLayoutSpec, NSString, UIImageView, UILabel;
@protocol IGGDPRConsentUnderAgeBlockingViewDelegate;

@interface IGGDPRConsentUnderAgeBlockingView : UIView <IGGDPRConsentBottomButtonViewDelegate>
{
    UIImageView *_iconView;
    IGCoreTextView *_contentTitle;
    IGCoreTextView *_contentTextView;
    UILabel *_separatorLineLabel;
    UIView *_contentView;
    IGGDPRConsentBottomButtonView *_okButtonView;
    IGGDPRConsentLayoutSpec *_layoutSpec;
    id <IGGDPRConsentUnderAgeBlockingViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGGDPRConsentUnderAgeBlockingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)GDPRConsentBottomButtonViewDidTapSecondaryBottomButton;
- (void)GDPRConsentBottomButtonViewDidTapPrimaryBottomButton:(_Bool)arg1;
- (void)configureWithTitleText:(id)arg1 contentText:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 layoutSpec:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

