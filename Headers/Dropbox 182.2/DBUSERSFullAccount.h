//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/DBUSERSAccount.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBCOMMONRootInfo, DBUSERSCOMMONAccountType, DBUSERSFullTeam, DBUSERSQuotaInfo, DBUSERSReferralBonusInfo, DBUSERSSiblingUserInfo, NSNumber, NSString;

@interface DBUSERSFullAccount : DBUSERSAccount <DBSerializable, NSCopying>
{
    NSString *_country;
    NSString *_locale;
    NSString *_referralLink;
    DBUSERSFullTeam *_team;
    NSString *_teamMemberId;
    NSNumber *_isPaired;
    DBUSERSCOMMONAccountType *_accountType;
    DBCOMMONRootInfo *_rootInfo;
    NSNumber *_uid;
    NSString *_userName;
    NSString *_canShareFoldersOutsideTeam;
    NSNumber *_isDeferredPassword;
    NSNumber *_isDeferredPasswordSet;
    NSNumber *_hasUserAddedFiles;
    NSNumber *_hasEverLinkedDesktop;
    NSNumber *_videoUploadsEnabledDefault;
    NSNumber *_iosLastDeactivationUtcMs;
    NSNumber *_isPaid;
    NSNumber *_usesAppleRelayEmail;
    NSNumber *_pendingForcedMigration;
    DBUSERSReferralBonusInfo *_referralBonusInfo;
    DBUSERSSiblingUserInfo *_sibling;
    DBUSERSQuotaInfo *_visibilityQuotaInfo;
    DBUSERSQuotaInfo *_quotaInfo;
    NSString *_homePath;
    NSNumber *_isBusinessDomain;
    NSString *_role;
    NSNumber *_teamsMember;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) NSNumber *teamsMember; // @synthesize teamsMember=_teamsMember;
@property(readonly, copy, nonatomic) NSString *role; // @synthesize role=_role;
@property(readonly, nonatomic) NSNumber *isBusinessDomain; // @synthesize isBusinessDomain=_isBusinessDomain;
@property(readonly, copy, nonatomic) NSString *homePath; // @synthesize homePath=_homePath;
@property(readonly, nonatomic) DBUSERSQuotaInfo *quotaInfo; // @synthesize quotaInfo=_quotaInfo;
@property(readonly, nonatomic) DBUSERSQuotaInfo *visibilityQuotaInfo; // @synthesize visibilityQuotaInfo=_visibilityQuotaInfo;
@property(readonly, nonatomic) DBUSERSSiblingUserInfo *sibling; // @synthesize sibling=_sibling;
@property(readonly, nonatomic) DBUSERSReferralBonusInfo *referralBonusInfo; // @synthesize referralBonusInfo=_referralBonusInfo;
@property(readonly, nonatomic) NSNumber *pendingForcedMigration; // @synthesize pendingForcedMigration=_pendingForcedMigration;
@property(readonly, nonatomic) NSNumber *usesAppleRelayEmail; // @synthesize usesAppleRelayEmail=_usesAppleRelayEmail;
@property(readonly, nonatomic) NSNumber *isPaid; // @synthesize isPaid=_isPaid;
@property(readonly, nonatomic) NSNumber *iosLastDeactivationUtcMs; // @synthesize iosLastDeactivationUtcMs=_iosLastDeactivationUtcMs;
@property(readonly, nonatomic) NSNumber *videoUploadsEnabledDefault; // @synthesize videoUploadsEnabledDefault=_videoUploadsEnabledDefault;
@property(readonly, nonatomic) NSNumber *hasEverLinkedDesktop; // @synthesize hasEverLinkedDesktop=_hasEverLinkedDesktop;
@property(readonly, nonatomic) NSNumber *hasUserAddedFiles; // @synthesize hasUserAddedFiles=_hasUserAddedFiles;
@property(readonly, nonatomic) NSNumber *isDeferredPasswordSet; // @synthesize isDeferredPasswordSet=_isDeferredPasswordSet;
@property(readonly, nonatomic) NSNumber *isDeferredPassword; // @synthesize isDeferredPassword=_isDeferredPassword;
@property(readonly, copy, nonatomic) NSString *canShareFoldersOutsideTeam; // @synthesize canShareFoldersOutsideTeam=_canShareFoldersOutsideTeam;
@property(readonly, copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(readonly, nonatomic) NSNumber *uid; // @synthesize uid=_uid;
@property(readonly, nonatomic) DBCOMMONRootInfo *rootInfo; // @synthesize rootInfo=_rootInfo;
@property(readonly, nonatomic) DBUSERSCOMMONAccountType *accountType; // @synthesize accountType=_accountType;
@property(readonly, nonatomic) NSNumber *isPaired; // @synthesize isPaired=_isPaired;
@property(readonly, copy, nonatomic) NSString *teamMemberId; // @synthesize teamMemberId=_teamMemberId;
@property(readonly, nonatomic) DBUSERSFullTeam *team; // @synthesize team=_team;
@property(readonly, copy, nonatomic) NSString *referralLink; // @synthesize referralLink=_referralLink;
@property(readonly, copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(readonly, copy, nonatomic) NSString *country; // @synthesize country=_country;
- (void).cxx_destruct;
- (_Bool)isEqualToFullAccount:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithAccountId:(id)arg1 name:(id)arg2 email:(id)arg3 emailVerified:(id)arg4 disabled:(id)arg5 locale:(id)arg6 referralLink:(id)arg7 isPaired:(id)arg8 accountType:(id)arg9 rootInfo:(id)arg10 uid:(id)arg11 userName:(id)arg12 isDeferredPassword:(id)arg13 isDeferredPasswordSet:(id)arg14 hasUserAddedFiles:(id)arg15 hasEverLinkedDesktop:(id)arg16 videoUploadsEnabledDefault:(id)arg17 isPaid:(id)arg18 usesAppleRelayEmail:(id)arg19 pendingForcedMigration:(id)arg20 referralBonusInfo:(id)arg21 visibilityQuotaInfo:(id)arg22 quotaInfo:(id)arg23 isBusinessDomain:(id)arg24 role:(id)arg25 teamsMember:(id)arg26;
- (id)initWithAccountId:(id)arg1 name:(id)arg2 email:(id)arg3 emailVerified:(id)arg4 disabled:(id)arg5 locale:(id)arg6 referralLink:(id)arg7 isPaired:(id)arg8 accountType:(id)arg9 rootInfo:(id)arg10 uid:(id)arg11 userName:(id)arg12 isDeferredPassword:(id)arg13 isDeferredPasswordSet:(id)arg14 hasUserAddedFiles:(id)arg15 hasEverLinkedDesktop:(id)arg16 videoUploadsEnabledDefault:(id)arg17 isPaid:(id)arg18 usesAppleRelayEmail:(id)arg19 pendingForcedMigration:(id)arg20 referralBonusInfo:(id)arg21 visibilityQuotaInfo:(id)arg22 quotaInfo:(id)arg23 isBusinessDomain:(id)arg24 role:(id)arg25 teamsMember:(id)arg26 profilePhotoUrl:(id)arg27 country:(id)arg28 team:(id)arg29 teamMemberId:(id)arg30 canShareFoldersOutsideTeam:(id)arg31 iosLastDeactivationUtcMs:(id)arg32 sibling:(id)arg33 homePath:(id)arg34;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

