//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface AWECompleteInfoUtil : NSObject
{
    _Bool _canShowCompleteInfoBubble;
    _Bool _isAvatarCompleted;
    NSNumber *_profileCompletionRate;
    NSString *_titleForProfileCompletionBubble;
}

+ (_Bool)completedInfoWithAvatarImage:(id)arg1 avatarUrl:(id)arg2;
+ (void)updateCompleteProfileInfoTipStringWithAvatarImage:(id)arg1 avatarUrl:(id)arg2;
+ (float)getCompletionPercentWithUser:(id)arg1 avatarImage:(id)arg2 avatarUrl:(id)arg3;
+ (void)markUserProfileEditNoticeViewAsShowed;
+ (_Bool)avatarCompletedWithImage:(id)arg1 avatarUrl:(id)arg2;
+ (_Bool)shouldShowInUserProfileWithAvatarImage:(id)arg1 avatarUrl:(id)arg2;
+ (id)completeInfoTipString;
+ (id)bindPhoneTipString;
+ (void)removeCompleteProfileView;
+ (void)removeBindPhoneView;
+ (void)enterProfileEditPage;
+ (void)enterBindPhonePage;
+ (void)setUserCompleteProfileDictWithShownKey:(_Bool)arg1 expireDate:(float)arg2;
+ (_Bool)shouldHidePhoneTipBar;
+ (_Bool)needUserCompleteProfile;
+ (_Bool)shouldShowCompleteProfileTip;
+ (_Bool)shouldShowBindPhoneTip;
+ (_Bool)shouldShowTipView;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *titleForProfileCompletionBubble; // @synthesize titleForProfileCompletionBubble=_titleForProfileCompletionBubble;
@property(copy, nonatomic) NSNumber *profileCompletionRate; // @synthesize profileCompletionRate=_profileCompletionRate;
@property(nonatomic) _Bool isAvatarCompleted; // @synthesize isAvatarCompleted=_isAvatarCompleted;
@property(nonatomic) _Bool canShowCompleteInfoBubble; // @synthesize canShowCompleteInfoBubble=_canShowCompleteInfoBubble;
- (void).cxx_destruct;

@end
