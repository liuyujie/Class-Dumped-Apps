//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class UIView;
@protocol IGWatchAndMoreViewProtocol;

@protocol IGWatchAndMoreViewDelegate <NSObject>
- (void)watchAndMoreViewDidChangeBrowserLayoutState:(unsigned long long)arg1;
- (void)watchAndMoreViewDidScroll;
- (void)watchAndMoreViewContentViewDidNavigate:(unsigned long long)arg1 navigationAction:(unsigned long long)arg2;
- (void)watchAndMoreViewContentViewWillNavigate:(unsigned long long)arg1 navigationAction:(unsigned long long)arg2;
- (void)watchAndMoreView:(UIView<IGWatchAndMoreViewProtocol> *)arg1 setPlayVideo:(_Bool)arg2;
- (void)watchAndMoreViewDidCollapseVideoView;
- (void)watchAndMoreViewDidExpandVideoView;
- (void)watchAndMoreViewDidTapDismissVideoButton;
- (void)watchAndMoreViewDidSwipeDownVideo;
@end

