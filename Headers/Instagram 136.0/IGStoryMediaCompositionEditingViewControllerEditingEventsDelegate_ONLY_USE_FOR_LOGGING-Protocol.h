//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGGLFFilter, IGStoryMediaCompositionEditingViewController, NSString, UIView;

@protocol IGStoryMediaCompositionEditingViewControllerEditingEventsDelegate_ONLY_USE_FOR_LOGGING <NSObject>
- (void)mediaEditingViewControllerDidToggleTextEffect_ONLY_USE_FOR_LOGGING:(IGStoryMediaCompositionEditingViewController *)arg1;
- (void)mediaEditingViewControllerDidChangeTextColor:(IGStoryMediaCompositionEditingViewController *)arg1 colorSource_ONLY_USE_FOR_LOGGING:(long long)arg2;
- (void)mediaEditingViewControllerDidExitTextEditingMode:(IGStoryMediaCompositionEditingViewController *)arg1 text_ONLY_USE_FOR_LOGGING:(NSString *)arg2;
- (void)mediaEditingViewControllerDidEnterTextEditingMode_ONLY_USE_FOR_LOGGING:(IGStoryMediaCompositionEditingViewController *)arg1 entryPoint:(long long)arg2;
- (void)mediaEditingViewController:(IGStoryMediaCompositionEditingViewController *)arg1 userTappedSticker_ONLY_USE_FOR_LOGGING:(UIView *)arg2;
- (void)mediaEditingViewController:(IGStoryMediaCompositionEditingViewController *)arg1 userRemovedStickerFromCurrentComposition_ONLY_USE_FOR_LOGGING:(UIView *)arg2;
- (void)mediaEditingViewController:(IGStoryMediaCompositionEditingViewController *)arg1 userAddedStickerToCurrentComposition_ONLY_USE_FOR_LOGGING:(UIView *)arg2;
- (void)mediaEditingViewController:(IGStoryMediaCompositionEditingViewController *)arg1 didApplyColorFilter_ONLY_USE_FOR_LOGGING:(IGGLFFilter *)arg2;
@end

