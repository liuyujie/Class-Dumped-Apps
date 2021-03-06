//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink;

@interface KFFrameTimer : NSObject
{
    struct vector<__weak id<KFFrameListenerProtocol>, std::__1::allocator<__weak id<KFFrameListenerProtocol>>> _listeners;
    _Bool _cachedTimerRunningState;
    CADisplayLink *_displayLink;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_unsubscribeFromNotifications;
- (void)_subscribeToNotifications;
- (void)onApplicationWillEnterForground:(id)arg1;
- (void)onApplicationDidEnterBackground:(id)arg1;
- (void)displayLinkDidFire;
- (void)_stopTimer;
- (void)_startTimer;
- (void)_compactListeners;
- (void)_removeListener:(id)arg1;
- (void)_addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)dealloc;
- (id)init;

@end

