//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TWTRVideoControlsView, UIButton, UISlider;

@protocol TWTRVideoControlsViewDelegate <NSObject>

@optional
- (void)videoControlsView:(TWTRVideoControlsView *)arg1 scrubberDidChangeValue:(UISlider *)arg2;
- (void)videoControlsView:(TWTRVideoControlsView *)arg1 scrubberDidTouchUp:(UISlider *)arg2;
- (void)videoControlsView:(TWTRVideoControlsView *)arg1 scrubberDidTouchDown:(UISlider *)arg2;
- (void)videoControlsView:(TWTRVideoControlsView *)arg1 didTapFullscreenButton:(UIButton *)arg2;
- (void)videoControlsView:(TWTRVideoControlsView *)arg1 didTapControlButton:(UIButton *)arg2;
@end

