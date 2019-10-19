//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTOmakaseDataLoaderDelegate-Protocol.h"

@class NSString, SPTAccessory, SPTOmakaseDataLoader;
@protocol SPTExternalIntegrationPlaybackController;

@interface SPTHearablesPlaybackController : NSObject <SPTOmakaseDataLoaderDelegate>
{
    _Bool _hasPlayed;
    id <SPTExternalIntegrationPlaybackController> _playbackController;
    SPTOmakaseDataLoader *_omakase;
    SPTAccessory *_accessory;
}

@property(retain, nonatomic) SPTAccessory *accessory; // @synthesize accessory=_accessory;
@property(nonatomic) _Bool hasPlayed; // @synthesize hasPlayed=_hasPlayed;
@property(readonly, nonatomic) SPTOmakaseDataLoader *omakase; // @synthesize omakase=_omakase;
@property(readonly, nonatomic) id <SPTExternalIntegrationPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
- (void).cxx_destruct;
- (void)omakaseDataLoader:(id)arg1 didSucceedWithPlaybackURI:(id)arg2;
- (void)omakaseDataLoader:(id)arg1 didFail:(id)arg2;
- (void)playNewRecommendedContent:(id)arg1;
- (void)playAllUserTracksShuffled;
- (void)play;
- (void)setCurrentAccessory:(id)arg1;
- (id)initWithPlaybackController:(id)arg1 andRecommendationEngine:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
