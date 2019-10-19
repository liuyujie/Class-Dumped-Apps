//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUIdentityFriendActionRequest-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface SOJUIdentityFriendActionRequest : NSObject <SOJUIdentityFriendActionRequest>
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_action;
    NSString *_friend;
    NSArray *_friends;
    NSString *_friendId;
    NSString *_addedBy;
    NSString *_identityProfilePage;
    NSNumber *_identityCellIndex;
    NSString *_display;
    NSNumber *_blockReasonId;
    NSString *_suggestionToken;
    NSString *_groupStoryId;
    NSDictionary *_suggestionTokenMap;
    NSString *_storySection;
    NSNumber *_isOfficial;
    NSString *_deletedBy;
    NSArray *_suggestedPublishers;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSArray *suggestedPublishers; // @synthesize suggestedPublishers=_suggestedPublishers;
@property(readonly, copy, nonatomic) NSString *deletedBy; // @synthesize deletedBy=_deletedBy;
@property(readonly, copy, nonatomic) NSNumber *isOfficial; // @synthesize isOfficial=_isOfficial;
@property(readonly, copy, nonatomic) NSString *storySection; // @synthesize storySection=_storySection;
@property(readonly, copy, nonatomic) NSDictionary *suggestionTokenMap; // @synthesize suggestionTokenMap=_suggestionTokenMap;
@property(readonly, copy, nonatomic) NSString *groupStoryId; // @synthesize groupStoryId=_groupStoryId;
@property(readonly, copy, nonatomic) NSString *suggestionToken; // @synthesize suggestionToken=_suggestionToken;
@property(readonly, copy, nonatomic) NSNumber *blockReasonId; // @synthesize blockReasonId=_blockReasonId;
@property(readonly, copy, nonatomic) NSString *display; // @synthesize display=_display;
@property(readonly, copy, nonatomic) NSNumber *identityCellIndex; // @synthesize identityCellIndex=_identityCellIndex;
@property(readonly, copy, nonatomic) NSString *identityProfilePage; // @synthesize identityProfilePage=_identityProfilePage;
@property(readonly, copy, nonatomic) NSString *addedBy; // @synthesize addedBy=_addedBy;
@property(readonly, copy, nonatomic) NSString *friendId; // @synthesize friendId=_friendId;
@property(readonly, copy, nonatomic) NSArray *friends; // @synthesize friends=_friends;
@property(readonly, copy, nonatomic) NSString *friend; // @synthesize friend=_friend;
@property(readonly, copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *reqToken; // @synthesize reqToken=_reqToken;
@property(readonly, copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTimestamp:(id)arg1 reqToken:(id)arg2 username:(id)arg3 action:(id)arg4 friend:(id)arg5 friends:(id)arg6 friendId:(id)arg7 addedBy:(id)arg8 identityProfilePage:(id)arg9 identityCellIndex:(id)arg10 display:(id)arg11 blockReasonId:(id)arg12 suggestionToken:(id)arg13 groupStoryId:(id)arg14 suggestionTokenMap:(id)arg15 storySection:(id)arg16 isOfficial:(id)arg17 deletedBy:(id)arg18 suggestedPublishers:(id)arg19;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)deletedByEnum;
- (_Bool)isOfficialValue;
- (int)blockReasonIdValue;
- (int)identityCellIndexValue;
- (long long)addedByEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
