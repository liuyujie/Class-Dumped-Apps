//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCArroyoGroupsDataUpdater, SCArroyoGroupsStorage;
@protocol SCNativeMessagingSessionManaging;

@interface SCArroyoGroupDataFetcher : NSObject
{
    id <SCNativeMessagingSessionManaging> _nativeSessionManager;
    SCArroyoGroupsStorage *_arroyoGroupsStorage;
    SCArroyoGroupsDataUpdater *_arroyoGroupsDataUpdater;
}

- (void).cxx_destruct;
- (void)_handleFetchConversationSuccessWithConversation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)groupById:(id)arg1;
- (void)loadGroupsIntoMemoryWithCompletion:(CDUnknownBlockType)arg1 completionQueue:(id)arg2;
- (id)allGroups;
- (id)nativeConversationManager;
- (id)initWithNativeSessionManager:(id)arg1 lazySnapchattersDataFetcher:(id)arg2 lazySnapchatterUserInfoProvider:(id)arg3 lazySnapchatterPublicInfoFetcher:(id)arg4 groupsDataTracker:(id)arg5;

@end
