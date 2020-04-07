//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistIsTrackActive-Protocol.h"
#import "SPTFreeTierPlaylistItemsViewModel-Protocol.h"
#import "SPTFreeTierPlaylistModelObserver-Protocol.h"
#import "SPTFreeTierPlaylistPlayViewModel-Protocol.h"
#import "SPTFreeTierPlaylistSponsoredViewModelDelegate-Protocol.h"
#import "SPTFreeTierPlaylistViewModel-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSArray, NSAttributedString, NSDate, NSDictionary, NSString, NSURL, SPTFreeTierPlaylistLogger, SPTPlayOrigin, SPTPlayerState, UIColor;
@protocol SPTAlertInterface, SPTFreeTierEntityOfflineDelegate, SPTFreeTierPlaylistItemsViewModel, SPTFreeTierPlaylistModel, SPTFreeTierPlaylistPlayViewModel, SPTFreeTierPlaylistSortingFiltering, SPTFreeTierPlaylistSponsoredViewModel, SPTFreeTierPlaylistTestManager, SPTFreeTierPlaylistViewModelConfiguration, SPTFreeTierPlaylistViewModelDelegate, SPTLinkDispatcher, SPTOfflineModeState, SPTPlayer, SPTVISREFFlagsService, _TtP24ResponsiveShuffleFeature41SPTResponsiveShufflePlayInitiatedNotifier_;

@interface SPTFreeTierPlaylistViewModelImplementation : NSObject <SPTPlayerObserver, SPTFreeTierPlaylistSponsoredViewModelDelegate, SPTFreeTierPlaylistViewModel, SPTFreeTierPlaylistItemsViewModel, SPTFreeTierPlaylistPlayViewModel, SPTFreeTierPlaylistModelObserver, SPTFreeTierPlaylistIsTrackActive>
{
    _Bool _formatList;
    _Bool _ownedBySelf;
    _Bool _collaborative;
    _Bool _isPublished;
    _Bool _followed;
    _Bool _reportAbuseEnabled;
    _Bool _editModeEnabled;
    _Bool _shouldIncludeTrackOwner;
    _Bool _extendedContextMenuActionSet;
    _Bool _likeActionPlacedInsideHeader;
    _Bool _playButtonUsedForPlayback;
    _Bool _shuffleBadgeEducationAvailable;
    _Bool _containsOnlyEpisodes;
    _Bool _containsOnlyTracks;
    _Bool _contentSupportsRadio;
    _Bool _containsOnlyVideoEpisodes;
    _Bool _shouldShowPlayButton;
    _Bool _shouldShowPlaylistOwnerPage;
    _Bool _contextAwareEnabled;
    _Bool _playlistExtenderEnabled;
    NSURL *_playlistURL;
    id <SPTFreeTierPlaylistViewModelDelegate> _delegate;
    id <SPTFreeTierEntityOfflineDelegate> _offlineDelegate;
    id <SPTAlertInterface> alertInterface;
    id <SPTFreeTierPlaylistPlayViewModel> _playViewModel;
    id <SPTFreeTierPlaylistItemsViewModel> _itemsViewModel;
    id <SPTFreeTierPlaylistModel> _playlistModel;
    SPTPlayOrigin *_playOrigin;
    NSURL *_playlistImageURL;
    NSString *_playlistName;
    NSString *_creatorTitle;
    NSString *_playlistOwnerName;
    NSString *_playlistOwnerUsername;
    NSString *_numberOfLikesText;
    NSString *_madeForName;
    NSURL *_creatorImageURL;
    NSAttributedString *_creatorText;
    NSString *_metadataText;
    NSString *_metadataAccessibilityLabel;
    unsigned long long _offlineAvailability;
    unsigned long long _type;
    NSDate *_lastModifiedTime;
    double _totalDuration;
    NSString *_playlistDescription;
    NSString *_ownerUsername;
    NSURL *_ownerImageURL;
    NSURL *_ownerLink;
    NSDictionary *_formatListAttributes;
    NSString *_formatListSubtitle;
    NSURL *_formatListImageURL;
    UIColor *_formatListPrimaryColor;
    NSArray *_loadedTracks;
    NSArray *_recommendations;
    unsigned long long _totalNumberOfTracks;
    id <SPTPlayer> _player;
    SPTPlayerState *_lastPlayerState;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTFreeTierPlaylistSponsoredViewModel> _sponsoredViewModel;
    id <SPTOfflineModeState> _offlineModeState;
    SPTFreeTierPlaylistLogger *_logger;
    id <SPTFreeTierPlaylistTestManager> _testManager;
    id <SPTVISREFFlagsService> _visualRefreshService;
    id <SPTFreeTierPlaylistViewModelConfiguration> _viewModelConfiguration;
    id <_TtP24ResponsiveShuffleFeature41SPTResponsiveShufflePlayInitiatedNotifier_> _playInitiatedNotifier;
}

+ (_Bool)isRecommendationContext:(id)arg1 forPlaylist:(id)arg2;
@property(nonatomic) __weak id <_TtP24ResponsiveShuffleFeature41SPTResponsiveShufflePlayInitiatedNotifier_> playInitiatedNotifier; // @synthesize playInitiatedNotifier=_playInitiatedNotifier;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistViewModelConfiguration> viewModelConfiguration; // @synthesize viewModelConfiguration=_viewModelConfiguration;
@property(nonatomic) __weak id <SPTVISREFFlagsService> visualRefreshService; // @synthesize visualRefreshService=_visualRefreshService;
@property(nonatomic, getter=isPlaylistExtenderEnabled) _Bool playlistExtenderEnabled; // @synthesize playlistExtenderEnabled=_playlistExtenderEnabled;
@property(nonatomic, getter=isContextAwareEnabled) _Bool contextAwareEnabled; // @synthesize contextAwareEnabled=_contextAwareEnabled;
@property(retain, nonatomic) id <SPTFreeTierPlaylistTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTFreeTierPlaylistLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) __weak id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) id <SPTFreeTierPlaylistSponsoredViewModel> sponsoredViewModel; // @synthesize sponsoredViewModel=_sponsoredViewModel;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTPlayerState *lastPlayerState; // @synthesize lastPlayerState=_lastPlayerState;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) unsigned long long totalNumberOfTracks; // @synthesize totalNumberOfTracks=_totalNumberOfTracks;
@property(copy, nonatomic) NSArray *recommendations; // @synthesize recommendations=_recommendations;
@property(copy, nonatomic) NSArray *loadedTracks; // @synthesize loadedTracks=_loadedTracks;
@property(nonatomic) _Bool shouldShowPlaylistOwnerPage; // @synthesize shouldShowPlaylistOwnerPage=_shouldShowPlaylistOwnerPage;
@property(nonatomic) _Bool shouldShowPlayButton; // @synthesize shouldShowPlayButton=_shouldShowPlayButton;
@property(retain, nonatomic) UIColor *formatListPrimaryColor; // @synthesize formatListPrimaryColor=_formatListPrimaryColor;
@property(retain, nonatomic) NSURL *formatListImageURL; // @synthesize formatListImageURL=_formatListImageURL;
@property(copy, nonatomic) NSString *formatListSubtitle; // @synthesize formatListSubtitle=_formatListSubtitle;
@property(copy, nonatomic) NSDictionary *formatListAttributes; // @synthesize formatListAttributes=_formatListAttributes;
@property(retain, nonatomic) NSURL *ownerLink; // @synthesize ownerLink=_ownerLink;
@property(retain, nonatomic) NSURL *ownerImageURL; // @synthesize ownerImageURL=_ownerImageURL;
@property(copy, nonatomic) NSString *ownerUsername; // @synthesize ownerUsername=_ownerUsername;
@property(copy, nonatomic) NSString *playlistDescription; // @synthesize playlistDescription=_playlistDescription;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(retain, nonatomic) NSDate *lastModifiedTime; // @synthesize lastModifiedTime=_lastModifiedTime;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long offlineAvailability; // @synthesize offlineAvailability=_offlineAvailability;
@property(copy, nonatomic) NSString *metadataAccessibilityLabel; // @synthesize metadataAccessibilityLabel=_metadataAccessibilityLabel;
@property(copy, nonatomic) NSString *metadataText; // @synthesize metadataText=_metadataText;
@property(copy, nonatomic) NSAttributedString *creatorText; // @synthesize creatorText=_creatorText;
@property(retain, nonatomic) NSURL *creatorImageURL; // @synthesize creatorImageURL=_creatorImageURL;
@property(nonatomic) _Bool containsOnlyVideoEpisodes; // @synthesize containsOnlyVideoEpisodes=_containsOnlyVideoEpisodes;
@property(nonatomic) _Bool contentSupportsRadio; // @synthesize contentSupportsRadio=_contentSupportsRadio;
@property(nonatomic) _Bool containsOnlyTracks; // @synthesize containsOnlyTracks=_containsOnlyTracks;
@property(nonatomic) _Bool containsOnlyEpisodes; // @synthesize containsOnlyEpisodes=_containsOnlyEpisodes;
@property(nonatomic, getter=isShuffleBadgeEducationAvailable) _Bool shuffleBadgeEducationAvailable; // @synthesize shuffleBadgeEducationAvailable=_shuffleBadgeEducationAvailable;
@property(nonatomic, getter=isPlayButtonUsedForPlayback) _Bool playButtonUsedForPlayback; // @synthesize playButtonUsedForPlayback=_playButtonUsedForPlayback;
@property(nonatomic, getter=isLikeActionPlacedInsideHeader) _Bool likeActionPlacedInsideHeader; // @synthesize likeActionPlacedInsideHeader=_likeActionPlacedInsideHeader;
@property(nonatomic, getter=isExtendedContextMenuActionSet) _Bool extendedContextMenuActionSet; // @synthesize extendedContextMenuActionSet=_extendedContextMenuActionSet;
@property(nonatomic, getter=shouldIncludeTrackOwner) _Bool shouldIncludeTrackOwner; // @synthesize shouldIncludeTrackOwner=_shouldIncludeTrackOwner;
@property(nonatomic, getter=isEditModeEnabled) _Bool editModeEnabled; // @synthesize editModeEnabled=_editModeEnabled;
@property(nonatomic, getter=isReportAbuseEnabled) _Bool reportAbuseEnabled; // @synthesize reportAbuseEnabled=_reportAbuseEnabled;
@property(nonatomic, getter=isFollowed) _Bool followed; // @synthesize followed=_followed;
@property(nonatomic) _Bool isPublished; // @synthesize isPublished=_isPublished;
@property(nonatomic, getter=isCollaborative) _Bool collaborative; // @synthesize collaborative=_collaborative;
@property(nonatomic, getter=isOwnedBySelf) _Bool ownedBySelf; // @synthesize ownedBySelf=_ownedBySelf;
@property(copy, nonatomic) NSString *madeForName; // @synthesize madeForName=_madeForName;
@property(copy, nonatomic) NSString *numberOfLikesText; // @synthesize numberOfLikesText=_numberOfLikesText;
@property(copy, nonatomic) NSString *playlistOwnerUsername; // @synthesize playlistOwnerUsername=_playlistOwnerUsername;
@property(copy, nonatomic) NSString *playlistOwnerName; // @synthesize playlistOwnerName=_playlistOwnerName;
@property(copy, nonatomic) NSString *creatorTitle; // @synthesize creatorTitle=_creatorTitle;
@property(copy, nonatomic) NSString *playlistName; // @synthesize playlistName=_playlistName;
@property(retain, nonatomic) NSURL *playlistImageURL; // @synthesize playlistImageURL=_playlistImageURL;
@property(retain, nonatomic) SPTPlayOrigin *playOrigin; // @synthesize playOrigin=_playOrigin;
@property(retain, nonatomic) id <SPTFreeTierPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(nonatomic) __weak id <SPTFreeTierPlaylistItemsViewModel> itemsViewModel; // @synthesize itemsViewModel=_itemsViewModel;
@property(nonatomic) __weak id <SPTFreeTierPlaylistPlayViewModel> playViewModel; // @synthesize playViewModel=_playViewModel;
@property(readonly, nonatomic) id <SPTAlertInterface> alertInterface; // @synthesize alertInterface;
@property(nonatomic) __weak id <SPTFreeTierEntityOfflineDelegate> offlineDelegate; // @synthesize offlineDelegate=_offlineDelegate;
@property(nonatomic, getter=isFormatList) _Bool formatList; // @synthesize formatList=_formatList;
@property(nonatomic) __weak id <SPTFreeTierPlaylistViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long numberOfLoadedItems;
@property(readonly, nonatomic) unsigned long long numberOfItems;
- (id)trackEntityAtIndex:(long long)arg1;
- (id)trackViewModelAtIndex:(long long)arg1;
- (_Bool)isTrackActive:(id)arg1;
@property(readonly, nonatomic, getter=isPlaylistPlaying) _Bool playlistPlaying;
@property(readonly, nonatomic, getter=isPlayButtonPausingPlay) _Bool playButtonPausingPlay;
- (void)playTrackEntity:(id)arg1;
- (void)play;
- (void)setEntityOffline:(_Bool)arg1;
- (_Bool)isEntityOffline;
@property(copy, nonatomic) NSString *textFilter;
@property(readonly, nonatomic) _Bool showSearchBar;
- (void)playlistViewModelSponsorshipDidChange:(id)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (id)durationTextAccessibilityLabel;
- (id)durationText;
- (void)updateFollowCount:(unsigned long long)arg1;
- (void)freeTierPlaylistModel:(id)arg1 error:(id)arg2;
- (void)freeTierPlaylistModel:(id)arg1 initialFollowCount:(unsigned long long)arg2;
- (void)freeTierPlaylistModel:(id)arg1 playlistModelEntityDidChange:(id)arg2;
- (void)navigateToAllSongs;
- (void)playTrack:(id)arg1;
- (void)playTrackURL:(id)arg1;
- (_Bool)cellProviderSupportedForSection:(long long)arg1;
- (void)navigateToPlaylistOwnerPage;
- (void)loadMoreTracksIfApproachingEndOfLoadedTracks:(id)arg1;
- (_Bool)isApproachingEndIndexPath:(id)arg1 countOfItemsInSection:(long long)arg2;
- (unsigned long long)countOfItemsInSection:(unsigned long long)arg1;
- (void)toggleTrackLikeAtIndexPath:(id)arg1;
- (void)toggleTrackBanAtIndexPath:(id)arg1;
- (void)trackSelectedAtIndexPath:(id)arg1;
- (void)trackCloudSelectedAtSection:(unsigned long long)arg1;
- (void)itemSelectedAtIndexPath:(id)arg1;
- (id)cloudViewModelAtIndexPath:(id)arg1;
- (void)deletePlaylist;
- (id)sharingURLForTrackViewModelAtIndexPath:(id)arg1;
- (void)changeOffline:(_Bool)arg1;
- (void)showShuffleBadgeEducationDialog;
- (void)toggleFollow;
@property(readonly, nonatomic) long long followButtonType;
@property(readonly, nonatomic, getter=isOfflineSyncAvailable) _Bool offlineSyncAvailable;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistSortingFiltering> sortingFiltering;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)load;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (id)initWithPlaylistModel:(id)arg1 playOrigin:(id)arg2 player:(id)arg3 linkDispatcher:(id)arg4 sponsoredViewModel:(id)arg5 offlineModeState:(id)arg6 logger:(id)arg7 testManager:(id)arg8 contextAwareEnabled:(_Bool)arg9 visualRefreshService:(id)arg10 viewModelConfiguration:(id)arg11 playInitiatedNotifier:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
