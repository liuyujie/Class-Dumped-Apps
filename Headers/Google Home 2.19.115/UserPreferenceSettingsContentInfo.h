//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class UserPreferenceSettingsContentInfo_PreferenceId, UserPreferenceSettingsContentInfo_PreferenceState;

@interface UserPreferenceSettingsContentInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNewState; // @dynamic hasNewState;
@property(nonatomic) _Bool hasPreferenceCategoryValue; // @dynamic hasPreferenceCategoryValue;
@property(nonatomic) _Bool hasPreferenceId; // @dynamic hasPreferenceId;
@property(nonatomic) _Bool hasRenderTypeValue; // @dynamic hasRenderTypeValue;
@property(retain, nonatomic) UserPreferenceSettingsContentInfo_PreferenceState *newState; // @dynamic newState;
@property(nonatomic) int preferenceCategoryValue; // @dynamic preferenceCategoryValue;
@property(retain, nonatomic) UserPreferenceSettingsContentInfo_PreferenceId *preferenceId; // @dynamic preferenceId;
@property(nonatomic) int renderTypeValue; // @dynamic renderTypeValue;

@end

