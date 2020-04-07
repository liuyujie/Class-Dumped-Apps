//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPersonalisedSetsService-Protocol.h"

@class NSArray, NSString, SPTAllocationContext;
@protocol SPContextMenuFeature, SPTCollectionPlatformService, SPTCollectionSortingEntityManager, SPTContainerService, SPTCoreService, SPTExplicitContentService, SPTFeatureFlaggingService, SPTFeedbackService, SPTFormatListPlatformService, SPTGLUEService, SPTNetworkService, SPTPSXTestManager, SPTPerformanceMetricsService, SPTPersonalisedSetsNowPlayingFeedbackManagerFactory, SPTPlayerFeature, SPTPlaylistPlatformService, SPTSessionService, SPTShelfService, _TtP24EncoreIntegrationFeature27SPTEncoreIntegrationService_;

@interface SPTPersonalisedSetsServiceImplementation : NSObject <SPTPersonalisedSetsService>
{
    id <SPTContainerService> _containerService;
    id <SPTCoreService> _coreService;
    id <SPTPlayerFeature> _playerService;
    id <SPTSessionService> _clientSessionService;
    id <SPTNetworkService> _networkService;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTFeatureFlaggingService> _featureFlagService;
    id <SPTFormatListPlatformService> _formatListPlatformService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTShelfService> _shelfService;
    id <SPTGLUEService> _glueService;
    id <SPTFeedbackService> _feedbackService;
    id <SPTExplicitContentService> _explicitContentService;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
    id <_TtP24EncoreIntegrationFeature27SPTEncoreIntegrationService_> _encoreService;
    id <SPTCollectionSortingEntityManager> _personalisedSetSortingEntityManager;
    NSArray *_formatListExpressions;
    id <SPTPSXTestManager> _testManager;
    id <SPTPersonalisedSetsNowPlayingFeedbackManagerFactory> _feedbackManagerFactory;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTPersonalisedSetsNowPlayingFeedbackManagerFactory> feedbackManagerFactory; // @synthesize feedbackManagerFactory=_feedbackManagerFactory;
@property(retain, nonatomic) id <SPTPSXTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) NSArray *formatListExpressions; // @synthesize formatListExpressions=_formatListExpressions;
@property(retain, nonatomic) id <SPTCollectionSortingEntityManager> personalisedSetSortingEntityManager; // @synthesize personalisedSetSortingEntityManager=_personalisedSetSortingEntityManager;
@property(nonatomic) __weak id <_TtP24EncoreIntegrationFeature27SPTEncoreIntegrationService_> encoreService; // @synthesize encoreService=_encoreService;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(nonatomic) __weak id <SPTFeedbackService> feedbackService; // @synthesize feedbackService=_feedbackService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTShelfService> shelfService; // @synthesize shelfService=_shelfService;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTFormatListPlatformService> formatListPlatformService; // @synthesize formatListPlatformService=_formatListPlatformService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlagService; // @synthesize featureFlagService=_featureFlagService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)provideFormatListExpressions;
- (id)provideSortMenuButton;
- (id)provideFeedbackManagerFactory;
- (id)provideTestManager;
- (id)providePersonalisedSetViewControllerForURL:(id)arg1 referrerIdentifier:(id)arg2;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
