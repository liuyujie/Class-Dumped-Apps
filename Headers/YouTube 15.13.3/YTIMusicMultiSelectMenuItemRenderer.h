//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString, YTIAccessibilitySupportedDatas, YTICommand, YTIFormattedString;

@interface YTIMusicMultiSelectMenuItemRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibility; // @dynamic accessibility;
@property(retain, nonatomic) YTICommand *deselectedCommand; // @dynamic deselectedCommand;
@property(copy, nonatomic) NSString *formItemEntityKey; // @dynamic formItemEntityKey;
@property(nonatomic) _Bool hasAccessibility; // @dynamic hasAccessibility;
@property(nonatomic) _Bool hasDeselectedCommand; // @dynamic hasDeselectedCommand;
@property(nonatomic) _Bool hasFormItemEntityKey; // @dynamic hasFormItemEntityKey;
@property(nonatomic) _Bool hasSelectedCommand; // @dynamic hasSelectedCommand;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTICommand *selectedCommand; // @dynamic selectedCommand;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

