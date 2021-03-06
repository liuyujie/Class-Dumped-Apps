//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSMutableArray, NSString;
@protocol GAVItemSelectionDelegate;

@interface GAVItemSelectionVC : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    id <GAVItemSelectionDelegate> _delegate;
    NSArray *_items;
    NSMutableArray *_selectedItems;
    unsigned long long _itemSelectionMode;
}

@property(nonatomic) unsigned long long itemSelectionMode; // @synthesize itemSelectionMode=_itemSelectionMode;
@property(retain, nonatomic) NSMutableArray *selectedItems; // @synthesize selectedItems=_selectedItems;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <GAVItemSelectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)styleCustomOptionCell:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithItems:(id)arg1 itemSelectionMode:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

