//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, CAShapeLayer, UIButton, UIImageView, UILabel;

@interface IESLiveGiftListComboView : UIView
{
    CADisplayLink *_displayLink;
    UILabel *_countdownLabel;
    UILabel *_comboNumberLabel;
    UIButton *_continueBtn;
    CAShapeLayer *_countdownLayer;
    UIImageView *_comboImageView;
    CAShapeLayer *_backLayer;
    unsigned long long _originCount;
    UIView *_animationView;
}

@property(retain, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(nonatomic) unsigned long long originCount; // @synthesize originCount=_originCount;
@property(nonatomic) __weak CAShapeLayer *backLayer; // @synthesize backLayer=_backLayer;
@property(nonatomic) __weak UIImageView *comboImageView; // @synthesize comboImageView=_comboImageView;
@property(retain, nonatomic) CAShapeLayer *countdownLayer; // @synthesize countdownLayer=_countdownLayer;
@property(retain, nonatomic) UIButton *continueBtn; // @synthesize continueBtn=_continueBtn;
@property(retain, nonatomic) UILabel *comboNumberLabel; // @synthesize comboNumberLabel=_comboNumberLabel;
@property(retain, nonatomic) UILabel *countdownLabel; // @synthesize countdownLabel=_countdownLabel;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
- (void).cxx_destruct;
- (void)stopComboAnimation;
- (void)startComboAnimation;
- (void)configWithNumber:(long long)arg1;
- (void)scaleAnimation;
- (void)startCountdownTimer;
- (void)destroyTimer;
- (void)dismiss;
- (id)makeBasicLayer;
- (void)setupViews;
- (id)initWithOriginCount:(unsigned long long)arg1;
- (void)dealloc;

@end
