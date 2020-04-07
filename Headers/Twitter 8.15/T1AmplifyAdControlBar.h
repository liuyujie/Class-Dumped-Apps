//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1AmplifyControlBar.h>

@class T1DynamicVideoAdViewModel, T1TimeDurationPillView, T1VideoAdButton, T1VideoSkipCountdownLabel;

@interface T1AmplifyAdControlBar : T1AmplifyControlBar
{
    _Bool _shouldRenderAdByAdvertiser;
    T1TimeDurationPillView *_durationPillView;
    T1VideoAdButton *_skipAdButton;
    double _countDownValue;
    T1VideoSkipCountdownLabel *_skipCountdownLabel;
    T1DynamicVideoAdViewModel *_adViewModel;
}

@property(nonatomic) _Bool shouldRenderAdByAdvertiser; // @synthesize shouldRenderAdByAdvertiser=_shouldRenderAdByAdvertiser;
@property(retain, nonatomic) T1DynamicVideoAdViewModel *adViewModel; // @synthesize adViewModel=_adViewModel;
@property(retain, nonatomic) T1VideoSkipCountdownLabel *skipCountdownLabel; // @synthesize skipCountdownLabel=_skipCountdownLabel;
@property(nonatomic) double countDownValue; // @synthesize countDownValue=_countDownValue;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_layoutSkipCountDownLabel;
- (void)_layoutSkipAdButton;
- (void)_layoutDurationPillView;
- (void)layoutSubviews;
- (void)_updateSkipCountDownLabelWithCurrentPlaybackTime:(double)arg1;
- (void)_showSkipButtonWithCurrentPlaybackTime:(double)arg1 duration:(double)arg2;
- (void)updateWithCurrentPlaybackState:(id)arg1;
- (void)_skipAdButtonTap:(id)arg1 event:(id)arg2;
@property(readonly, nonatomic) T1VideoAdButton *skipAdButton; // @synthesize skipAdButton=_skipAdButton;
@property(readonly, nonatomic) T1TimeDurationPillView *durationPillView; // @synthesize durationPillView=_durationPillView;
- (id)initWithTAVPlayer:(id)arg1 account:(id)arg2;

@end
