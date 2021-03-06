//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGAnalyticsModule-Protocol.h>
#import <InstagramAppCoreFramework/IGGestureHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterUpdateListener-Protocol.h>
#import <InstagramAppCoreFramework/IGTVChannelDataSourceListener-Protocol.h>
#import <InstagramAppCoreFramework/IGTVChannelTitleDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVCreationFlowViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVGuideDataSourceListener-Protocol.h>
#import <InstagramAppCoreFramework/IGTVPendingUploadSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVVideoPreviewSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UIScrollViewDelegate-Protocol.h>

@class IGFeedItem, IGListAdapter, IGTVGuideActionsConfig, IGTVGuideChannelsListDataController, IGTVGuideEmptyLoadingView, IGTVGuideEmptyView, IGTVGuideLoadingObject, IGTVGuideView, IGTVViewerLoggingContext, IGUserSession, NSString;
@protocol IGTVChannelDataSourceType, IGTVGuideDataSource, IGTVGuideViewControllerDelegate;

@interface IGTVGuideViewController : UIViewController <IGListAdapterDataSource, IGListAdapterUpdateListener, IGTVChannelDataSourceListener, IGTVChannelTitleDelegate, IGTVCreationFlowViewControllerDelegate, IGTVGuideDataSourceListener, IGTVPendingUploadSectionControllerDelegate, IGTVVideoPreviewSectionControllerDelegate, UIScrollViewDelegate, IGGestureHandler, IGAnalyticsModule>
{
    IGUserSession *_userSession;
    IGTVGuideLoadingObject *_loadingObject;
    IGTVGuideEmptyLoadingView *_emptyLoadingView;
    IGTVGuideEmptyView *_emptyView;
    id <IGTVGuideDataSource> _tvGuideDataSource;
    IGTVGuideActionsConfig *_tvGuideActionsConfig;
    IGTVViewerLoggingContext *_loggingContext;
    IGListAdapter *_channelsListAdapter;
    IGListAdapter *_selectedChannelListAdapter;
    IGTVGuideChannelsListDataController *_dataController;
    IGTVGuideView *_tvGuideView;
    IGFeedItem *_nowPlayingItem;
    NSString *_nowPlayingChannelPK;
    long long _lastSelectedChannelIndex;
    _Bool _hasManuallyScrolledOrInitiallySetFocus;
    _Bool _needsScrollToNowPlaying;
    id <IGTVGuideViewControllerDelegate> _delegate;
    id <IGTVChannelDataSourceType> _selectedChannelDataSource;
    long long _selectedChannelIndex;
}

@property(nonatomic) long long selectedChannelIndex; // @synthesize selectedChannelIndex=_selectedChannelIndex;
@property(retain, nonatomic) id <IGTVChannelDataSourceType> selectedChannelDataSource; // @synthesize selectedChannelDataSource=_selectedChannelDataSource;
@property(nonatomic) __weak id <IGTVGuideViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)didSelectChannelTitle:(id)arg1;
- (id)_activeTVUploadItems;
- (void)pendingUploadSectionControllerDidRemoveUpload:(id)arg1;
- (void)didSelectVideoPreviewSectionController:(id)arg1;
- (void)channelDataSourceDidUpdate:(id)arg1 fromAction:(long long)arg2;
- (void)channelDataSourceWillUpdate:(id)arg1;
- (void)_loadMoreIfNeededForContentOffset:(struct CGPoint)arg1;
- (void)_loadMoreIfNeededForSelectedChannel;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)listAdapter:(id)arg1 didFinishUpdate:(long long)arg2 animated:(_Bool)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_dismissUploadFlow;
- (void)tvCreationFlowViewControllerDidShare:(id)arg1;
- (void)tvCreationFlowViewControllerDidCancel:(id)arg1;
- (void)_presentUploadFlow;
- (void)_retryButtonTapped;
- (void)_uploadButtonTapped;
- (void)_handlePullToRefresh;
- (void)_updateFromTVGuideDataSource:(id)arg1;
- (void)tvGuideDataSourceDidUpdate:(id)arg1;
- (_Bool)_refreshControlEnabled;
- (void)_scrollChannelIndexToVisible:(long long)arg1 animated:(_Bool)arg2;
- (void)_scrollToItem:(id)arg1;
- (void)tvGuideWillPresent;
- (long long)_nowPlayingIndex;
- (void)_scrollToNowPlayingIfNeeded;
- (void)_updateNowPlayingSelection;
- (void)updateNowPlayingItem:(id)arg1 inChannelWithPK:(id)arg2;
- (double)preferredHeightInWidth:(double)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 tvGuideDataSource:(id)arg2 tvGuideActionsConfig:(id)arg3 loggingContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

