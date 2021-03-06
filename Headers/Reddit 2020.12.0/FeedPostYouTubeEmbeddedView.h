//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "YoutubePlayerViewDelegate-Protocol.h"

@class AudioInstance, BaseImageView, ContentImageView, NSString, Post, PreviewSpinnerView, YoutubePlayerView;
@protocol FeedPostYouTubeEmbeddedViewDelegate;

@interface FeedPostYouTubeEmbeddedView : BaseView <UIGestureRecognizerDelegate, YoutubePlayerViewDelegate>
{
    _Bool _allowYoutubeProgressTimeRecovery;
    _Bool _isVideoPlayerLoaded;
    _Bool _isDisplayed;
    id <FeedPostYouTubeEmbeddedViewDelegate> _delegate;
    Post *_post;
    ContentImageView *_imageView;
    YoutubePlayerView *_embeddedPlayerView;
    PreviewSpinnerView *_snooForLoading;
    BaseImageView *_videoPlayButtonOverlay;
    AudioInstance *_audioInstance;
    long long _currentState;
}

+ (double)calculatedHeightWithData:(id)arg1 forWidth:(double)arg2 andDelegate:(id)arg3;
@property(nonatomic) _Bool isDisplayed; // @synthesize isDisplayed=_isDisplayed;
@property(nonatomic) _Bool isVideoPlayerLoaded; // @synthesize isVideoPlayerLoaded=_isVideoPlayerLoaded;
@property(nonatomic) _Bool allowYoutubeProgressTimeRecovery; // @synthesize allowYoutubeProgressTimeRecovery=_allowYoutubeProgressTimeRecovery;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) AudioInstance *audioInstance; // @synthesize audioInstance=_audioInstance;
@property(retain, nonatomic) BaseImageView *videoPlayButtonOverlay; // @synthesize videoPlayButtonOverlay=_videoPlayButtonOverlay;
@property(retain, nonatomic) PreviewSpinnerView *snooForLoading; // @synthesize snooForLoading=_snooForLoading;
@property(retain, nonatomic) YoutubePlayerView *embeddedPlayerView; // @synthesize embeddedPlayerView=_embeddedPlayerView;
@property(retain, nonatomic) ContentImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
@property(nonatomic) __weak id <FeedPostYouTubeEmbeddedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)playerView:(id)arg1 didPlayTime:(float)arg2;
- (_Bool)playerView:(id)arg1 handleNavigationToUrl:(id)arg2;
- (void)playerView:(id)arg1 receivedError:(long long)arg2;
- (id)playerViewPreferredWebViewBackgroundColor:(id)arg1;
- (void)playerView:(id)arg1 didChangeToState:(long long)arg2;
- (void)playerViewDidBecomeReady:(id)arg1;
- (void)removePlayButtonAndShowPlayer;
- (void)recoverPlayProgressIfNeeded;
- (void)configureAudioSession;
- (void)play;
@property(readonly) _Bool isPlaying;
- (void)configureWithData:(id)arg1 andDelegate:(id)arg2;
- (void)layoutSubviews;
- (void)handleAppDidEnterBackground;
- (void)handleAppDidEnterForeground;
- (void)didEndDisplaying;
- (void)willBeginDisplaying;
- (void)prepareForReuse;
- (void)loadEmbeddedVideoStackForPlayback;
- (void)didTapVideoPlayButton;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

