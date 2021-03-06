//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UICollectionView;

@interface AWEAIVideoClipSelectedAssetsView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    UICollectionView *_collectionView;
    NSMutableArray *_assetModelArray;
    CDUnknownBlockType _deleteAssetModelBlock;
    CDUnknownBlockType _changeOrderBlock;
    CDUnknownBlockType _touchAssetModelBlock;
    long long _draggingIndex;
    NSString *_draggingAssetType;
}

@property(copy, nonatomic) NSString *draggingAssetType; // @synthesize draggingAssetType=_draggingAssetType;
@property(nonatomic) long long draggingIndex; // @synthesize draggingIndex=_draggingIndex;
@property(copy, nonatomic) CDUnknownBlockType touchAssetModelBlock; // @synthesize touchAssetModelBlock=_touchAssetModelBlock;
@property(copy, nonatomic) CDUnknownBlockType changeOrderBlock; // @synthesize changeOrderBlock=_changeOrderBlock;
@property(copy, nonatomic) CDUnknownBlockType deleteAssetModelBlock; // @synthesize deleteAssetModelBlock=_deleteAssetModelBlock;
@property(retain, nonatomic) NSMutableArray *assetModelArray; // @synthesize assetModelArray=_assetModelArray;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)aweReorderableCollectionView:(id)arg1 layout:(id)arg2 didEndDraggingItemAtIndexPath:(id)arg3;
- (void)aweReorderableCollectionView:(id)arg1 layout:(id)arg2 willEndDraggingItemAtIndexPath:(id)arg3;
- (void)aweReorderableCollectionView:(id)arg1 layout:(id)arg2 didBeginDraggingItemAtIndexPath:(id)arg3;
- (void)aweReorderableCollectionView:(id)arg1 layout:(id)arg2 willBeginDraggingItemAtIndexPath:(id)arg3;
- (_Bool)aweReorderableCollectionView:(id)arg1 itemAtIndexPath:(id)arg2 canMoveToIndexPath:(id)arg3;
- (_Bool)aweReorderableCollectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)aweReorderableCollectionView:(id)arg1 itemAtIndexPath:(id)arg2 didMoveToIndexPath:(id)arg3;
- (void)aweReorderableCollectionView:(id)arg1 itemAtIndexPath:(id)arg2 willMoveToIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)onDelete:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

