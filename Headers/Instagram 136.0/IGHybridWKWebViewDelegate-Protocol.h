//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGHybridWKWebView, NSDictionary, NSString, NSURLRequest;

@protocol IGHybridWKWebViewDelegate <NSObject>
- (void)containedWebDidFinishFlowWithWebView:(IGHybridWKWebView *)arg1;
- (void)webView:(IGHybridWKWebView *)arg1 didReceiveServerRedirectForNavigation:(NSURLRequest *)arg2;
- (_Bool)shouldStartLoadRequestWithCommand:(NSString *)arg1 withParams:(NSDictionary *)arg2;
- (void)didSelectCloseHybridWebView:(IGHybridWKWebView *)arg1;
@end

