//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTTAttributedLabelDelegate-Protocol.h"

@class NSString, TTTAttributedLabel, UIButton, UIImageView, UILabel;

@interface AWEDuoShanAlertView : UIView <TTTAttributedLabelDelegate>
{
    _Bool _registed;
    CDUnknownBlockType _clickAgreeButtonBlock;
    CDUnknownBlockType _clickCloseButtonBlock;
    UIView *_maskView;
    UIView *_smallBackGroundView;
    UIButton *_closeButton;
    UIImageView *_topImageView;
    UILabel *_midLabel;
    TTTAttributedLabel *_agreeLabel;
    UIButton *_agreeButton;
    NSString *_content;
    NSString *_h5Str;
    NSString *_h5Url;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
@property(retain, nonatomic) NSString *h5Str; // @synthesize h5Str=_h5Str;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) _Bool registed; // @synthesize registed=_registed;
@property(retain, nonatomic) UIButton *agreeButton; // @synthesize agreeButton=_agreeButton;
@property(retain, nonatomic) TTTAttributedLabel *agreeLabel; // @synthesize agreeLabel=_agreeLabel;
@property(retain, nonatomic) UILabel *midLabel; // @synthesize midLabel=_midLabel;
@property(retain, nonatomic) UIImageView *topImageView; // @synthesize topImageView=_topImageView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *smallBackGroundView; // @synthesize smallBackGroundView=_smallBackGroundView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(copy, nonatomic) CDUnknownBlockType clickCloseButtonBlock; // @synthesize clickCloseButtonBlock=_clickCloseButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType clickAgreeButtonBlock; // @synthesize clickAgreeButtonBlock=_clickAgreeButtonBlock;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)dismiss;
- (void)clickAgreeButton;
- (void)clickCloseButton;
- (void)showOnView:(id)arg1;
- (_Bool)configMessage;
- (id)initWithRegisted:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

