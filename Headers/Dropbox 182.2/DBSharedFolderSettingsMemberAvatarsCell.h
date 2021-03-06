//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "DBLinkableStateObserverProtocol-Protocol.h"

@class DBUserAvatarView, DBUserState, NSArray, NSCache, NSString, UIStackView;

@interface DBSharedFolderSettingsMemberAvatarsCell : UITableViewCell <DBLinkableStateObserverProtocol>
{
    NSArray *_members;
    DBUserState *_userState;
    UIStackView *_avatarStackView;
    NSCache *_avatarViewCache;
    DBUserAvatarView *_inviteUsersAvatarView;
    DBUserAvatarView *_moreUsersAvatarView;
    _Bool _canInviteNewMembers;
    unsigned long long _avatarViewSize;
    double _avatarSize;
}

+ (double)cellHeightForLarge:(_Bool)arg1;
+ (unsigned long long)db_sizeForLarge:(_Bool)arg1;
- (void).cxx_destruct;
- (void)prepareToUnlink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)db_fetchImageForAvatarView:(id)arg1 withMembershipInfo:(id)arg2;
- (id)db_avatarViewForMembershipInfo:(id)arg1;
- (unsigned long long)db_avatarCapacity;
- (void)db_updateVisibleAvatars;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithMembers:(id)arg1 userState:(id)arg2 canInviteNewMembers:(_Bool)arg3 isTappable:(_Bool)arg4 large:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

