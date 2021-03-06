//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMAppMonetContext, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AMAdViewPoolManager : NSObject
{
    NSMutableDictionary *_adViewCollection;
    NSMutableDictionary *_adViewsByContext;
    NSMutableDictionary *_messageHandlers;
    NSMutableDictionary *_adViewsReadyState;
    NSMutableDictionary *_sAdViewRefCount;
    AMAppMonetContext *_appMonetContext;
    NSObject<OS_dispatch_queue> *_executionQueue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)updateReferenceCount:(id)arg1 refCount:(id)arg2;
- (void)syncWithBidManager:(id)arg1;
- (void)removeReference:(id)arg1;
- (void)removeBid:(id)arg1;
- (void)removeHelperFrom:(id)arg1;
- (void)cleanUpOrphanReference:(id)arg1;
- (_Bool)canPerformRemove:(long long)arg1 andRenderCount:(long long)arg2 andForce:(_Bool)arg3;
- (void)addReference:(id)arg1;
- (void)addedBidNotification:(id)arg1;
- (id)buildView:(id)arg1;
- (void)logState;
- (id)getState:(id)arg1;
- (id)getRenderCount:(id)arg1;
- (id)getAdViewByUuid:(id)arg1;
- (void)triggerNotification:(id)arg1 andMessage:(id)arg2 andArguments:(id)arg3;
- (id)requestWithBid:(id)arg1;
- (id)requestWithAdViewContext:(id)arg1;
- (_Bool)requestDestroy:(id)arg1;
- (_Bool)removeViewWithUUID:(id)arg1 andShouldAdViewBeDestroyed:(_Bool)arg2;
- (_Bool)removeAdView:(id)arg1 andShouldAdViewBeDestroyed:(_Bool)arg2 andShouldForceDestroy:(_Bool)arg3;
- (void)onAdViewReady:(id)arg1 andBlockCallback:(CDUnknownBlockType)arg2;
- (void)markAdViewAsReady:(id)arg1;
- (_Bool)isAdViewReady:(id)arg1;
- (id)getReferenceCount:(id)arg1;
- (id)getAdViewUrl:(id)arg1;
- (id)getCreatedAt:(id)arg1;
- (_Bool)executeInContext:(id)arg1 message:(id)arg2;
- (void)emit:(id)arg1 message:(id)arg2;
- (void)executeInContextVideo:(id)arg1 andMessage:(id)arg2;
- (_Bool)containsView:(id)arg1;
- (_Bool)canRelease:(id)arg1;
- (id)initWithAppMonetContext:(id)arg1 andExecutionQueue:(id)arg2;

@end

