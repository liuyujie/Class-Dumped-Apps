//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStoriesReadReceiptUpdateRequest : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_friendStoryReadReceipt_username;
    NSString *_friendStoryReadReceipt_storySnapServerId;
    _Bool _friendStoryReadReceipt_isFriendStory;
    _Bool _friendStoryReadReceipt_canSyncToServer;
    long long _friendStoryReadReceipt_action;
    NSString *_customStoryReadReceipt_publicationId;
    NSString *_customStoryReadReceipt_storySnapServerId;
    _Bool _customStoryReadReceipt_isFriendStory;
    _Bool _customStoryReadReceipt_canSyncToServer;
    long long _customStoryReadReceipt_action;
}

+ (id)friendStoryReadReceiptWithUsername:(id)arg1 storySnapServerId:(id)arg2 isFriendStory:(_Bool)arg3 canSyncToServer:(_Bool)arg4 action:(long long)arg5;
+ (id)customStoryReadReceiptWithPublicationId:(id)arg1 storySnapServerId:(id)arg2 isFriendStory:(_Bool)arg3 canSyncToServer:(_Bool)arg4 action:(long long)arg5;
- (void).cxx_destruct;
- (void)matchFriendStoryReadReceipt:(CDUnknownBlockType)arg1 customStoryReadReceipt:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
