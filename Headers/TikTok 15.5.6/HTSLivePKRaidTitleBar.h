//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IESLiveCountTimer, UILabel;

@interface HTSLivePKRaidTitleBar : UIView
{
    CDUnknownBlockType _onPrepareEnd;
    UILabel *_titleLabel;
    UILabel *_timerLabel;
    IESLiveCountTimer *_pkTimer;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) IESLiveCountTimer *pkTimer; // @synthesize pkTimer=_pkTimer;
@property(retain, nonatomic) UILabel *timerLabel; // @synthesize timerLabel=_timerLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType onPrepareEnd; // @synthesize onPrepareEnd=_onPrepareEnd;
- (void).cxx_destruct;
- (id)stringFromTime:(long long)arg1;
- (void)updateWithRemain:(long long)arg1;
- (void)addMaskAnimation:(long long)arg1;
- (void)prepareWithCountDown:(long long)arg1;
- (void)setupViews;
- (id)init;

@end

