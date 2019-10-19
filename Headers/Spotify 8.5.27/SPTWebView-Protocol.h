//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, NSURLRequest;

@protocol SPTWebView <NSObject>
- (_Bool)spt_isProgressObservationSupported;
- (NSString *)spt_title;
- (NSURL *)spt_currentURL;
- (void)spt_goForward;
- (void)spt_goBack;
- (_Bool)spt_canGoForward;
- (_Bool)spt_canGoBack;
- (void)spt_loadRequest:(NSURLRequest *)arg1;
- (void)spt_setDelegate:(id)arg1;
@end
