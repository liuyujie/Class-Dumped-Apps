//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveQiActivityService-Protocol.h"

@class NSString;

@interface AWELiveQiActivityServiceImpl : NSObject <IESLiveQiActivityService>
{
}

- (id)qiActivityPlayerStartNotificationName;
- (id)qiActivityStudioShowNotificationName;
- (void)suspendQiSDKAlert:(_Bool)arg1;
- (void)updateLiveWatchingTime:(long long)arg1 shouldShowToast:(_Bool)arg2;
- (void)updateLiveWatchingTime:(long long)arg1;
- (_Bool)showKoiPacketInLiveRoomWithDict:(id)arg1 shootAction:(CDUnknownBlockType)arg2 dismissBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

