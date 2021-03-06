//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, YTIAccessibilitySupportedDatas, YTICommand, YTIFormattedString, YTIThumbnailDetails;

@interface YTIUnpluggedChipRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long chipId; // @dynamic chipId;
@property(nonatomic) _Bool hasChipId; // @dynamic hasChipId;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasOnSelectCommand; // @dynamic hasOnSelectCommand;
@property(nonatomic) _Bool hasOnUnselectCommand; // @dynamic hasOnUnselectCommand;
@property(nonatomic) _Bool hasSelectedAccessibility; // @dynamic hasSelectedAccessibility;
@property(nonatomic) _Bool hasStyleType; // @dynamic hasStyleType;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUnselectedAccessibility; // @dynamic hasUnselectedAccessibility;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTICommand *onSelectCommand; // @dynamic onSelectCommand;
@property(retain, nonatomic) YTICommand *onUnselectCommand; // @dynamic onUnselectCommand;
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *selectedAccessibility; // @dynamic selectedAccessibility;
@property(nonatomic) int styleType; // @dynamic styleType;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *unselectedAccessibility; // @dynamic unselectedAccessibility;

@end

