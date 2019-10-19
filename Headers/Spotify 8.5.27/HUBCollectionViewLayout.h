//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableDictionary;
@protocol HUBComponentLayoutManager;

@interface HUBCollectionViewLayout : UICollectionViewLayout
{
    _Bool _adjustsTargetContentOffset;
    id <HUBComponentLayoutManager> _componentLayoutManager;
    NSMutableDictionary *_layoutAttributesByIndexPath;
    struct CGSize _contentSize;
}

@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) NSMutableDictionary *layoutAttributesByIndexPath; // @synthesize layoutAttributesByIndexPath=_layoutAttributesByIndexPath;
@property(readonly, nonatomic) id <HUBComponentLayoutManager> componentLayoutManager; // @synthesize componentLayoutManager=_componentLayoutManager;
@property(nonatomic) _Bool adjustsTargetContentOffset; // @synthesize adjustsTargetContentOffset=_adjustsTargetContentOffset;
- (void).cxx_destruct;
- (id)layoutTraitsForComponentAtIndexPath:(id)arg1;
- (struct CGSize)preferredSizeForComponentAtIndexPath:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (void)updateLayoutAttributesForComponentsTraits:(id)arg1 horizontalAdjustment:(double)arg2 lastComponentIndex:(long long)arg3;
- (void)updateLayoutAttributesForComponentsTraitsIfNeeded:(id)arg1 lastComponentIndex:(long long)arg2 firstComponentX:(double)arg3 lastComponentX:(double)arg4 rowWidth:(double)arg5;
- (struct CGSize)contentSizeForContentHeight:(double)arg1 bottomRowComponentTraits:(id)arg2 minimumBottomMargin:(double)arg3 collectionViewSize:(struct CGSize)arg4;
- (void)registerComponentViewFrame:(struct CGRect)arg1 forIndexPath:(id)arg2;
- (struct CGRect)horizontallyAdjustComponentViewFrame:(struct CGRect)arg1 forCollectionViewSize:(struct CGSize)arg2 margins:(struct UIEdgeInsets)arg3;
- (struct UIEdgeInsets)containerEdgeInsetsForComponentWithLayoutTraits:(id)arg1 collectionViewSize:(struct CGSize)arg2;
- (double)rightMarginForComponontWithLayoutTraits:(id)arg1 containerEdgeInsets:(struct UIEdgeInsets)arg2;
- (double)leftMarginForComponontWithLayoutTraits:(id)arg1 containerEdgeInsets:(struct UIEdgeInsets)arg2;
- (struct UIEdgeInsets)defaultMarginsForLayoutTraits:(id)arg1 isInTopRow:(_Bool)arg2 layoutTraitsOnCurrentRow:(id)arg3 containerEdgeInsets:(struct UIEdgeInsets)arg4;
- (struct CGSize)collectionViewContentSize;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (void)prepareLayout;
- (id)initWithComponentLayoutManager:(id)arg1;

@end
