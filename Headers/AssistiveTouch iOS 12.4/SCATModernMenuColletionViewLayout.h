//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSDictionary, NSNumber, SCATModernMenuSheet, SCATStyleProvider;

@interface SCATModernMenuColletionViewLayout : UICollectionViewLayout
{
    NSDictionary *_layoutAttributeMap;
    NSDictionary *_stylePrimitives;
    NSNumber *_optimalNumberOfRows;
    NSNumber *_optimalItemsPerRow;
    double _menuMaxItemTitleHeight;
    double _menuTitleTopPadding;
    double _menuTitleExtraHeight;
    unsigned long long _maxItemsPerRow;
    unsigned long long _maxRows;
    struct CGSize _menuItemSize;
    struct CGSize _menuItemSpacing;
    struct UIEdgeInsets _additionalInset;
}

@property(nonatomic) unsigned long long maxRows; // @synthesize maxRows=_maxRows;
@property(nonatomic) unsigned long long maxItemsPerRow; // @synthesize maxItemsPerRow=_maxItemsPerRow;
@property(nonatomic) double menuTitleExtraHeight; // @synthesize menuTitleExtraHeight=_menuTitleExtraHeight;
@property(nonatomic) double menuTitleTopPadding; // @synthesize menuTitleTopPadding=_menuTitleTopPadding;
@property(nonatomic) double menuMaxItemTitleHeight; // @synthesize menuMaxItemTitleHeight=_menuMaxItemTitleHeight;
@property(nonatomic) struct CGSize menuItemSpacing; // @synthesize menuItemSpacing=_menuItemSpacing;
@property(nonatomic) struct CGSize menuItemSize; // @synthesize menuItemSize=_menuItemSize;
@property(readonly, nonatomic) struct UIEdgeInsets additionalInset; // @synthesize additionalInset=_additionalInset;
@property(retain, nonatomic) NSNumber *optimalItemsPerRow; // @synthesize optimalItemsPerRow=_optimalItemsPerRow;
@property(retain, nonatomic) NSNumber *optimalNumberOfRows; // @synthesize optimalNumberOfRows=_optimalNumberOfRows;
@property(retain, nonatomic) NSDictionary *stylePrimitives; // @synthesize stylePrimitives=_stylePrimitives;
- (void).cxx_destruct;
- (double)originXForItemAtRow:(unsigned long long)arg1 column:(long long)arg2;
- (struct CGRect)frameForMenuItemAtRow:(unsigned long long)arg1 column:(long long)arg2 titleTextHeightForRow:(double)arg3;
- (struct CGRect)frameForMenuItemTitleAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2 titleTextHeightForRow:(double)arg3 localTextHeight:(double)arg4;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
@property(readonly, nonatomic) NSDictionary *layoutAttributeMap; // @synthesize layoutAttributeMap=_layoutAttributeMap;
- (void)prepareLayout;
- (double)_requriedHieghtForTitleTextUpToRow:(unsigned long long)arg1 attributes:(id)arg2;
- (void)column:(unsigned long long *)arg1 row:(unsigned long long *)arg2 forItemAtIndex:(unsigned long long)arg3;
- (void)optimalNumberOfRows:(unsigned long long *)arg1 itemsPerRow:(unsigned long long *)arg2 forTotalNumberOfItems:(unsigned long long)arg3;
- (unsigned long long)maxVisibleItems;
@property(readonly, nonatomic) double maxItemTitleWidth;
- (double)menuItemHorizontalSpacingAfterItemAtIndex:(unsigned long long)arg1;
- (double)menuItemTitleSpacing;
@property(readonly, nonatomic) _Bool isDockStyle;
@property(readonly, nonatomic) _Bool isPopoverStyle;
@property(readonly, nonatomic) _Bool willIncludeTitleLabels;
@property(readonly, nonatomic) unsigned long long numberOfMenuItems;
@property(readonly, nonatomic) SCATModernMenuSheet *menuSheet;
@property(readonly, nonatomic) SCATStyleProvider *scatStyle;
- (id)layoutDelegate;
- (void)invalidateLayoutAttributeMap;
- (void)updateStylePrimitive:(id)arg1 forKey:(id)arg2 style:(unsigned long long)arg3;
- (void)_initStyleAttributes;
- (id)init;

@end
