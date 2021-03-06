//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class AWEAIVideoClipFooterViewController, AWEMusicModel, HTSVideoData;

@protocol AWEAIVideoClipFooterViewControllerDelegate <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
- (void)AIVideoClipFooterViewController:(AWEAIVideoClipFooterViewController *)arg1 didFinishAnimationOfTargetPanel:(unsigned long long)arg2;
- (void)AIVideoClipFooterViewController:(AWEAIVideoClipFooterViewController *)arg1 willShowAnimationOfTargetPanel:(unsigned long long)arg2;
- (double)AIVideoClipFooterViewControllerPanelAnimationDuration:(AWEAIVideoClipFooterViewController *)arg1;
- (void)AIVideoClipFooterViewControllerDidClickAdjustVideosButton:(AWEAIVideoClipFooterViewController *)arg1;
- (void)AIVideoClipFooterViewControllerDidClickAutoAdjustButton:(AWEAIVideoClipFooterViewController *)arg1;
- (void)AIVideoClipFooterViewController:(AWEAIVideoClipFooterViewController *)arg1 didSelectMusic:(AWEMusicModel *)arg2;
- (void)AIVideoClipFooterViewController:(AWEAIVideoClipFooterViewController *)arg1 reloadWithVideoData:(HTSVideoData *)arg2 needsReloadData:(_Bool)arg3;
- (void)AIVideoClipFooterViewController:(AWEAIVideoClipFooterViewController *)arg1 didChangePanel:(unsigned long long)arg2;
@end

