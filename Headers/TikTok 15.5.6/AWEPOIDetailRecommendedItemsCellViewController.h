//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEPOIDetailCellViewController.h"

#import "AWEPhotosPreviewFadeInTransitionContextProvider-Protocol.h"
#import "AWEPhotosPreviewViewControllerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AWEPOIDetailEdgePanCollectionView, AWEPOIDetailResponse, AWEPOIDetailStore, NSArray, NSString, UILabel, UIView;

@interface AWEPOIDetailRecommendedItemsCellViewController : AWEPOIDetailCellViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWEPhotosPreviewFadeInTransitionContextProvider, AWEPhotosPreviewViewControllerDelegate>
{
    UILabel *_titleLabel;
    AWEPOIDetailEdgePanCollectionView *_collectionView;
    AWEPOIDetailResponse *_poiDetail;
    NSArray *_recommendedItems;
    UIView *_zoomStartView;
    AWEPOIDetailStore *_store;
}

+ (double)modernFeedCellPreferedHeightForModel:(id)arg1 width:(double)arg2;
@property(retain, nonatomic) AWEPOIDetailStore *store; // @synthesize store=_store;
@property(retain, nonatomic) UIView *zoomStartView; // @synthesize zoomStartView=_zoomStartView;
@property(retain, nonatomic) NSArray *recommendedItems; // @synthesize recommendedItems=_recommendedItems;
@property(retain, nonatomic) AWEPOIDetailResponse *poiDetail; // @synthesize poiDetail=_poiDetail;
@property(retain, nonatomic) AWEPOIDetailEdgePanCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)photosPreviewViewController:(id)arg1 didDisappearWithStayTime:(long long)arg2;
- (void)photosPreviewViewControllerDidAppear:(id)arg1;
- (void)userDidPerformOperationOnPhotosPreviewViewController:(id)arg1;
- (id)fadeInTransitionStartViewForOffset:(long long)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updateWithModel:(id)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

