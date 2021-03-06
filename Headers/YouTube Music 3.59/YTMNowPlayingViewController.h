//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTMNowPlayingViewDelegate-Protocol.h"
#import "YTMSongInfoBrowseViewControllerDelegate-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTStoryboardControllerDelegate-Protocol.h"
#import "YTSystemNotificationsObserver-Protocol.h"

@class GIMMe, NSString, YTIButtonRenderer, YTILikeButtonRenderer, YTMNowPlayingView, YTMQueueHeaderViewController, YTMSongInfoBrowseViewController;
@protocol YTMNowPlayingViewControllerDelegate, YTMNowPlayingViewControllerScrubberDelegate, YTResponder;

@interface YTMNowPlayingViewController : UIViewController <YTMNowPlayingViewDelegate, YTMSongInfoBrowseViewControllerDelegate, YTSystemNotificationsObserver, YTResponder, YTStoryboardControllerDelegate>
{
    YTMNowPlayingView *_nowPlayingView;
    YTIButtonRenderer *_infoButtonRenderer;
    _Bool _scrubbing;
    _Bool _backgrounded;
    _Bool _mediaTimeNeedsUpdate;
    _Bool _totalTimeNeedsUpdate;
    _Bool _timeRemainingNeedsUpdate;
    _Bool _downloadedTimeNeedsUpdate;
    _Bool _liveVideo;
    _Bool _DVREnabled;
    _Bool _playing;
    _Bool _storyboardEnabled;
    _Bool _playerControlsEnabled;
    id <YTResponder> _parentResponder;
    id <YTMNowPlayingViewControllerDelegate> _delegate;
    id <YTMNowPlayingViewControllerScrubberDelegate> _scrubberDelegate;
    YTMSongInfoBrowseViewController *_songInfoBrowseViewController;
    YTILikeButtonRenderer *_likeButtonRenderer;
    double _scrubberTotalTime;
    double _scrubberDownloadedTime;
    double _scrubberMediaTime;
    double _scrubberTimeFromPlayhead;
    YTMQueueHeaderViewController *_playlistPanelHeaderController;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) YTMQueueHeaderViewController *playlistPanelHeaderController; // @synthesize playlistPanelHeaderController=_playlistPanelHeaderController;
@property(nonatomic) _Bool playerControlsEnabled; // @synthesize playerControlsEnabled=_playerControlsEnabled;
@property(nonatomic) double scrubberTimeFromPlayhead; // @synthesize scrubberTimeFromPlayhead=_scrubberTimeFromPlayhead;
@property(nonatomic) double scrubberMediaTime; // @synthesize scrubberMediaTime=_scrubberMediaTime;
@property(nonatomic) double scrubberDownloadedTime; // @synthesize scrubberDownloadedTime=_scrubberDownloadedTime;
@property(nonatomic) double scrubberTotalTime; // @synthesize scrubberTotalTime=_scrubberTotalTime;
@property(retain, nonatomic) YTILikeButtonRenderer *likeButtonRenderer; // @synthesize likeButtonRenderer=_likeButtonRenderer;
@property(retain, nonatomic) YTMSongInfoBrowseViewController *songInfoBrowseViewController; // @synthesize songInfoBrowseViewController=_songInfoBrowseViewController;
@property(nonatomic, getter=isStoryboardEnabled) _Bool storyboardEnabled; // @synthesize storyboardEnabled=_storyboardEnabled;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) __weak id <YTMNowPlayingViewControllerScrubberDelegate> scrubberDelegate; // @synthesize scrubberDelegate=_scrubberDelegate;
@property(nonatomic) __weak id <YTMNowPlayingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)dispatchServiceEndpointForLikeStatus:(int)arg1 likeButtonRenderer:(id)arg2;
- (void)updateLikeStatus:(int)arg1;
- (void)handleLikeStatusModification:(id)arg1;
- (void)appDidChangeStatusBarOrientation;
- (void)appDidEnterBackground:(id)arg1;
- (void)appWillEnterForeground:(id)arg1;
- (void)setStoryboardFrame:(id)arg1;
- (void)didStopScrubbing;
- (void)scrubberValueDidChange;
- (void)didTapDislikeButton;
- (void)didTapLikeButton;
- (void)didTapPrevButton;
- (void)didTapNextButton;
- (void)didTapPlayButton;
- (void)didTapOverflowMenuButton;
- (void)didTapInfoButton;
- (void)songInfoBrowseViewController:(id)arg1 didEndScrollingByAmount:(double)arg2;
- (void)songInfoBrowseViewController:(id)arg1 didScrollByAmount:(double)arg2;
- (void)songInfoBrowseViewController:(id)arg1 didLoadBrowseResponse:(id)arg2;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (void)nowPlayingViewDidCollapseExpandedViews:(id)arg1;
- (void)nowPlayingView:(id)arg1 scrubberDidBeginExpanding:(id)arg2;
- (void)nowPlayingView:(id)arg1 scrubberDidBeginCollapsing:(id)arg2;
- (void)nowPlayingViewDidChangeExpansionCoefficient:(id)arg1;
- (void)nowPlayingView:(id)arg1 expansionCoefficientChangeTo:(double)arg2 animated:(_Bool)arg3;
- (void)nowPlayingViewWillChangeExpansionCoefficient:(id)arg1;
- (_Bool)isPlaylistPanelExpanded;
- (void)setScrubberAdMarkers:(id)arg1;
- (void)prepareForInitialPlayback;
@property(readonly, nonatomic) _Bool songInfoViewExpanded;
- (void)reset;
@property(nonatomic, getter=isScrubberEnabled) _Bool scrubberEnabled;
- (void)setLive:(_Bool)arg1 DVREnabled:(_Bool)arg2 showOfflineSlate:(_Bool)arg3;
@property(nonatomic, getter=isNextButtonHidden) _Bool nextButtonHidden;
- (void)setPlaybackInSyncWithLivePlayhead:(_Bool)arg1;
- (void)setVideoArtistWithMetadata:(id)arg1 secondaryText:(id)arg2;
- (void)setVideoTitle:(id)arg1 videoArtist:(id)arg2 infoButtonRenderer:(id)arg3;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

