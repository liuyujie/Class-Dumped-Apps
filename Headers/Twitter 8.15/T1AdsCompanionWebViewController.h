//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1WebViewController.h>

@interface T1AdsCompanionWebViewController : T1WebViewController
{
}

+ (id)_adsCompanionBaseUrlWithPath:(id)arg1 userIDNumber:(id)arg2;
- (void)_presentWebViewWithURLString:(id)arg1;
- (void)didFinishLoadingWithError:(id)arg1;
- (_Bool)shouldStartLoadWithRequest:(id)arg1 navigationType:(long long)arg2;
- (_Bool)_requestUrl:(id)arg1 hasPrefix:(id)arg2;
- (void)_accountsNavItemTapped;
- (id)rightBarButtonItem;
- (_Bool)shouldHideSecuredIcon;
- (_Bool)shouldHideShareSheetIcon;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 path:(id)arg2;
- (id)initWithAccount:(id)arg1 path:(id)arg2 userIDNumber:(id)arg3;

@end

