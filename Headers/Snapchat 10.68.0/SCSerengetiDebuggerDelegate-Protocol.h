//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, NSURL;
@protocol SCSerengetiDebugger;

@protocol SCSerengetiDebuggerDelegate
- (void)serengetiDebuggerShouldReloadCurrentPage:(id <SCSerengetiDebugger>)arg1;
- (void)serengetiDebugger:(id <SCSerengetiDebugger>)arg1 shouldInjectJavascript:(NSString *)arg2;
- (void)serengetiDebugger:(id <SCSerengetiDebugger>)arg1 shouldLoadRemoteURL:(NSURL *)arg2;
- (void)serengetiDebugger:(id <SCSerengetiDebugger>)arg1 shouldLoadDeepLinkURL:(NSURL *)arg2;
@end
