//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HTSGuestInfoRenderer-Protocol.h"

@class CAGradientLayer, HTSLiveAvatorHonorImageView, HTSLiveInteractiveUserModel, NSString, UIImageView, UILabel;
@protocol IESLiveEnvironment;

@interface HTSGuestInfoView : UIView <HTSGuestInfoRenderer>
{
    _Bool _isAudio;
    HTSLiveInteractiveUserModel *_guest;
    CDUnknownBlockType _onUserViewClicked;
    NSString *_coinImageName;
    UILabel *_nameLabel;
    UIImageView *_fanTicketIconView;
    UILabel *_fanTicketLabel;
    HTSLiveAvatorHonorImageView *_avatarImageView;
    CAGradientLayer *_bottomGradientLayer;
    UILabel *_statusLabel;
    id <IESLiveEnvironment> _appTarget;
}

@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) CAGradientLayer *bottomGradientLayer; // @synthesize bottomGradientLayer=_bottomGradientLayer;
@property(retain, nonatomic) HTSLiveAvatorHonorImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UILabel *fanTicketLabel; // @synthesize fanTicketLabel=_fanTicketLabel;
@property(nonatomic) __weak UIImageView *fanTicketIconView; // @synthesize fanTicketIconView=_fanTicketIconView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) _Bool isAudio; // @synthesize isAudio=_isAudio;
@property(copy, nonatomic) NSString *coinImageName; // @synthesize coinImageName=_coinImageName;
@property(copy, nonatomic) CDUnknownBlockType onUserViewClicked; // @synthesize onUserViewClicked=_onUserViewClicked;
@property(readonly, nonatomic) HTSLiveInteractiveUserModel *guest; // @synthesize guest=_guest;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didTapInfoView;
- (void)setupRecognizer;
- (void)loadView;
- (void)updateWithGuest:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

