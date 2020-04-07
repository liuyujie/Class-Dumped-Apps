//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSearchRecentsViewModelBuilder-Protocol.h"

@class NSString, NSURL;
@protocol SPTSearchUBILocationSerializer;

@interface SPTSearchRecentsViewModelBuilderImplementation : NSObject <SPTSearchRecentsViewModelBuilder>
{
    _Bool _playTracksEnabled;
    _Bool _shouldRoundPodcastArtwork;
    _Bool _explicitContentPlaybackAllowed;
    _Bool _ageRestrictedContentPlaybackAllowed;
    NSString *_recentsCommandName;
    id <SPTSearchUBILocationSerializer> _ubiLocationSerializer;
    NSString *_featureID;
    NSURL *_pageURI;
    NSString *_referrerIdentifier;
}

@property(readonly, copy, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;
@property(readonly, copy, nonatomic) NSURL *pageURI; // @synthesize pageURI=_pageURI;
@property(readonly, copy, nonatomic) NSString *featureID; // @synthesize featureID=_featureID;
@property(readonly, nonatomic) id <SPTSearchUBILocationSerializer> ubiLocationSerializer; // @synthesize ubiLocationSerializer=_ubiLocationSerializer;
@property(readonly, nonatomic) _Bool ageRestrictedContentPlaybackAllowed; // @synthesize ageRestrictedContentPlaybackAllowed=_ageRestrictedContentPlaybackAllowed;
@property(readonly, nonatomic) _Bool explicitContentPlaybackAllowed; // @synthesize explicitContentPlaybackAllowed=_explicitContentPlaybackAllowed;
@property(readonly, nonatomic) _Bool shouldRoundPodcastArtwork; // @synthesize shouldRoundPodcastArtwork=_shouldRoundPodcastArtwork;
@property(readonly, nonatomic) _Bool playTracksEnabled; // @synthesize playTracksEnabled=_playTracksEnabled;
@property(readonly, copy, nonatomic) NSString *recentsCommandName; // @synthesize recentsCommandName=_recentsCommandName;
- (void).cxx_destruct;
- (_Bool)shouldMarkItemAsDisabled:(id)arg1;
- (_Bool)shouldMarkItemAsPlaying:(id)arg1 playingTrackURI:(id)arg2 playingAlbumURI:(id)arg3;
- (id)mainImageDataForItem:(id)arg1;
- (id)onTapCommandForItem:(id)arg1;
- (id)clearButtonUBILoggingData;
- (id)clearButton;
- (id)recentItemLoggingDataWithTargetURI:(id)arg1 position:(unsigned long long)arg2;
- (id)rowsForItems:(id)arg1 playingTrackURI:(id)arg2 playingAlbumURI:(id)arg3;
- (id)sectionHeader;
- (id)buildWithItems:(id)arg1 playingTrackURI:(id)arg2 playingAlbumURI:(id)arg3;
- (id)initWithRecentsCommandName:(id)arg1 playTracksEnabled:(_Bool)arg2 shouldRoundPodcastArtwork:(_Bool)arg3 explicitContentPlaybackAllowed:(_Bool)arg4 ageRestrictedContentPlaybackAllowed:(_Bool)arg5 ubiLocationSerializer:(id)arg6 featureID:(id)arg7 pageURI:(id)arg8 referrerIdentifier:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
