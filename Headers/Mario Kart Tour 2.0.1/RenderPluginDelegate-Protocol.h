//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LifeCycleListener-Protocol.h"
#import "NSObject-Protocol.h"

@protocol RenderPluginDelegate <LifeCycleListener, NSObject>
- (void)mainDisplayInited:(struct UnityDisplaySurfaceBase *)arg1;

@optional
- (void)onFrameResolved;
- (void)onAfterMainDisplaySurfaceRecreate;
- (void)onBeforeMainDisplaySurfaceRecreate:(struct RenderingSurfaceParams *)arg1;
@end

