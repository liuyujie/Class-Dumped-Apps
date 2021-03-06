//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ARITwoStateSettingValue, NSMutableArray;

@interface ARIPlayGamesServicesConsentChange : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNewAutoSignInValue; // @dynamic hasNewAutoSignInValue;
@property(nonatomic) _Bool hasNewBasicTermsConditionsValue; // @dynamic hasNewBasicTermsConditionsValue;
@property(nonatomic) _Bool hasNewDiscoverableFromGoogleValue; // @dynamic hasNewDiscoverableFromGoogleValue;
@property(nonatomic) _Bool hasNewGlobalFriendsListVisibility; // @dynamic hasNewGlobalFriendsListVisibility;
@property(nonatomic) _Bool hasNewPlayerStatsValue; // @dynamic hasNewPlayerStatsValue;
@property(nonatomic) _Bool hasNewProfileVisibilityV2Value; // @dynamic hasNewProfileVisibilityV2Value;
@property(nonatomic) _Bool hasNewProfileVisibilityValue; // @dynamic hasNewProfileVisibilityValue;
@property(retain, nonatomic) ARITwoStateSettingValue *newAutoSignInValue; // @dynamic newAutoSignInValue;
@property(retain, nonatomic) ARITwoStateSettingValue *newBasicTermsConditionsValue; // @dynamic newBasicTermsConditionsValue;
@property(retain, nonatomic) ARITwoStateSettingValue *newDiscoverableFromGoogleValue; // @dynamic newDiscoverableFromGoogleValue;
@property(nonatomic) int newGlobalFriendsListVisibility; // @dynamic newGlobalFriendsListVisibility;
@property(retain, nonatomic) ARITwoStateSettingValue *newPlayerStatsValue; // @dynamic newPlayerStatsValue;
@property(nonatomic) int newProfileVisibilityV2Value; // @dynamic newProfileVisibilityV2Value;
@property(retain, nonatomic) ARITwoStateSettingValue *newProfileVisibilityValue; // @dynamic newProfileVisibilityValue;
@property(retain, nonatomic) NSMutableArray *perGameConsentChangesArray; // @dynamic perGameConsentChangesArray;
@property(readonly, nonatomic) unsigned long long perGameConsentChangesArray_Count; // @dynamic perGameConsentChangesArray_Count;

@end

