//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSString, UILabel, UIScrollView, YTMReplicatedLabel;

@interface YTMScrollingLabel : UIView
{
    YTMReplicatedLabel *_replicatedLabel;
    _Bool _shouldAutoScroll;
    CAGradientLayer *_fadeGradientMask;
    UIScrollView *_scrollView;
    double _autoScrollSpeed;
}

@property(nonatomic) double autoScrollSpeed; // @synthesize autoScrollSpeed=_autoScrollSpeed;
- (void).cxx_destruct;
- (void)resetFadeGradient;
- (void)stopAutoScrolling;
- (void)startAutoScrolling;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *text;
@property(readonly, nonatomic) UILabel *label;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

