//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXDataContext.h"

@class NSDate, NSString, XBXUser;

@interface SGCompareHeaderDataContext : XBXDataContext
{
    XBXUser *_primaryUser;
    XBXUser *_secondaryUser;
    NSString *_primaryGamerscore;
    NSString *_secondaryGamerscore;
    NSString *_primaryAchievementScore;
    NSString *_secondaryAchievementScore;
    NSString *_primaryLeaderboardStats;
    NSString *_secondaryLeaderboardStats;
    NSDate *_leaderboardDate;
    NSString *_leaderboardId;
}

+ (id)createWithPrimaryUserContext:(id)arg1 andSecondaryUserContext:(id)arg2;
@property(retain, nonatomic) NSString *leaderboardId; // @synthesize leaderboardId=_leaderboardId;
@property(retain, nonatomic) NSDate *leaderboardDate; // @synthesize leaderboardDate=_leaderboardDate;
@property(retain, nonatomic) NSString *secondaryLeaderboardStats; // @synthesize secondaryLeaderboardStats=_secondaryLeaderboardStats;
@property(retain, nonatomic) NSString *primaryLeaderboardStats; // @synthesize primaryLeaderboardStats=_primaryLeaderboardStats;
@property(retain, nonatomic) NSString *secondaryAchievementScore; // @synthesize secondaryAchievementScore=_secondaryAchievementScore;
@property(retain, nonatomic) NSString *primaryAchievementScore; // @synthesize primaryAchievementScore=_primaryAchievementScore;
@property(retain, nonatomic) NSString *secondaryGamerscore; // @synthesize secondaryGamerscore=_secondaryGamerscore;
@property(retain, nonatomic) NSString *primaryGamerscore; // @synthesize primaryGamerscore=_primaryGamerscore;
@property(retain, nonatomic) XBXUser *secondaryUser; // @synthesize secondaryUser=_secondaryUser;
@property(retain, nonatomic) XBXUser *primaryUser; // @synthesize primaryUser=_primaryUser;
- (void).cxx_destruct;
- (void)updatePrimaryUser:(id)arg1 andSecondaryUser:(id)arg2;

@end

