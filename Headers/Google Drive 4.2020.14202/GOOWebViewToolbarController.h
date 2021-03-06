//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GOOWebViewToolbar, UIView;
@protocol GOOWebView, GOOWebViewToolbarControllerDelegate;

@interface GOOWebViewToolbarController : NSObject
{
    UIView<GOOWebView> *_webView;
    GOOWebViewToolbar *_toolbar;
    _Bool _toolbarHidden;
    _Bool _webViewVisible;
    id <GOOWebViewToolbarControllerDelegate> _delegate;
    long long _toolbarStyle;
}

@property(nonatomic) long long toolbarStyle; // @synthesize toolbarStyle=_toolbarStyle;
@property(nonatomic, getter=isViewVisible) _Bool webViewVisible; // @synthesize webViewVisible=_webViewVisible;
@property(nonatomic) __weak id <GOOWebViewToolbarControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setToolbarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateToolbar:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutToolbarWithHidden:(_Bool)arg1;
- (id)webViewContainer;
- (void)didTapAction;
- (void)didTapReload;
- (void)didTapForwardButton;
- (void)didTapBackButton;
@property(nonatomic) _Bool showActionButton;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (id)initWithWebView:(id)arg1;

@end

