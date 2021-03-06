//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXDataContext.h"

@class NSString, XBXAchievement;

@interface SGChallengeItemDataContext : XBXDataContext
{
    _Bool _nearExpiration;
    _Bool _showRewardIcon;
    _Bool _showGameTitle;
    NSString *_imageUrl;
    NSString *_promoImageUrl;
    NSString *_gameTitle;
    NSString *_challengeTitle;
    NSString *_challengeDescription;
    NSString *_timeRemainingTitle;
    NSString *_timeRemaining;
    XBXAchievement *_challengeData;
}

+ (id)createWithXBXAchievement:(id)arg1;
@property(retain, nonatomic) XBXAchievement *challengeData; // @synthesize challengeData=_challengeData;
@property(nonatomic) _Bool showGameTitle; // @synthesize showGameTitle=_showGameTitle;
@property(nonatomic) _Bool showRewardIcon; // @synthesize showRewardIcon=_showRewardIcon;
@property(nonatomic) _Bool nearExpiration; // @synthesize nearExpiration=_nearExpiration;
@property(retain, nonatomic) NSString *timeRemaining; // @synthesize timeRemaining=_timeRemaining;
@property(retain, nonatomic) NSString *timeRemainingTitle; // @synthesize timeRemainingTitle=_timeRemainingTitle;
@property(retain, nonatomic) NSString *challengeDescription; // @synthesize challengeDescription=_challengeDescription;
@property(retain, nonatomic) NSString *challengeTitle; // @synthesize challengeTitle=_challengeTitle;
@property(retain, nonatomic) NSString *gameTitle; // @synthesize gameTitle=_gameTitle;
@property(retain, nonatomic) NSString *promoImageUrl; // @synthesize promoImageUrl=_promoImageUrl;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;
- (void)updateRemainingTime;

@end

