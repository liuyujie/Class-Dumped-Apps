//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableOrderedSet, NSThread;

@interface GVRRenderLoop : NSObject
{
    NSMutableOrderedSet *_targets;
    NSThread *_renderThread;
    CADisplayLink *_displayLink;
    double _lastFrameTimestamp;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)updateWithDisplayLink:(id)arg1;
- (void)threadMain;
- (void)internalShutdown;
- (void)internalRequestCallback:(CDUnknownBlockType)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)requestCallback:(CDUnknownBlockType)arg1;
- (double)nextFrameRenderTime;
- (void)removeTarget:(id)arg1;
- (void)addTarget:(id)arg1;
- (void)dealloc;
- (id)init;

@end
