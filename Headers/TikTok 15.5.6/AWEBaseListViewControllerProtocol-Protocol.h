//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEBaseListFlowLayout, AWEBaseListSectionController, NSArray, UICollectionView;

@protocol AWEBaseListViewControllerProtocol <NSObject>
@property(readonly, nonatomic) UICollectionView *awe_baseCollectionView;
- (AWEBaseListSectionController *)awe_sectionControllerAtIndex:(long long)arg1;
- (void)awe_performUpdatesAnimated:(_Bool)arg1 completion:(void (^)(_Bool))arg2;
- (void)awe_reloadSectionViewModels:(NSArray *)arg1;
- (void)awe_reloadListWithCompletion:(void (^)(_Bool))arg1;
- (void)awe_reloadList;
- (void)awe_createCollectionViewWithLayout:(AWEBaseListFlowLayout *)arg1 block:(void (^)(UICollectionView *))arg2;
- (void)awe_createCollectionViewWithBlock:(void (^)(UICollectionView *))arg1;
@end

