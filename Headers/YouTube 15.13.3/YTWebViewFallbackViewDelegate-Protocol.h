//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTWebViewFallbackView;

@protocol YTWebViewFallbackViewDelegate <NSObject>
- (void)webViewFallbackViewDidTapReload:(YTWebViewFallbackView *)arg1;
- (void)webViewFallbackViewDidTapForward:(YTWebViewFallbackView *)arg1;
- (void)webViewFallbackViewDidTapBack:(YTWebViewFallbackView *)arg1;
- (void)webViewFallbackViewDidChangePage:(YTWebViewFallbackView *)arg1;
@end

