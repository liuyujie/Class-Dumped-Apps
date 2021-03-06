//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGFeedScrollViewListener-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGListSingleSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingFeedNetworkerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPermissionsProductSearchViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingSearchProductListResultSectionControllerDelegate-Protocol.h>

@class IGFeedScrollViewAnnouncer, IGListAdapter, IGShoppingFeedNetworker, IGShoppingPermissionsLogger, IGShoppingPermissionsNetworker, IGShoppingProductFeedDataModel, IGUser, IGUserSession, NSString, UICollectionView;
@protocol IGShoppingPermissionsApprovedAccountProductsViewControllerDelegate;

@interface IGShoppingPermissionsApprovedAccountProductsViewController : IGViewController <IGFeedScrollViewListener, IGListAdapterDataSource, IGListSingleSectionControllerDelegate, IGShoppingFeedNetworkerDelegate, IGShoppingPermissionsProductSearchViewControllerDelegate, IGShoppingSearchProductListResultSectionControllerDelegate>
{
    IGUserSession *_userSession;
    IGUser *_user;
    NSString *_priorModule;
    IGShoppingPermissionsNetworker *_permissionsNetworker;
    IGShoppingFeedNetworker *_networker;
    IGShoppingPermissionsLogger *_logger;
    IGShoppingProductFeedDataModel *_productFeed;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    id <IGShoppingPermissionsApprovedAccountProductsViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGShoppingPermissionsApprovedAccountProductsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_presentErrorToast:(id)arg1 errorResponse:(id)arg2;
- (void)_onFailedRemoveHighlightedProduct:(id)arg1 error:(id)arg2;
- (void)_onSuccessfulRemoveHighlightedProduct:(id)arg1;
- (void)_onFailedAddHighlightedProduct:(id)arg1 error:(id)arg2 errorResponse:(id)arg3;
- (void)_onSuccessfulAddHighlightedProduct:(id)arg1;
- (void)_removeHighlightedProduct:(id)arg1;
- (void)_requestFeedWithAction:(long long)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)shoppingPermissionsProductSearchViewControllerDidCancel:(id)arg1;
- (void)shoppingPermissionsProductSearchViewController:(id)arg1 didSelectProduct:(id)arg2;
- (void)sectionController:(id)arg1 didTapDecoratorForItemWithViewModel:(id)arg2;
- (void)sectionController:(id)arg1 didSelectItemWithViewModel:(id)arg2;
- (void)feedNetworker:(id)arg1 didLoadResponse:(id)arg2 requestConfiguration:(id)arg3;
- (void)feedNetworker:(id)arg1 didUpdateFetchState:(id)arg2;
- (void)didSelectSectionController:(id)arg1 withObject:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (_Bool)shouldConsiderSafeAreaForPreferredContentBottomInset;
- (_Bool)prefersTabBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 user:(id)arg2 priorModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

