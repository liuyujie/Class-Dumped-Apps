//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GA11YMixinEmbedder.h"
#import "YTSingleVideoFormatSelectionObserver.h"
#import "YTSingleVideoMediaStateObserver.h"

@class NSDate, NSString, YTLabel;

@interface YTReelWatchPlaybackStatsView : UIView <GA11YMixinEmbedder, YTSingleVideoMediaStateObserver, YTSingleVideoFormatSelectionObserver>
{
    NSDate *_loadDate;
    id <YTSingleVideoObservable> _video;
    YTLabel *_indexLabel;
    YTLabel *_playTimeLabel;
    YTLabel *_statusLabel;
    YTLabel *_videoIDLabel;
    YTLabel *_CPNLabel;
    YTLabel *_audioItagLabel;
    YTLabel *_videoItagLabel;
    id <GA11YMixinImpl> _accessibilityMixin;
    id <YTReelPlaybackInfoProvider> _infoProvider;
}

@property(nonatomic) __weak id <YTReelPlaybackInfoProvider> infoProvider; // @synthesize infoProvider=_infoProvider;
- (void).cxx_destruct;
- (void)updateAudioAndVideoFormatLabels;
- (void)setPlayTime:(double)arg1;
- (void)updateStatusLabelForState:(long long)arg1;
- (void)setCPN:(id)arg1;
- (void)setVideoID:(id)arg1;
- (void)updateIndexLabel;
- (void)setVideo:(id)arg1;
- (id)createLabel;
- (void)singleVideo:(id)arg1 didSelectVideoFormat:(id)arg2 audioFormat:(id)arg3;
- (void)singleVideo:(id)arg1 mediaStateDidChangeFromState:(long long)arg2 toState:(long long)arg3;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)currentVideoDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
