//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGAudienceBlacklistViewControllerDataSource-Protocol.h>

@class IGUserSession, NSOrderedSet, NSSet, NSString;

@interface IGAudienceStoryBlacklistManager : NSObject <IGAudienceBlacklistViewControllerDataSource>
{
    IGUserSession *_userSession;
    NSOrderedSet *_users;
    long long _entryPoint;
    _Bool _isPhoto;
    NSSet *_annexedUsers;
}

@property(nonatomic) _Bool isPhoto; // @synthesize isPhoto=_isPhoto;
@property(retain, nonatomic) NSSet *annexedUsers; // @synthesize annexedUsers=_annexedUsers;
- (void).cxx_destruct;
- (id)customUserSelectedSubtitleForAnnexedUserCount:(unsigned long long)arg1;
- (id)annexSubtitle;
- (id)annexTitle;
- (_Bool)shouldAnnexUserToOtherListSection:(id)arg1;
- (id)hiddenSectionTitleForUserCount:(unsigned long long)arg1;
- (void)setFacebookSharingEnabled:(_Bool)arg1;
- (_Bool)isFacebookSharingEnabled;
- (_Bool)canShareToFacebook;
- (void)setCanShareToFacebook:(_Bool)arg1;
- (void)updateUsers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)users;
- (_Bool)shouldBatchUpdate;
- (_Bool)canShowGlobalBlacklistEntrypoint;
- (id)initWithUserSession:(id)arg1 users:(id)arg2 entryPoint:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

