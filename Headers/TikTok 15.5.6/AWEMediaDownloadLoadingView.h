//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEProgressLoadingView.h"

@class AWEMediaDownloadConfig, NSTimer;

@interface AWEMediaDownloadLoadingView : AWEProgressLoadingView
{
    double _intervalToShowCancel;
    AWEMediaDownloadConfig *_config;
    NSTimer *_downloadTimer;
}

+ (id)loadingViewWithConfig:(id)arg1;
@property(retain, nonatomic) NSTimer *downloadTimer; // @synthesize downloadTimer=_downloadTimer;
@property(retain, nonatomic) AWEMediaDownloadConfig *config; // @synthesize config=_config;
@property(nonatomic) double intervalToShowCancel; // @synthesize intervalToShowCancel=_intervalToShowCancel;
- (void).cxx_destruct;
- (void)p_setLoadingViewCancelableAnimated:(_Bool)arg1 withTitle:(id)arg2 needsToast:(_Bool)arg3;
- (void)showCancelButton;
- (void)startDownloadTimer;
- (void)endTimer;
- (_Bool)shouldStartTimer;
- (void)dismiss;
- (void)show;
- (id)initWithType:(long long)arg1 title:(id)arg2;

@end

