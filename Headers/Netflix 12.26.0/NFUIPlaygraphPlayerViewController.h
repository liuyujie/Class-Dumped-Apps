//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIFullPlayerViewController.h"

#import "NFPlaygraphPlayerDelegate-Protocol.h"

@class NFUIPlaybackAdvisoryController, NFUIPlayerInterrupterViewController, NFUIPlaygraphPlayerViewModel, NFUIPlaylistPlayerViewProvider, NSString, PlaybackRequest, PostPlayViewModel;
@protocol NFUIPostPlayControllerProtocol;

@interface NFUIPlaygraphPlayerViewController : NFUIFullPlayerViewController <NFPlaygraphPlayerDelegate>
{
    _Bool _reachedLogicalEnd;
    _Bool _reachedRuntimeEnd;
    _Bool _shouldShowPostPlayOverlay;
    _Bool _pendingPostplayPresentation;
    PlaybackRequest *_playbackRequest;
    double _savedBookmarkPosition;
    NFUIPlaybackAdvisoryController *_advisoryController;
    id <NFUIPostPlayControllerProtocol> _postPlayController;
    NFUIPlayerInterrupterViewController *_playerInterrupterViewController;
    NFUIPlaygraphPlayerViewModel *_playgraphViewModel;
    PostPlayViewModel *_postplayViewModel;
}

@property(nonatomic) _Bool pendingPostplayPresentation; // @synthesize pendingPostplayPresentation=_pendingPostplayPresentation;
@property(retain, nonatomic) PostPlayViewModel *postplayViewModel; // @synthesize postplayViewModel=_postplayViewModel;
@property(retain, nonatomic) NFUIPlaygraphPlayerViewModel *playgraphViewModel; // @synthesize playgraphViewModel=_playgraphViewModel;
@property(retain, nonatomic) NFUIPlayerInterrupterViewController *playerInterrupterViewController; // @synthesize playerInterrupterViewController=_playerInterrupterViewController;
@property(nonatomic) _Bool shouldShowPostPlayOverlay; // @synthesize shouldShowPostPlayOverlay=_shouldShowPostPlayOverlay;
@property(nonatomic) _Bool reachedRuntimeEnd; // @synthesize reachedRuntimeEnd=_reachedRuntimeEnd;
@property(retain, nonatomic) id <NFUIPostPlayControllerProtocol> postPlayController; // @synthesize postPlayController=_postPlayController;
@property(nonatomic) _Bool reachedLogicalEnd; // @synthesize reachedLogicalEnd=_reachedLogicalEnd;
@property(retain, nonatomic) NFUIPlaybackAdvisoryController *advisoryController; // @synthesize advisoryController=_advisoryController;
@property(nonatomic) double savedBookmarkPosition; // @synthesize savedBookmarkPosition=_savedBookmarkPosition;
- (void).cxx_destruct;
- (_Bool)supportsRemoteControlInteraction;
- (void)startNextPlayBackWithRequest:(id)arg1;
- (void)setPlayerViewControllerAsNeedingRefresh;
- (void)configurePlayerControlsWithPosition:(double)arg1 runtime:(double)arg2;
- (void)configureWithModel:(id)arg1;
- (void)configurePlayerForPlayer:(id)arg1 andSegment:(id)arg2;
@property(retain, nonatomic) PlaybackRequest *playbackRequest; // @synthesize playbackRequest=_playbackRequest;
- (_Bool)isBoundryChangeForSegment:(id)arg1;
- (void)prepareForReuseForNextSegment;
- (void)player:(id)arg1 didEndSegment:(id)arg2 completed:(_Bool)arg3;
- (void)validateSegment:(id)arg1 forPlayer:(id)arg2;
- (void)playgraphPlayer:(id)arg1 didStartSegment:(id)arg2 atStartTime:(double)arg3;
- (void)player:(id)arg1 willStartSegment:(id)arg2 atStartTime:(double)arg3;
- (void)player:(id)arg1 didPrepareSegmentForPlayback:(id)arg2 withError:(id)arg3;
- (void)postPlayController:(id)arg1 viewDidDisappear:(_Bool)arg2 withAction:(id)arg3;
- (void)presentPostplayExperienceForModel:(id)arg1;
- (void)initPostPlayExperience;
- (void)prefetchAndEnqueuePostplayExperience;
- (void)enqueueNextEpisode:(id)arg1 playbackEntities:(id)arg2;
- (void)playerController:(id)arg1 timeUpdate:(double)arg2;
- (void)updatePrePostplayWithCurrentTime:(double)arg1 playerController:(id)arg2;
- (_Bool)currentTime:(double)arg1 hasReachedOrLater:(double)arg2;
- (id)playgraphPlayer:(id)arg1 webVTTStyleURLStringForSegment:(id)arg2;
- (id)playgraphDelegate;
- (id)createPlayerConfigProvider;
- (id)createPlayerViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NFUIPlaylistPlayerViewProvider *playerViewController; // @dynamic playerViewController;
@property(readonly) Class superclass;

@end

