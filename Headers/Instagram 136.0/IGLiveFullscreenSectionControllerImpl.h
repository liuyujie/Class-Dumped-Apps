//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGLiveFullscreenSectionControllerIntf-Protocol.h>

@class NSString;

@interface IGLiveFullscreenSectionControllerImpl : NSObject <IGLiveFullscreenSectionControllerIntf>
{
}

+ (_Bool)wasCurrentUserCobroadcasterForSectionController:(id)arg1;
+ (_Bool)isLiveFullscreenSectionController:(id)arg1;
+ (id)liveFullscreenSectionControllerWithUserSession:(id)arg1 storyLoggingContext:(id)arg2 entryPoint:(long long)arg3 viewerConfiguration:(id)arg4 adInsertionMediaViewTracker:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

