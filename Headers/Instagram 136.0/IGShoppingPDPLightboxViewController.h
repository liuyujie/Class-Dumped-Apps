//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGFeedScrollViewListener-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingSessionTracking-Protocol.h>
#import <InstagramAppCoreFramework/IGShopppingPDPLightboxFeedItemSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShopppingPDPLightboxProductImageSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShopppingPDPLightboxProductVideoSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShopppingPDPLightboxReelSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGZoomControllerLoadingDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGZoomHandlerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGZoomLoggerProtocol-Protocol.h>

@class IGFeedScrollViewAnnouncer, IGListAdapter, IGProductItem, IGSessionTracker, IGShoppingPDPLightboxLogger, IGTapButton, IGUserSession, IGZoomController, IGZoomViewPresenter, NSArray, NSString, UICollectionView, UIView;
@protocol IGShoppingPDPLightboxViewControllerDelegate;

@interface IGShoppingPDPLightboxViewController : IGViewController <IGFeedScrollViewListener, IGListAdapterDataSource, IGShopppingPDPLightboxFeedItemSectionControllerDelegate, IGShopppingPDPLightboxProductImageSectionControllerDelegate, IGShopppingPDPLightboxProductVideoSectionControllerDelegate, IGShopppingPDPLightboxReelSectionControllerDelegate, IGShoppingSessionTracking, IGZoomControllerLoadingDelegate, IGZoomHandlerDelegate, IGZoomLoggerProtocol>
{
    IGUserSession *_userSession;
    IGShoppingPDPLightboxLogger *_logger;
    NSString *_merchantId;
    NSString *_selectedItemIdentifier;
    double _networkLoadStartTime;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGTapButton *_closeButton;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    UIView *_mediaContainerView;
    NSArray *_viewModels;
    UIView *_zoomedViewParentView;
    long long _zoomedViewParentPosition;
    IGZoomController *_zoomController;
    IGZoomViewPresenter *_zoomViewPresenter;
    _Bool _contentHasLoaded;
    IGSessionTracker *_shoppingSessionTracker;
    NSString *_visibleItemIdentifier;
    IGProductItem *_productItem;
    id <IGShoppingPDPLightboxViewControllerDelegate> _delegate;
}

@property(nonatomic) _Bool contentHasLoaded; // @synthesize contentHasLoaded=_contentHasLoaded;
@property(nonatomic) __weak id <IGShoppingPDPLightboxViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGProductItem *productItem; // @synthesize productItem=_productItem;
@property(readonly, copy, nonatomic) NSString *visibleItemIdentifier; // @synthesize visibleItemIdentifier=_visibleItemIdentifier;
@property(readonly, nonatomic) IGSessionTracker *shoppingSessionTracker; // @synthesize shoppingSessionTracker=_shoppingSessionTracker;
- (void).cxx_destruct;
- (id)analyticsModule;
- (unsigned long long)_currentItemIndex;
- (_Bool)_visibleItemIsCreatorMedia;
- (id)_visibleMediaType;
- (id)_objectForIdentifier:(id)arg1;
- (void)_scrollToCellWithIdentifier:(id)arg1;
- (id)_cellForIdentifier:(id)arg1;
- (void)_didTapCloseButton;
- (id)videoPlayerForDismissAnimation;
- (void)fadeButtonsAndDeliverVideoPlayer:(id)arg1;
- (void)prepareForAnimatedTransitionWithCompletionBlock:(CDUnknownBlockType)arg1 isPresenting:(_Bool)arg2 isInteractiveGesture:(_Bool)arg3;
- (void)configureWithDataModel:(id)arg1 isContentFullyLoaded:(_Bool)arg2;
- (void)lightboxReelSectionController:(id)arg1 didBecomeVisibleWithViewModel:(id)arg2 isSubimpression:(_Bool)arg3;
- (void)lightboxReelSectionController:(id)arg1 didTapViewStoryWithMediaId:(id)arg2;
- (void)lightboxReelSectionController:(id)arg1 didTapUsernameAttributionOnMediaWithMediaId:(id)arg2;
- (void)lightboxFeedItemSectionController:(id)arg1 didBecomeVisibleWithViewModel:(id)arg2 isSubimpression:(_Bool)arg3;
- (void)lightboxProductVideoSectionController:(id)arg1 didBecomeVisibleWithViewModel:(id)arg2 isSubimpression:(_Bool)arg3;
- (void)lightboxProductImageSectionController:(id)arg1 didBecomeVisibleWithViewModel:(id)arg2 isSubimpression:(_Bool)arg3;
- (void)lightboxFeedItemSectionController:(id)arg1 didTapViewMediaWithMediaId:(id)arg2;
- (void)lightboxFeedItemSectionController:(id)arg1 didTapUsernameAttributionOnMediaWithMediaId:(id)arg2;
- (void)logZoomWillEndWithZoomController:(id)arg1 extras:(id)arg2;
- (void)logZoomDidEndWithZoomController:(id)arg1 extras:(id)arg2;
- (void)logZoomDidBeginWithZoomController:(id)arg1 extras:(id)arg2;
- (void)logZoomWillBeginWithZoomController:(id)arg1 extras:(id)arg2;
- (_Bool)isMediaViewLoaded;
- (void)didEndZoomWithZoomController:(id)arg1 zoomPresenter:(id)arg2;
- (void)didStartZoomWithZoomController:(id)arg1 zoomPresenter:(id)arg2;
- (void)willStartZoomWithZoomController:(id)arg1 zoomPresenter:(id)arg2;
- (id)zoomViewControllerForZoomController:(id)arg1 frame:(struct CGRect)arg2;
- (double)headerHeightForZoomController:(id)arg1;
- (id)presentingController;
- (_Bool)shouldLaunchZoomingWithZoomController:(id)arg1 gestureRecognizer:(id)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (_Bool)prefersNavigationBarHidden;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 productItem:(id)arg2 selectedItemIdentifier:(id)arg3 navigationAnalyticsContext:(id)arg4 feedItem:(id)arg5 shoppingSessionTracker:(id)arg6 checkoutSessionId:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

