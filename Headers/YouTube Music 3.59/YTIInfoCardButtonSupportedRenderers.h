//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIInfoCardIconRenderer, YTISimpleInfoCardButtonRenderer;

@interface YTIInfoCardButtonSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasInfoCardIconRenderer; // @dynamic hasInfoCardIconRenderer;
@property(nonatomic) _Bool hasSimpleCardButtonRenderer; // @dynamic hasSimpleCardButtonRenderer;
@property(retain, nonatomic) YTIInfoCardIconRenderer *infoCardIconRenderer; // @dynamic infoCardIconRenderer;
@property(retain, nonatomic) YTISimpleInfoCardButtonRenderer *simpleCardButtonRenderer; // @dynamic simpleCardButtonRenderer;

@end

