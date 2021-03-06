//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WKScriptMessageHandler-Protocol.h"

@class NSString;

@interface IESLiveWebViewMonitor : NSObject <WKScriptMessageHandler>
{
}

+ (void)registerReportBlock:(CDUnknownBlockType)arg1;
+ (void)p_startWithClasses:(id)arg1 settings:(id)arg2 isLive:(_Bool)arg3;
+ (id)dicWithDefaultValue:(id)arg1;
+ (void)startWithClasses:(id)arg1 settings:(id)arg2;
+ (void)startWithClasses:(id)arg1 settingModel:(id)arg2;
+ (id)sharedMonitor;
+ (void)uninstallMonitorOnContextInfo:(id)arg1;
+ (void)installMonitorOnContextInfo:(id)arg1;
+ (id)slardarConfigForWebView:(id)arg1;
+ (id)emptyScriptForWebView:(id)arg1;
+ (id)scriptForTimingForWebView:(id)arg1;
+ (void)setStopUpdateBrowser:(_Bool)arg1;
+ (void)installMonitorOnWKWebView:(id)arg1;
+ (void)setClass:(Class)arg1 sel:(id)arg2 imp:(CDUnknownFunctionPointerType)arg3;
+ (id)hook_ORIGDic;
+ (void)stopLiveMonitor;
+ (void)startMonitorWithClasses:(id)arg1 setting:(id)arg2;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

