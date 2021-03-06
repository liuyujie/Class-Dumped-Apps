//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UICollectionView, YTScrollOffsetRange, YTVisibilityPercentage;

@interface YTIndexPathVisibility : NSObject
{
    YTVisibilityPercentage *_visibilityPercentageThreshold;
    long long _sortPriority;
    long long _nthMostVisible;
    _Bool _shouldProcessThresholdVisibility;
    struct NSMutableDictionary *_selected;
    struct NSMutableDictionary *_selectedScrollOffsetRangeMap;
    struct NSMutableDictionary *_cutOffVisibilityMap;
    struct NSMutableDictionary *_notSelected;
    YTScrollOffsetRange *_selectionScrollOffsetRange;
    UICollectionView *_collectionView;
}

+ (id)sortedArray:(struct NSMutableDictionary *)arg1 priority:(long long)arg2;
+ (id)createWithIndexPaths:(id)arg1 visibilityPercentages:(id)arg2 shouldProcessThresholdVisibility:(_Bool)arg3;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) YTScrollOffsetRange *selectionScrollOffsetRange; // @synthesize selectionScrollOffsetRange=_selectionScrollOffsetRange;
@property(readonly, nonatomic) NSMutableDictionary *notSelected; // @synthesize notSelected=_notSelected;
@property(readonly, nonatomic) NSMutableDictionary *cutOffVisibilityMap; // @synthesize cutOffVisibilityMap=_cutOffVisibilityMap;
@property(readonly, nonatomic) NSMutableDictionary *selectedScrollOffsetRangeMap; // @synthesize selectedScrollOffsetRangeMap=_selectedScrollOffsetRangeMap;
@property(readonly, nonatomic) NSMutableDictionary *selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (id)thresholdAwareVisibilityPercentageForCell:(id)arg1;
- (double)cutOffForCellAtIndexPath:(id)arg1 nthMostVisible:(long long)arg2 vertically:(_Bool)arg3;
- (id)horizontalExtremeCellInSelectionWindowFromCell:(id)arg1 nthMostVisible:(long long)arg2 sortPriority:(long long)arg3;
- (id)verticalExtremeCellInSelectionWindowFromCell:(id)arg1 nthMostVisible:(long long)arg2 sortPriority:(long long)arg3;
- (struct CGRect)thresholdAwareVisibilityRectangleForCell:(id)arg1;
- (struct CGRect)absoluteVisibilityRectangleForCell:(id)arg1;
- (void)updateCutOffMap;
- (id)scrollFocusItemForCell:(id)arg1;
- (id)getScrollOffsetRangeForSelectedCell:(id)arg1 withVisibilityPercentage:(id)arg2;
- (void)updateSelectionScrollOffsetRangeWithOffsetWindowRange:(id)arg1;
- (void)updateSelectionScrollOffsetRangeInfo;
- (_Bool)isNotASeparator:(id)arg1;
- (_Bool)isScrollFocusableCell:(id)arg1 withTypes:(id)arg2;
- (_Bool)shouldSelect:(id)arg1 withTypes:(id)arg2;
- (void)updateWith:(long long)arg1 fromSortedArray:(id)arg2;
- (void)updateFromIndexPathVisibility:(id)arg1 withMinPercentageThreshold:(id)arg2;
- (id)indexPathVisibilityFromCollectionView:(id)arg1 forCellsWithTypes:(id)arg2 shouldProcessThresholdVisibility:(_Bool)arg3;
- (void)updateWithScrollFocusItemTypes:(id)arg1 visibilityThreshold:(id)arg2 sortPriority:(long long)arg3 nthMostVisible:(long long)arg4;
- (void)clear;
- (_Bool)isEmpty;
- (id)initWithCollectionView:(id)arg1 selectedVisibilityMap:(struct NSMutableDictionary *)arg2 shouldProcessThresholdVisibility:(_Bool)arg3;
- (id)initWithCollectionView:(id)arg1 shouldProcessThresholdVisibility:(_Bool)arg2;
- (id)initWithCollectionView:(id)arg1;

@end

