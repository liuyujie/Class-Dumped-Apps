//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class WAStickerListViewController;
@protocol WAStickerPackInfoProviding;

@protocol WAStickerListViewControllerDelegate
- (void)stickerListViewController:(WAStickerListViewController *)arg1 shouldShowEditButton:(_Bool)arg2;
- (void)stickerListViewController:(WAStickerListViewController *)arg1 shouldAllowScroll:(_Bool)arg2;
- (void)stickerListViewController:(WAStickerListViewController *)arg1 didTapDeleteStickerPack:(id <WAStickerPackInfoProviding>)arg2;
- (void)stickerListViewController:(WAStickerListViewController *)arg1 didSelectStickerPack:(id <WAStickerPackInfoProviding>)arg2;
@end
