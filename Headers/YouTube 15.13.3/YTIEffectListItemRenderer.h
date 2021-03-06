//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIFormattedString, YTIThumbnailDetails;

@interface YTIEffectListItemRenderer : GPBMessage
{
}

+ (id)descriptor;
@property(readonly, nonatomic) long long ytEditCellSelectionStyle;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *displayTitle; // @dynamic displayTitle;
@property(copy, nonatomic) NSString *effectId; // @dynamic effectId;
@property(retain, nonatomic) YTIThumbnailDetails *effectThumbnail; // @dynamic effectThumbnail;
@property(nonatomic) _Bool hasDisplayTitle; // @dynamic hasDisplayTitle;
@property(nonatomic) _Bool hasEffectId; // @dynamic hasEffectId;
@property(nonatomic) _Bool hasEffectThumbnail; // @dynamic hasEffectThumbnail;
@property(nonatomic) _Bool hasSelectionStyle; // @dynamic hasSelectionStyle;
@property(nonatomic) int selectionStyle; // @dynamic selectionStyle;

@end

