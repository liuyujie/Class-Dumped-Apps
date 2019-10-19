//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GA11YMixinEmbedder-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "YTPageStyleProvider-Protocol.h"
#import "YTPageStyling-Protocol.h"

@class GOOTextField, NSString, YTImageView, YTLabel, YTQTMButton;
@protocol GA11YMixinImpl, YTInlineReauthViewDelegate, YTPageStyleProvider;

@interface YTInlineReauthView : UIView <GA11YMixinEmbedder, YTPageStyling, YTPageStyleProvider, UITextFieldDelegate>
{
    YTLabel *_emailLabel;
    YTQTMButton *_forgotPasswordButton;
    YTImageView *_googleLogoImageView;
    struct CGRect _keyboardFrame;
    YTLabel *_nameLabel;
    YTQTMButton *_nextButton;
    GOOTextField *_passwordTextField;
    YTImageView *_userAvatarImageView;
    id <GA11YMixinImpl> _accessibilityMixin;
    id <YTInlineReauthViewDelegate> _delegate;
    id <YTPageStyleProvider> _pageStyleProviderDelegate;
}

@property(nonatomic) __weak id <YTPageStyleProvider> pageStyleProviderDelegate; // @synthesize pageStyleProviderDelegate=_pageStyleProviderDelegate;
@property(nonatomic) __weak id <YTInlineReauthViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
@property(readonly, nonatomic) long long pageStyle;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (struct CGRect)keyboardFrameInView:(id)arg1;
- (void)keyboardFrameDidChange:(id)arg1;
- (void)didTapNext;
- (void)didTapForgotPassword;
- (void)layoutSubviews;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)setUserAvatarImage:(id)arg1;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
