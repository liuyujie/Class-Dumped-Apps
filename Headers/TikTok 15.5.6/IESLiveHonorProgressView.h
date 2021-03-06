//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CALayer, IESLiveGradientView, IESLiveHonorProgressViewModel, NSString, UIImageView;

@interface IESLiveHonorProgressView : UIView <CAAnimationDelegate>
{
    IESLiveHonorProgressViewModel *_viewModel;
    UIView *_backView;
    UIImageView *_progressBackImageView;
    CALayer *_progressBackImageLayer;
    IESLiveGradientView *_highlightLayer;
    CALayer *_progressWillAddLayer;
    double _progress;
}

@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) CALayer *progressWillAddLayer; // @synthesize progressWillAddLayer=_progressWillAddLayer;
@property(retain, nonatomic) IESLiveGradientView *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
@property(retain, nonatomic) CALayer *progressBackImageLayer; // @synthesize progressBackImageLayer=_progressBackImageLayer;
@property(retain, nonatomic) UIImageView *progressBackImageView; // @synthesize progressBackImageView=_progressBackImageView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) IESLiveHonorProgressViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)startProgressAnimatingWithDuration:(double)arg1;
- (void)layoutSubviews;
- (void)willNotAddProgress;
- (void)willAddProgress:(double)arg1;
- (void)setProgressFinish:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

