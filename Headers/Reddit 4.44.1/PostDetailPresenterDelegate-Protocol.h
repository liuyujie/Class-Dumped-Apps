//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class ListingNetworkSource, NSObject, NSString, NSUUID, PostDetailPresenter;
@protocol IGListDiffable;

@protocol PostDetailPresenterDelegate
- (void)postDetailPresenterDidTapComment:(PostDetailPresenter *)arg1;
- (void)presentTrendingToasterWithVariant:(long long)arg1;
- (void)presentAddCommentModal;
- (void)presentErrorToastMessage:(NSString *)arg1;
- (void)reloadListDataWithFixedContentOffset;
- (void)displayListingContent:(ListingNetworkSource *)arg1 correlationID:(NSUUID *)arg2 scrollToHeaderForSection:(unsigned long long)arg3;
- (void)postDetailPresenter:(PostDetailPresenter *)arg1 highlightItem:(NSObject<IGListDiffable> *)arg2;
- (void)postDetailPresenter:(PostDetailPresenter *)arg1 reloadDataAndScrollToItem:(NSObject<IGListDiffable> *)arg2 highlight:(_Bool)arg3;
@end
