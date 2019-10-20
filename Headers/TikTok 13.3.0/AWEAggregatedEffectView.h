//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSIndexPath, NSMutableSet, NSString, UICollectionView;
@protocol AWEAggregatedEffectViewDelegate;

@interface AWEAggregatedEffectView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool _needLoadingAnimationForSelectedCell;
    id <AWEAggregatedEffectViewDelegate> _delegate;
    NSDictionary *_trackingInfoDictionary;
    UICollectionView *_collectionView;
    NSIndexPath *_selectdIndexPath;
    NSArray *_storedArray;
    NSMutableSet *_shownCellSet;
}

@property(retain, nonatomic) NSMutableSet *shownCellSet; // @synthesize shownCellSet=_shownCellSet;
@property(nonatomic) _Bool needLoadingAnimationForSelectedCell; // @synthesize needLoadingAnimationForSelectedCell=_needLoadingAnimationForSelectedCell;
@property(retain, nonatomic) NSArray *storedArray; // @synthesize storedArray=_storedArray;
@property(retain, nonatomic) NSIndexPath *selectdIndexPath; // @synthesize selectdIndexPath=_selectdIndexPath;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) NSDictionary *trackingInfoDictionary; // @synthesize trackingInfoDictionary=_trackingInfoDictionary;
@property(nonatomic) __weak id <AWEAggregatedEffectViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addSubviews;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)cleanLoadingSelectedCell;
- (void)setNeedLoadingAnimationForSelectedCell;
- (id)nextEffectOfSelectedEffect;
- (void)updateAggregatedEffectArrayWith:(id)arg1;
- (void)updateSelectEffectWithEffect:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
