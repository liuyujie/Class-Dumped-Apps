//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGShowreelNativeView, IGStoryShowreelNativeView, NSDictionary, NSString, UIView;

@protocol IGStoryShowreelNativeViewDelegate <NSObject>
- (void)storyShowreelNativeViewWillSeekAnimationToBeginning:(IGStoryShowreelNativeView *)arg1;
- (_Bool)storyShowreelNativeViewIsAnimationPlaying:(IGStoryShowreelNativeView *)arg1;
- (void)storyShowreelNativeView:(IGStoryShowreelNativeView *)arg1 willAnimationStopWithReason:(long long)arg2;
- (void)storyShowreelNativeView:(IGStoryShowreelNativeView *)arg1 willAnimationPauseWithReason:(long long)arg2;
- (void)storyShowreelNativeViewWillAnimationPlay:(IGStoryShowreelNativeView *)arg1;
- (void)storyShowreelNativeView:(IGStoryShowreelNativeView *)arg1 didTapNonTouchableRegionAtPoint:(struct CGPoint)arg2;
- (void)storyShowreelNativeView:(IGStoryShowreelNativeView *)arg1 didTapTouchableRegionAtPoint:(struct CGPoint)arg2 inView:(UIView *)arg3;
- (void)storyShowreelNativeView:(IGStoryShowreelNativeView *)arg1 didTapRetryButton:(IGShowreelNativeView *)arg2;
- (void)storyShowreelNativeView:(IGStoryShowreelNativeView *)arg1 didLayoutWithFeedItemPK:(NSString *)arg2 layoutExtra:(NSDictionary *)arg3;
@end

