//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MemberReferralLogger, MemberReferralShareViewModel, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIStackView, UIViewController;
@protocol MemberReferralRetryListener, ReferralLayoutChangeListener;

@interface MemberReferralShareView : UIView
{
    UIImageView *_titleIcon;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_termsAndConditionsButton;
    UILabel *_linkText;
    UIButton *_linkCopyButton;
    UILabel *_singleShareLabel;
    UILabel *_singleShareIcon;
    UIView *_linkGroup;
    UIView *_singleShareContainer;
    UILabel *_linkShareSeparator;
    UIStackView *_referralContainer;
    UILabel *_errorMessage;
    UIButton *_errorButton;
    UIStackView *_errorContainer;
    UIActivityIndicatorView *_codeLoadingIndicator;
    UILabel *_loadingLabel;
    UIStackView *_loadingContainer;
    MemberReferralShareViewModel *_viewModel;
    id <ReferralLayoutChangeListener> _layoutChangeListener;
    id <MemberReferralRetryListener> _retryListener;
    MemberReferralLogger *_referralLogger;
    UIViewController *_hostController;
}

+ (id)createInstanceInController:(id)arg1 layoutListener:(id)arg2 retryListener:(id)arg3 referralLogger:(id)arg4;
@property(nonatomic) __weak UIViewController *hostController; // @synthesize hostController=_hostController;
@property(retain, nonatomic) MemberReferralLogger *referralLogger; // @synthesize referralLogger=_referralLogger;
@property(retain, nonatomic) id <MemberReferralRetryListener> retryListener; // @synthesize retryListener=_retryListener;
@property(nonatomic) __weak id <ReferralLayoutChangeListener> layoutChangeListener; // @synthesize layoutChangeListener=_layoutChangeListener;
@property(retain, nonatomic) MemberReferralShareViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak UIStackView *loadingContainer; // @synthesize loadingContainer=_loadingContainer;
@property(nonatomic) __weak UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(nonatomic) __weak UIActivityIndicatorView *codeLoadingIndicator; // @synthesize codeLoadingIndicator=_codeLoadingIndicator;
@property(nonatomic) __weak UIStackView *errorContainer; // @synthesize errorContainer=_errorContainer;
@property(nonatomic) __weak UIButton *errorButton; // @synthesize errorButton=_errorButton;
@property(nonatomic) __weak UILabel *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) __weak UIStackView *referralContainer; // @synthesize referralContainer=_referralContainer;
@property(nonatomic) __weak UILabel *linkShareSeparator; // @synthesize linkShareSeparator=_linkShareSeparator;
@property(nonatomic) __weak UIView *singleShareContainer; // @synthesize singleShareContainer=_singleShareContainer;
@property(nonatomic) __weak UIView *linkGroup; // @synthesize linkGroup=_linkGroup;
@property(nonatomic) __weak UILabel *singleShareIcon; // @synthesize singleShareIcon=_singleShareIcon;
@property(nonatomic) __weak UILabel *singleShareLabel; // @synthesize singleShareLabel=_singleShareLabel;
@property(nonatomic) __weak UIButton *linkCopyButton; // @synthesize linkCopyButton=_linkCopyButton;
@property(nonatomic) __weak UILabel *linkText; // @synthesize linkText=_linkText;
@property(nonatomic) __weak UIButton *termsAndConditionsButton; // @synthesize termsAndConditionsButton=_termsAndConditionsButton;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *titleIcon; // @synthesize titleIcon=_titleIcon;
- (void).cxx_destruct;
- (void)localizeOfferAgnosticStrings;
- (void)layoutSubviews;
- (void)showReferralDetails:(id)arg1;
- (void)showError;
- (void)showLoading;
- (void)errorButtonTapped:(id)arg1;
- (void)termsButtonTapped;
- (void)copyLinkTapped;
- (void)copyLinkTapped:(id)arg1;
- (void)openShareSheet:(id)arg1 appId:(id)arg2;
- (void)singleShareContainerTapped:(id)arg1;
- (_Bool)isRegularWidth;
- (void)configureAccessibility;
- (void)awakeFromNib;

@end

