//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1ToastContentViewable-Protocol.h>
#import <T1Twitter/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, T1AvatarImageView, TFNButton, UIImageView, UILabel, UIStackView, UITapGestureRecognizer;
@protocol T1ToastContentViewDelegate, T1ToastViewModel;

@interface T1ToastDefaultContentView : UIView <UIGestureRecognizerDelegate, T1ToastContentViewable>
{
    id <T1ToastContentViewDelegate> _delegate;
    UIImageView *_iconView;
    T1AvatarImageView *_avatarView;
    UILabel *_messageLabel;
    UILabel *_detailLabel;
    TFNButton *_alternateActionButton;
    UIView *_iconContainerView;
    UIView *_labelContainerView;
    UIStackView *_mainContainerStackView;
    UIView *_buttonContainerView;
    UIStackView *_containerStackView;
    id <T1ToastViewModel> _toast;
    UITapGestureRecognizer *_primaryActionTapRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *primaryActionTapRecognizer; // @synthesize primaryActionTapRecognizer=_primaryActionTapRecognizer;
@property(retain, nonatomic) id <T1ToastViewModel> toast; // @synthesize toast=_toast;
@property(retain, nonatomic) UIStackView *containerStackView; // @synthesize containerStackView=_containerStackView;
@property(retain, nonatomic) UIView *buttonContainerView; // @synthesize buttonContainerView=_buttonContainerView;
@property(retain, nonatomic) UIStackView *mainContainerStackView; // @synthesize mainContainerStackView=_mainContainerStackView;
@property(retain, nonatomic) UIView *labelContainerView; // @synthesize labelContainerView=_labelContainerView;
@property(retain, nonatomic) UIView *iconContainerView; // @synthesize iconContainerView=_iconContainerView;
@property(retain, nonatomic) TFNButton *alternateActionButton; // @synthesize alternateActionButton=_alternateActionButton;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) T1AvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <T1ToastContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_t1_alternateActionButtonTapped:(id)arg1;
- (void)_t1_primaryActionTapped:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 toast:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 toast:(id)arg2 imagePipeline:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
