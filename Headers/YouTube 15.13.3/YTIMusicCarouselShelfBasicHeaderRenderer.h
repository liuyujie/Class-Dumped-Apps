//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTIAccessibilitySupportedDatas, YTICommand, YTIFormattedString, YTIRenderer;

@interface YTIMusicCarouselShelfBasicHeaderRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibilityData; // @dynamic accessibilityData;
@property(retain, nonatomic) NSMutableArray *endIconsArray; // @dynamic endIconsArray;
@property(readonly, nonatomic) unsigned long long endIconsArray_Count; // @dynamic endIconsArray_Count;
@property(retain, nonatomic) NSMutableArray *endTitleIconsArray; // @dynamic endTitleIconsArray;
@property(readonly, nonatomic) unsigned long long endTitleIconsArray_Count; // @dynamic endTitleIconsArray_Count;
@property(nonatomic) _Bool hasAccessibilityData; // @dynamic hasAccessibilityData;
@property(nonatomic) _Bool hasMoreContentButton; // @dynamic hasMoreContentButton;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasStrapline; // @dynamic hasStrapline;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIRenderer *moreContentButton; // @dynamic moreContentButton;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIFormattedString *strapline; // @dynamic strapline;
@property(retain, nonatomic) YTIRenderer *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

