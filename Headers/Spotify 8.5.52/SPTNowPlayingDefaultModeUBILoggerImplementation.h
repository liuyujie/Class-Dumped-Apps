//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingArtistLabelUBILogger-Protocol.h"
#import "SPTNowPlayingCloseButtonUBILogger-Protocol.h"
#import "SPTNowPlayingConnectButtonUBILogger-Protocol.h"
#import "SPTNowPlayingContextMenuButtonUBILogger-Protocol.h"
#import "SPTNowPlayingCoverArtUBILogger-Protocol.h"
#import "SPTNowPlayingHeartButtonUBILogger-Protocol.h"
#import "SPTNowPlayingPlayButtonUBILogger-Protocol.h"
#import "SPTNowPlayingPlaybackSourceLabelUBILogger-Protocol.h"
#import "SPTNowPlayingProgressBarUBILogger-Protocol.h"
#import "SPTNowPlayingQueueButtonUBILogger-Protocol.h"
#import "SPTNowPlayingRepeatButtonUBILogger-Protocol.h"
#import "SPTNowPlayingScrollUBILogger-Protocol.h"
#import "SPTNowPlayingShuffleModeButtonUBILogger-Protocol.h"
#import "SPTNowPlayingSkipNextButtonUBILogger-Protocol.h"
#import "SPTNowPlayingSkipPreviousButtonUBILogger-Protocol.h"
#import "SPTNowPlayingTrackTitleLabelUBILogger-Protocol.h"
#import "SPTNowPlayingViewUBILogger-Protocol.h"

@class NSString;
@protocol SPTUBILogger, SPTUBIMobileNowPlayingViewDefaultEventFactory;

@interface SPTNowPlayingDefaultModeUBILoggerImplementation : NSObject <SPTNowPlayingViewUBILogger, SPTNowPlayingScrollUBILogger, SPTNowPlayingQueueButtonUBILogger, SPTNowPlayingConnectButtonUBILogger, SPTNowPlayingRepeatButtonUBILogger, SPTNowPlayingSkipNextButtonUBILogger, SPTNowPlayingPlayButtonUBILogger, SPTNowPlayingSkipPreviousButtonUBILogger, SPTNowPlayingShuffleModeButtonUBILogger, SPTNowPlayingProgressBarUBILogger, SPTNowPlayingHeartButtonUBILogger, SPTNowPlayingArtistLabelUBILogger, SPTNowPlayingTrackTitleLabelUBILogger, SPTNowPlayingCoverArtUBILogger, SPTNowPlayingContextMenuButtonUBILogger, SPTNowPlayingPlaybackSourceLabelUBILogger, SPTNowPlayingCloseButtonUBILogger>
{
    id <SPTUBILogger> _ubiLogger;
    id <SPTUBIMobileNowPlayingViewDefaultEventFactory> _eventFactory;
}

@property(readonly, nonatomic) id <SPTUBIMobileNowPlayingViewDefaultEventFactory> eventFactory; // @synthesize eventFactory=_eventFactory;
@property(readonly, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
- (void).cxx_destruct;
- (void)logCloseButtonTapped;
- (void)logRepeatButtonTappedWithMode:(unsigned long long)arg1;
- (void)logGoToPlayContextButtonTappedWithContextURI:(id)arg1;
- (void)logContextMenuButtonTapped;
- (void)logSwipeToNextWithPlayerState:(id)arg1;
- (void)logSwipeToPreviousWithPlayerState:(id)arg1;
- (void)logTapToToggleControls;
- (void)logGoToAlbum:(id)arg1;
- (void)logTapToOpenArtist:(id)arg1;
- (void)logHeartButtonTappedWithFeedbackButtonBehavior:(long long)arg1 playerState:(id)arg2;
- (void)logProgressSliderScrubbedWithPlayerState:(id)arg1;
- (void)logShuffleButtonTappedEnableShuffle:(_Bool)arg1;
- (void)logSkipToPreviousTappedWithPlayerState:(id)arg1;
- (void)logPlayButtonTappedWithBehavior:(long long)arg1 playerState:(id)arg2;
- (void)logSkipToNextTappedWithPlayerState:(id)arg1;
- (void)logOpenConnectButtonTapped;
- (void)logGoToQueueButtonTapped;
- (void)logScrollComponentImpressionWithIdentifier:(id)arg1 position:(unsigned long long)arg2;
- (void)logScrollPageImpression;
- (void)logScrollSwipeInteraction;
- (void)logSwipeToClose;
- (id)initWithUbiLogger:(id)arg1 eventFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
