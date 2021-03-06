//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class TWTRMediaEntityDisplayConfiguration, TWTRTweetImageViewPill;

@interface TWTRTweetImageView : UIImageView
{
    unsigned long long _style;
    TWTRMediaEntityDisplayConfiguration *_mediaConfiguration;
    TWTRTweetImageViewPill *_pillView;
}

@property(readonly, nonatomic) TWTRTweetImageViewPill *pillView; // @synthesize pillView=_pillView;
@property(readonly, nonatomic) TWTRMediaEntityDisplayConfiguration *mediaConfiguration; // @synthesize mediaConfiguration=_mediaConfiguration;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)loadImageWithShouldUpdateImageViewCallback:(CDUnknownBlockType)arg1;
- (void)updatePillViewWithMediaEntityConfiguration:(id)arg1;
- (void)configureWithMediaEntityConfiguration:(id)arg1 style:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

