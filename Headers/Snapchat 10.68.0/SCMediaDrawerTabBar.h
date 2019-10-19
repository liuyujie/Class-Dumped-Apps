//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MASConstraint, UIButton, UILabel, UIVisualEffectView;
@protocol SCMediaDrawerTabBarDelegate;

@interface SCMediaDrawerTabBar : UIView
{
    UIVisualEffectView *_backgroundView;
    UIButton *_cameraRollButton;
    UILabel *_cameraRollLabel;
    UIButton *_galleryButton;
    UILabel *_galleryLabel;
    UIView *_selectionIndicator;
    MASConstraint *_selectionIndicatorCenterXConstraint;
    MASConstraint *_selectionIndicatorWidthConstraint;
    id <SCMediaDrawerTabBarDelegate> _delegate;
    long long _style;
}

@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <SCMediaDrawerTabBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateSelectionIndicatorPositionWithRatio:(double)arg1;
- (void)tabScrollViewDidScrollToRatio:(double)arg1;
- (void)_handleTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end
