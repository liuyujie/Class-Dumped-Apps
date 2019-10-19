//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol SCPreviewToolBarPickerViewDelegate;

@interface SCPreviewToolBarPickerView : UIView
{
    id <SCPreviewToolBarPickerViewDelegate> _viewModeDelegate;
    UIView *_containerView;
    UIView *_compactButtonView;
    long long _viewMode;
}

@property(nonatomic) long long viewMode; // @synthesize viewMode=_viewMode;
@property(retain, nonatomic) UIView *compactButtonView; // @synthesize compactButtonView=_compactButtonView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <SCPreviewToolBarPickerViewDelegate> viewModeDelegate; // @synthesize viewModeDelegate=_viewModeDelegate;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onPostAnimateForViews:(long long)arg1;
- (void)onPreAnimateForViews:(long long)arg1;
- (void)animateViews:(long long)arg1;
- (void)switchPickerViewMode:(long long)arg1 withAnimation:(_Bool)arg2 withAnimationDuration:(double)arg3;
- (id)init;

@end
