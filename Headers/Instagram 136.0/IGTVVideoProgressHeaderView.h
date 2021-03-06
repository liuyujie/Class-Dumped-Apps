//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGTVProgressScrubber, IGTVSeriesTagView, UIImageView, UILabel;

@interface IGTVVideoProgressHeaderView : UIView
{
    IGTVSeriesTagView *_seriesTagView;
    UILabel *_durationLabel;
    IGTVProgressScrubber *_progressBar;
    UIImageView *_checkImageView;
    long long _style;
    struct UIEdgeInsets _seriesTagInsets;
    struct UIEdgeInsets _contentInsets;
    struct UIEdgeInsets _checkInsets;
    _Bool _showSeriesTag;
    double _seenDuration;
    double _totalDuration;
}

- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureWithSeenDuration:(double)arg1 totalDuration:(double)arg2;
- (void)configureWithShowSeriesTag:(_Bool)arg1;
- (void)configureWithShowSeriesTag:(_Bool)arg1 seenDuration:(double)arg2 totalDuration:(double)arg3;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1;

@end

