//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIFormattedString, YTIThumbnailDetails;

@interface YTIVerboseUpgradeConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *forceBelowVersion; // @dynamic forceBelowVersion;
@property(nonatomic) _Bool hasForceBelowVersion; // @dynamic hasForceBelowVersion;
@property(nonatomic) _Bool hasPromptBelowVersion; // @dynamic hasPromptBelowVersion;
@property(nonatomic) _Bool hasPromptBody; // @dynamic hasPromptBody;
@property(nonatomic) _Bool hasPromptHoldoffSeconds; // @dynamic hasPromptHoldoffSeconds;
@property(nonatomic) _Bool hasPromptTimeOfDaySeconds; // @dynamic hasPromptTimeOfDaySeconds;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasUpdateDeadlineSeconds; // @dynamic hasUpdateDeadlineSeconds;
@property(nonatomic) _Bool hasUpgradeURL; // @dynamic hasUpgradeURL;
@property(retain, nonatomic) NSMutableArray *newVersionFeaturesArray; // @dynamic newVersionFeaturesArray;
@property(readonly, nonatomic) unsigned long long newVersionFeaturesArray_Count; // @dynamic newVersionFeaturesArray_Count;
@property(copy, nonatomic) NSString *promptBelowVersion; // @dynamic promptBelowVersion;
@property(retain, nonatomic) YTIFormattedString *promptBody; // @dynamic promptBody;
@property(nonatomic) long long promptHoldoffSeconds; // @dynamic promptHoldoffSeconds;
@property(nonatomic) long long promptTimeOfDaySeconds; // @dynamic promptTimeOfDaySeconds;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(nonatomic) long long updateDeadlineSeconds; // @dynamic updateDeadlineSeconds;
@property(copy, nonatomic) NSString *upgradeURL; // @dynamic upgradeURL;

@end
