//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGDirectInboxCellSelectCoordinatorDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectInboxCellSelectStateListener-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectInboxCellSwipeCoordinatorDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectMoveToFolderControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectOutgoingUpdateListener-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectPendingInboxListAdapterDataSourceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectPendingInboxThreadSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectPendingInboxThreadSortButtonSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGEmptyFeedViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGRefreshControlDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UIScrollViewDelegate-Protocol.h>

@class IGDirectCache, IGDirectInboxCellSelectAction, IGDirectInboxCellSelectCoordinator, IGDirectInboxCellSwipeCoordinator, IGDirectInboxPendingRequests, IGDirectInboxThreadCellContentTheme, IGDirectMoveToFolderController, IGDirectMutationManager, IGDirectNUXManager, IGDirectPendingInboxAnalyticsLogger, IGDirectPendingInboxConfig, IGDirectPendingInboxListAdapterDataSource, IGDirectPendingInboxService, IGDirectPendingInboxSubscriptionService, IGDirectPendingInboxThreadSortButtonSectionController, IGDirectPendingInboxUpdateWithReason, IGDirectTabletLayoutConfigurator, IGDirectThreadReportActionController, IGDirectThreadService, IGListAdapter, IGRefreshControl, IGTableLayoutSpec, IGUserSession, NSDictionary, NSString, UIBarButtonItem, UICollectionView;
@protocol IGDirectDataSubscriptionToken, IGDirectPendingInboxNUXDelegate;

@interface IGDirectPendingInboxViewController : IGViewController <IGDirectInboxCellSelectCoordinatorDataSource, IGDirectInboxCellSelectStateListener, IGDirectInboxCellSwipeCoordinatorDelegate, IGDirectMoveToFolderControllerDelegate, IGDirectOutgoingUpdateListener, IGDirectPendingInboxThreadSectionControllerDelegate, IGDirectPendingInboxThreadSortButtonSectionControllerDelegate, IGEmptyFeedViewDelegate, IGListAdapterDelegate, IGRefreshControlDelegate, UIScrollViewDelegate, IGDirectPendingInboxListAdapterDataSourceDelegate>
{
    IGUserSession *_userSession;
    IGDirectCache *_directCache;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGDirectThreadService *_threadService;
    IGDirectMutationManager *_mutationManager;
    IGRefreshControl *_refreshControl;
    IGDirectTabletLayoutConfigurator *_tabletConfigurator;
    IGDirectPendingInboxService *_service;
    IGDirectPendingInboxAnalyticsLogger *_analyticsLogger;
    IGDirectInboxCellSwipeCoordinator *_swipeCoordinator;
    IGDirectInboxCellSelectCoordinator *_selectCoordinator;
    _Bool _canShowUnseenMessageDots;
    IGTableLayoutSpec *_tableLayoutSpec;
    IGDirectInboxThreadCellContentTheme *_threadCellContentTheme;
    UIBarButtonItem *_editButton;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_spinnerButton;
    IGDirectPendingInboxThreadSortButtonSectionController *_threadSortButtonController;
    long long _selectedThreadSortType;
    IGDirectPendingInboxConfig *_pendingInboxConfig;
    _Bool _rankedRequestsEnabled;
    _Bool _initialThreadFetchCompleted;
    _Bool _loading;
    IGDirectNUXManager *_nuxManager;
    id <IGDirectPendingInboxNUXDelegate> _nuxDelegate;
    _Bool _messageSettingsFromNuxEnabled;
    IGDirectThreadReportActionController *_reportActionController;
    IGDirectMoveToFolderController *_moveToFolderController;
    NSDictionary *_pendingThreads;
    IGDirectInboxCellSelectAction *_deleteAllAction;
    IGDirectInboxCellSelectAction *_acceptAction;
    IGDirectInboxCellSelectAction *_deleteAction;
    IGDirectPendingInboxListAdapterDataSource *_listAdapterDataSource;
    IGDirectPendingInboxSubscriptionService *_pendingSubscriptionService;
    IGDirectInboxPendingRequests *_inboxPendingRequests;
    IGDirectPendingInboxUpdateWithReason *_latestPendingInboxUpdate;
    id <IGDirectDataSubscriptionToken> _pendingInboxSubscriptionToken;
    id <IGDirectDataSubscriptionToken> _pendingRequestsSubscriptionToken;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (_Bool)didCompleteInitialThreadFetchForDirectPendinginboxListDataSource:(id)arg1;
- (struct UIEdgeInsets)contentInsetsForDirectPendinginboxListDataSource:(id)arg1;
- (void)_updateStateFromSubscriptionsError:(id)arg1 fromFirstPage:(_Bool)arg2;
- (void)_updateStateFromSubscriptionsUpdate:(id)arg1;
- (void)_updateInboxPendingRequests:(id)arg1;
- (void)_subscribetoPendingInboxRequests;
- (void)_allowThreadWithFolderType:(long long)arg1 threadIds:(id)arg2;
- (void)_showFilterButtonNUXIfNecessary;
- (void)_updateNavigationUIState;
- (void)_didTapEditButton;
- (void)directMoveToFolderController:(id)arg1 didSelectFolderType:(long long)arg2 forThreadIds:(id)arg3;
- (void)directThreadOutgoingUpdate:(id)arg1 didFailWithError:(id)arg2;
- (void)directMessageOutgoingUpdate:(id)arg1 didFailWithError:(id)arg2;
- (void)directThreadOutgoingUpdateDidSucceed:(id)arg1;
- (void)directMessageOutgoingUpdateDidSucceed:(id)arg1;
- (void)refreshControlDidEndFinishLoadingAnimation:(id)arg1;
- (void)refreshControl:(id)arg1 didReleaseWithRefreshControlState:(long long)arg2;
- (struct CGRect)_sortOptionsViewControllerViewFrameForCell:(id)arg1;
- (void)threadSortButtonSectionControllerDidTap:(id)arg1 cell:(id)arg2;
- (long long)_threadSortType;
- (void)_reloadInboxThreads;
- (void)_setSelectedThreadSortOption:(long long)arg1 needsUpdate:(_Bool)arg2;
- (void)emptyViewPrimaryButtonWasTapped:(id)arg1;
- (void)inboxCellSwipeCoordinator:(id)arg1 wantToClosePeviouslyOpenedViewModel:(id)arg2;
- (void)_presentFolderOptionsForAllowWithThreadName:(id)arg1 selectedThreadIds:(id)arg2 selectedCount:(long long)arg3;
- (void)_presentAlertForAccept:(_Bool)arg1;
- (void)_presentConfirmationAlertForMultiDeleteWithDeleteAll:(_Bool)arg1 threadCount:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performDeleteOnThreads:(id)arg1;
- (void)_performDeleteOrShowAlertOnThreads:(id)arg1 isDeleteAll:(_Bool)arg2;
- (void)_deleteAllTapped:(id)arg1;
- (void)_deleteTapped:(id)arg1;
- (void)_acceptTapped:(id)arg1;
- (id)_allThreadIdsFromListAdapter;
- (id)actionsForCellSelectCoordinator:(id)arg1;
- (void)directInboxCellSelectStateDidUpdate:(long long)arg1;
- (void)_reloadPendingInboxAndFinishRefreshing:(_Bool)arg1 pendingThreads:(id)arg2 pendingRequests:(id)arg3 numberOfDaysFetched:(id)arg4 hasMoreThreads:(_Bool)arg5;
- (void)_reloadPendingInboxAndFinishRefreshing:(_Bool)arg1;
- (void)_reloadOrDismissPendingInbox;
- (long long)inboxThreadSectionControllerSelectedSortOption;
- (void)inboxThreadSectionController:(id)arg1 didRequestLeaveThreadWithId:(id)arg2;
- (void)inboxThreadSectionController:(id)arg1 didRequestBlockThreadWithId:(id)arg2;
- (void)inboxThreadSectionController:(id)arg1 didDeleteThreadWithId:(id)arg2;
- (void)inboxThreadSectionController:(id)arg1 didAllowThreadWithId:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)_logImpressionForCellViewModel:(id)arg1;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (struct UIEdgeInsets)preferredMinimizableInsets;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)_updateViewWithUpdatedContentInsets;
- (void)viewDidLayoutSubviews;
- (_Bool)prefersTabBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_fetchInboxDataFromFirstPage:(_Bool)arg1;
- (void)_fetchNextPage;
- (void)_fetchFirstPage;
- (id)_createDeleteAllAction;
- (id)_createDeleteAction;
- (id)_createAcceptAction;
- (void)_setupCollectionViewAndListAdapter;
- (id)title;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 canShowUnseenMessageDots:(_Bool)arg2 tableLayoutSpec:(id)arg3 threadCellContentTheme:(id)arg4 pendingInboxConfig:(id)arg5 nuxDelegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

