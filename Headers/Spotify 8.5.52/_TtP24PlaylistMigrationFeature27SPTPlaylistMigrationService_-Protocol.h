//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSURL;
@protocol SPTFreeTierPlaylistCellProvider><SPTFreeTierPlaylistSectionDescription, SPTFreeTierPlaylistIsTrackActive, SPTFreeTierPlaylistItemsViewModel, SPTFreeTierPlaylistItemsViewModel><SPTFreeTierPlaylistModelObserver, SPTFreeTierPlaylistModelObserver><SPTFreeTierPlaylistSectionDescription;

@protocol _TtP24PlaylistMigrationFeature27SPTPlaylistMigrationService_ <SPTService>
- (id <SPTFreeTierPlaylistCellProvider><SPTFreeTierPlaylistSectionDescription>)provideSponsoredCellProviderWithPlaylistURL:(NSURL *)arg1;
- (id <SPTFreeTierPlaylistItemsViewModel><SPTFreeTierPlaylistModelObserver>)provideItemsViewModelWithPremiumOnlyFeatureEnabled:(_Bool)arg1 isTrackActive:(id <SPTFreeTierPlaylistIsTrackActive>)arg2;
- (id <SPTFreeTierPlaylistModelObserver><SPTFreeTierPlaylistSectionDescription>)provideTrackSectionWithItemsViewModel:(id <SPTFreeTierPlaylistItemsViewModel>)arg1;
@end

