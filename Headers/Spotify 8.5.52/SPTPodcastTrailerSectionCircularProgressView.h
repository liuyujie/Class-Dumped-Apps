//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, SPTTheme, UIImageView;

@interface SPTPodcastTrailerSectionCircularProgressView : UIView
{
    double _progress;
    SPTTheme *_catTheme;
    CAShapeLayer *_circleLayer;
    UIImageView *_pauseIconImageView;
}

@property(retain, nonatomic) UIImageView *pauseIconImageView; // @synthesize pauseIconImageView=_pauseIconImageView;
@property(retain, nonatomic) CAShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(retain, nonatomic) SPTTheme *catTheme; // @synthesize catTheme=_catTheme;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)configureLayout;
- (void)configureAppearance;
- (id)initWithTheme:(id)arg1;

@end

