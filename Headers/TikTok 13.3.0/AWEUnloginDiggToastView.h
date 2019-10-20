//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface AWEUnloginDiggToastView : UIView
{
    UIView *_backgroundView;
    UIImageView *_loveImageView;
    UILabel *_descriptionLabel;
    struct CGPoint _viewCenter;
}

@property(nonatomic) struct CGPoint viewCenter; // @synthesize viewCenter=_viewCenter;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIImageView *loveImageView; // @synthesize loveImageView=_loveImageView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)startAnimation;
- (void)_setupUI;
- (id)initWithCenter:(struct CGPoint)arg1;

@end
