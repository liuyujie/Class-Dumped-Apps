//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTICommand, YTIFormattedString, YTIIcon;

@interface YTISettingReadOnlyItemRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *clientSettingDependenciesArray; // @dynamic clientSettingDependenciesArray;
@property(readonly, nonatomic) unsigned long long clientSettingDependenciesArray_Count; // @dynamic clientSettingDependenciesArray_Count;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasItemId; // @dynamic hasItemId;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasServiceEndpoint; // @dynamic hasServiceEndpoint;
@property(nonatomic) _Bool hasSettingStatusText; // @dynamic hasSettingStatusText;
@property(nonatomic) _Bool hasSettingStatusTextDisabled; // @dynamic hasSettingStatusTextDisabled;
@property(nonatomic) _Bool hasSettingStatusTextEnabled; // @dynamic hasSettingStatusTextEnabled;
@property(nonatomic) _Bool hasSummary; // @dynamic hasSummary;
@property(nonatomic) _Bool hasSummaryForPrompt; // @dynamic hasSummaryForPrompt;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(nonatomic) int itemId; // @dynamic itemId;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTICommand *serviceEndpoint; // @dynamic serviceEndpoint;
@property(retain, nonatomic) YTIFormattedString *settingStatusText; // @dynamic settingStatusText;
@property(retain, nonatomic) YTIFormattedString *settingStatusTextDisabled; // @dynamic settingStatusTextDisabled;
@property(retain, nonatomic) YTIFormattedString *settingStatusTextEnabled; // @dynamic settingStatusTextEnabled;
@property(retain, nonatomic) YTIFormattedString *summary; // @dynamic summary;
@property(retain, nonatomic) YTIFormattedString *summaryForPrompt; // @dynamic summaryForPrompt;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
