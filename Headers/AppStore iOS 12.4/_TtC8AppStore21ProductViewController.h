//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC8AppStore30UberedCollectionViewController.h"

#import "_TtP11AppStoreKit20ProductPresenterView_-Protocol.h"

@interface _TtC8AppStore21ProductViewController : _TtC8AppStore30UberedCollectionViewController <_TtP11AppStoreKit20ProductPresenterView_>
{
    // Error parsing type: , name: peekTopBufferSpace
    // Error parsing type: , name: objectGraph
    // Error parsing type: , name: shelfDataSource
    // Error parsing type: , name: presenter
    // Error parsing type: , name: appStateController
    // Error parsing type: , name: scrollViewDelegateCoordinator
    // Error parsing type: , name: actionRunner
    // Error parsing type: , name: productScrollCoordinator.storage
    // Error parsing type: , name: rightBarButtonItem
    // Error parsing type: , name: videoPlaybackCoordinator
    // Error parsing type: , name: videoViewManager
    // Error parsing type: , name: flowPreviewing
    // Error parsing type: , name: titleView
    // Error parsing type: , name: artworkTitleView
    // Error parsing type: , name: buyBarButtonItem
    // Error parsing type: , name: iconImage
    // Error parsing type: , name: iconImageSize
    // Error parsing type: , name: iconStyle
    // Error parsing type: , name: iconBackgroundColor
    // Error parsing type: , name: iconRecipients
    // Error parsing type: , name: impressionsCoordinator
    // Error parsing type: , name: pageLoadCompletionHandler
    // Error parsing type: , name: isPurchasedOnProductLoad
    // Error parsing type: , name: startedAsFlowPreview
}

- (void).cxx_destruct;
- (void)didCompletePurchase:(id)arg1;
- (void)didAskToBuy:(id)arg1;
- (void)flowPreviewingDidPop;
- (void)flowPreviewingDidEnterPeek;
@property(nonatomic) _Bool startedAsFlowPreview; // @synthesize startedAsFlowPreview;
- (void)scrollViewDidScroll:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 multiColumnMarginAt:(long long)arg3;
- (long long)collectionView:(id)arg1 layout:(id)arg2 multiColumnCountAtSection:(long long)arg3;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldLayoutManageMultiColumnAt:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForBackgroundAtSection:(long long)arg3;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldProvideBackgroundAtSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (void)reloadWithSection:(long long)arg1;
- (void)loadRemainingSectionsWithSectionsToInsert:(id)arg1 indexPathsToReload:(id)arg2 sectionsToMoveFrom:(id)arg3 sectionsToMoveTo:(id)arg4 dataSourceUpdates:(CDUnknownBlockType)arg5;
- (void)showWithShelfError:(id)arg1 for:(id)arg2;
- (void)prepareToDisplayWithTypes:(id)arg1;
- (void)reloadShelvesAt:(id)arg1;
- (void)reloadDataAt:(id)arg1;
- (void)refreshForAskToBuyRequestWithOfferAction:(id)arg1 offerDisplayProperties:(id)arg2 presenterOfferButtonModeIgnoringOverride:(long long)arg3;
- (void)processLockupWithAdamIdString:(id)arg1 iconArtwork:(id)arg2 offerAction:(id)arg3 offerDisplayProperties:(id)arg4 presenterOfferButtonModeIgnoringOverride:(long long)arg5 isComplete:(_Bool)arg6;
- (void)performWithAction:(id)arg1 sender:(id)arg2;
- (void)reloadData;
- (void)showWithUpdateError:(id)arg1;
- (void)hideLoading;
- (void)showLoading;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;

@end

