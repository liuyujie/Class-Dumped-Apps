//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionFiltering-Protocol.h"
#import "SPTCollectionSorting-Protocol.h"
#import "SPTPodcastEpisodeCellActionHandlerEpisodeProvider-Protocol.h"
#import "SPTPodcastEpisodeProgressPolling-Protocol.h"
#import "SPTPodcastEpisodeSectionFilterHeaderViewDelegate-Protocol.h"
#import "SPTPodcastViewModelSection-Protocol.h"

@class NSArray, NSCache, NSPredicate, NSSortDescriptor, NSString, NSURL, SPTPodcast, SPTPodcastEpisodeSectionFilterHeaderView, SPTPodcastFilterTableFooterView, SPTPodcastLogger, SPTPodcastSortingService, SPTTheme;
@protocol SPTCollectionLogger, SPTPodcastEpisodeCellActionTarget, SPTPodcastEpisodeCellConfigurator, SPTPodcastEpisodeViewModelSectionDelegate, SPTPodcastPlayer, SPTPodcastTestManager;

@interface SPTPodcastEpisodeSectionViewModel : NSObject <SPTPodcastEpisodeSectionFilterHeaderViewDelegate, SPTPodcastEpisodeCellActionHandlerEpisodeProvider, SPTPodcastViewModelSection, SPTCollectionSorting, SPTCollectionFiltering, SPTPodcastEpisodeProgressPolling>
{
    _Bool contentFiltered;
    _Bool _filtered;
    _Bool _currentFilterEqualToFilterOnLastUpdate;
    _Bool _ascendingSortOrder;
    double _headerHeight;
    id <SPTPodcastEpisodeCellActionTarget> _cellActionHandler;
    NSString *textFilter;
    NSCache *_progressCache;
    NSPredicate *_filterPredicate;
    NSSortDescriptor *_sortDescriptor;
    NSURL *_URL;
    id <SPTPodcastEpisodeViewModelSectionDelegate> _delegate;
    id <SPTPodcastEpisodeCellConfigurator> _cellConfigurator;
    SPTTheme *_theme;
    SPTPodcast *_podcast;
    id <SPTPodcastPlayer> _player;
    NSString *_filterOnLastUpdate;
    SPTPodcastEpisodeSectionFilterHeaderView *_filterHeaderView;
    id <SPTCollectionLogger> _collectionLogger;
    NSString *_appliedFilterText;
    NSString *_filter;
    SPTPodcastLogger *_logger;
    id <SPTPodcastTestManager> _podcastTestManager;
    SPTPodcastSortingService *_sortingService;
    unsigned long long _sortColumn;
    SPTPodcastFilterTableFooterView *_filterTableFooterView;
}

@property(retain, nonatomic) SPTPodcastFilterTableFooterView *filterTableFooterView; // @synthesize filterTableFooterView=_filterTableFooterView;
@property(nonatomic) _Bool ascendingSortOrder; // @synthesize ascendingSortOrder=_ascendingSortOrder;
@property(nonatomic) unsigned long long sortColumn; // @synthesize sortColumn=_sortColumn;
@property(nonatomic) __weak SPTPodcastSortingService *sortingService; // @synthesize sortingService=_sortingService;
@property(retain, nonatomic) id <SPTPodcastTestManager> podcastTestManager; // @synthesize podcastTestManager=_podcastTestManager;
@property(retain, nonatomic) SPTPodcastLogger *logger; // @synthesize logger=_logger;
@property(copy, nonatomic) NSString *filter; // @synthesize filter=_filter;
@property(copy, nonatomic) NSString *appliedFilterText; // @synthesize appliedFilterText=_appliedFilterText;
@property(retain, nonatomic) id <SPTCollectionLogger> collectionLogger; // @synthesize collectionLogger=_collectionLogger;
@property(retain, nonatomic) SPTPodcastEpisodeSectionFilterHeaderView *filterHeaderView; // @synthesize filterHeaderView=_filterHeaderView;
@property(copy, nonatomic) NSString *filterOnLastUpdate; // @synthesize filterOnLastUpdate=_filterOnLastUpdate;
@property(retain, nonatomic) id <SPTPodcastPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) SPTPodcast *podcast; // @synthesize podcast=_podcast;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTPodcastEpisodeCellConfigurator> cellConfigurator; // @synthesize cellConfigurator=_cellConfigurator;
@property(nonatomic) __weak id <SPTPodcastEpisodeViewModelSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic, getter=isCurrentFilterEqualToFilterOnLastUpdate) _Bool currentFilterEqualToFilterOnLastUpdate; // @synthesize currentFilterEqualToFilterOnLastUpdate=_currentFilterEqualToFilterOnLastUpdate;
@property(nonatomic, getter=isFiltered) _Bool filtered; // @synthesize filtered=_filtered;
@property(retain, nonatomic) NSSortDescriptor *sortDescriptor; // @synthesize sortDescriptor=_sortDescriptor;
@property(retain, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(readonly, nonatomic) NSCache *progressCache; // @synthesize progressCache=_progressCache;
@property(readonly, nonatomic, getter=isContentFiltered) _Bool contentFiltered; // @synthesize contentFiltered;
@property(copy, nonatomic) NSString *textFilter; // @synthesize textFilter;
@property(readonly, nonatomic) id <SPTPodcastEpisodeCellActionTarget> cellActionHandler; // @synthesize cellActionHandler=_cellActionHandler;
@property(readonly, nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
- (void).cxx_destruct;
- (void)headerView:(id)arg1 didSelectButton:(id)arg2;
- (void)resetFilters;
@property(nonatomic) _Bool showsOnlyOfflinedContent;
- (id)cellActionHandler:(id)arg1 allEpisodesInSection:(long long)arg2;
- (id)cellActionHandler:(id)arg1 episodeForIndexPath:(id)arg2;
- (void)setSortProperties;
- (void)setSortOrderWithColumn:(unsigned long long)arg1 ascending:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *supportedSortColumns;
- (void)updateProgressWithPlayer:(id)arg1;
- (id)cachedProgressForEpisode:(id)arg1;
- (void)updateCurrentProgress:(double)arg1 position:(double)arg2 duration:(double)arg3 forEpisode:(id)arg4;
- (long long)indexForEpisodeURL:(id)arg1;
- (long long)indexOfActiveEpisode;
- (void)filterAction:(id)arg1;
- (void)updateSortDescriptor;
- (void)updateFilterState;
- (void)loadAppliedFilter;
- (void)applyFilter:(id)arg1;
- (_Bool)isPlayingAnyEpisode;
- (_Bool)isActiveEpisodeAtIndex:(long long)arg1;
- (_Bool)isPlayingEpisodeAtIndex:(long long)arg1;
- (id)episodeForIndex:(long long)arg1;
- (id)filterDataWithTitle:(id)arg1 filter:(id)arg2 position:(long long)arg3;
- (id)additionalFilters;
- (long long)identifier;
- (void)updateWithPodcastPlayer:(id)arg1;
- (void)updateWithPodcast:(id)arg1;
- (id)header;
- (unsigned long long)numberOfRows;
- (id)initWithPlayer:(id)arg1 cellConfigurator:(id)arg2 cellActionHandlerFactory:(id)arg3 collectionLogger:(id)arg4 podcastLogger:(id)arg5 podcastTestManager:(id)arg6 podcastURL:(id)arg7 podcastSortingService:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
