//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class NSString, RCTBridge, SGRCTCallbackManager;
@protocol OS_dispatch_queue;

@interface SGRCTLocaleProvider : NSObject <RCTBridgeModule>
{
    SGRCTCallbackManager *_callbackManager;
}

+ (const struct RCTMethodInfo *)__rct_export__972;
+ (const struct RCTMethodInfo *)__rct_export__901;
+ (const struct RCTMethodInfo *)__rct_export__840;
+ (void)load;
+ (id)moduleName;
+ (id)sharedLocaleProvider;
@property(retain, nonatomic) SGRCTCallbackManager *callbackManager; // @synthesize callbackManager=_callbackManager;
- (void).cxx_destruct;
- (void)addLocaleCallback:(CDUnknownBlockType)arg1;
- (void)getMarket:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (void)getLocale:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (id)constantsToExport;
- (void)onAppLocaleChanged:(id)arg1;
- (void)setLocale:(id)arg1 market:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

