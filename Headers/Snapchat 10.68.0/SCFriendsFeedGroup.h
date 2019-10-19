//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface SCFriendsFeedGroup : NSObject <NSCopying>
{
    _Bool _isStoryMuted;
    NSString *_groupName;
    NSArray *_participants;
    NSDictionary *_usernameToParticipantsMap;
    NSDictionary *_userIdToParticipantsMap;
}

@property(readonly, nonatomic) _Bool isStoryMuted; // @synthesize isStoryMuted=_isStoryMuted;
@property(readonly, copy, nonatomic) NSDictionary *userIdToParticipantsMap; // @synthesize userIdToParticipantsMap=_userIdToParticipantsMap;
@property(readonly, copy, nonatomic) NSDictionary *usernameToParticipantsMap; // @synthesize usernameToParticipantsMap=_usernameToParticipantsMap;
@property(readonly, copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithGroupName:(id)arg1 participants:(id)arg2 usernameToParticipantsMap:(id)arg3 userIdToParticipantsMap:(id)arg4 isStoryMuted:(_Bool)arg5;

@end
