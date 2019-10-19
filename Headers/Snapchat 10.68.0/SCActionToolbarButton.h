//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class SCActionToolbarBadgeView, UIImage, UIImageView;

@interface SCActionToolbarButton : UIControl
{
    UIImage *_image;
    UIImage *_lightImage;
    long long _badgeCount;
    double _lightImageAlpha;
    UIImageView *_imageView;
    UIImageView *_lightImageView;
    SCActionToolbarBadgeView *_badgeView;
}

@property(retain, nonatomic) SCActionToolbarBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIImageView *lightImageView; // @synthesize lightImageView=_lightImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) double lightImageAlpha; // @synthesize lightImageAlpha=_lightImageAlpha;
@property(nonatomic) long long badgeCount; // @synthesize badgeCount=_badgeCount;
@property(retain, nonatomic) UIImage *lightImage; // @synthesize lightImage=_lightImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)setBadgeCount:(long long)arg1 animated:(_Bool)arg2;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
