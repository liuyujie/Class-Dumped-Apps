//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTWebViewFallbackViewDelegate-Protocol.h"

@class GIMMe, NSString, WKWebView, YTWebViewFallbackView;

@interface YTWebViewFallbackViewController : UIViewController <YTWebViewFallbackViewDelegate>
{
    YTWebViewFallbackView *_fallbackView;
    GIMMe *_gimme;
    WKWebView *_backingWebView;
}

@property(retain, nonatomic) WKWebView *backingWebView; // @synthesize backingWebView=_backingWebView;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)loadAuthenticatedURL:(id)arg1;
- (void)didTapRefresh;
- (void)didTapForward;
- (void)didTapBack;
- (void)webViewFallbackViewDidTapReload:(id)arg1;
- (void)webViewFallbackViewDidTapForward:(id)arg1;
- (void)webViewFallbackViewDidTapBack:(id)arg1;
- (void)webViewFallbackViewDidChangePage:(id)arg1;
- (void)loadWebviewEndpoint:(id)arg1;
- (void)loadURL:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (void)loadView;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

