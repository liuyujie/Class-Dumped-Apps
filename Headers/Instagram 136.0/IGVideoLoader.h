//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IGVideoLoader : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_videoIdToSessions;
}

- (void).cxx_destruct;
- (void)_queuedCancelLoadingVideo:(id)arg1;
- (void)_queuedLoadVideo:(id)arg1 config:(id)arg2 videoProxy:(id)arg3 experimentSet:(id)arg4 launcherSetProvider:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)cancelLoadingVideo:(id)arg1;
- (void)loadVideo:(id)arg1 config:(id)arg2 videoProxy:(id)arg3 experimentSetProvider:(id)arg4 launcherSetProvider:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)dealloc;
- (id)init;

@end

