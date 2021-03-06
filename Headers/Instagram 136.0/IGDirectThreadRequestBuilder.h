//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGDirectThreadRequestBuilder : NSObject
{
}

+ (id)approveParticipantRequestsForUsers:(id)arg1 threadId:(id)arg2 shouldShareJoinChatStory:(_Bool)arg3;
+ (id)denyParticipantRequestsFromUsers:(id)arg1 threadId:(id)arg2;
+ (id)removeAdminUserPks:(id)arg1 threadId:(id)arg2;
+ (id)addAdminUserPks:(id)arg1 threadId:(id)arg2;
+ (id)removeUserPks:(id)arg1 threadId:(id)arg2;
+ (id)addUserIds:(id)arg1 toVideoCallWithId:(id)arg2;
+ (id)addVideoCallWithId:(id)arg1 threadId:(id)arg2 deviceId:(id)arg3;
+ (id)markVisualMessageScreenshot:(id)arg1 threadId:(id)arg2;
+ (id)markVisualMessagesReplayed:(id)arg1 threadId:(id)arg2;
+ (id)visualMessagesForThreadWithId:(id)arg1 cursor:(id)arg2;
+ (id)messages:(id)arg1 threadId:(id)arg2;
+ (id)deleteMessageWithId:(id)arg1 threadId:(id)arg2 originalMessageClientContext:(id)arg3;
+ (id)addUsersWithIds:(id)arg1 threadId:(id)arg2;
+ (id)moveThreadToFolderType:(long long)arg1 threadId:(id)arg2;
+ (id)adminApprovalRequired:(_Bool)arg1 threadWithId:(id)arg2;
+ (id)terminateThreadWithId:(id)arg1;
+ (id)leaveThreadWithId:(id)arg1;
+ (id)renameThreadWithName:(id)arg1 threadId:(id)arg2;
+ (id)hideThreadWithId:(id)arg1;
+ (id)setThreadUnread:(_Bool)arg1 threadId:(id)arg2;
+ (id)setThreadFlagged:(_Bool)arg1 threadId:(id)arg2;
+ (id)setThreadVideoCallMuted:(_Bool)arg1 threadId:(id)arg2;
+ (id)setThreadMentionsMuted:(_Bool)arg1 threadId:(id)arg2;
+ (id)setThreadMuted:(_Bool)arg1 threadId:(id)arg2;
+ (id)createThreadWithUserIds:(id)arg1 name:(id)arg2 source:(id)arg3;
+ (id)threadWithFetchInput:(id)arg1;

@end

