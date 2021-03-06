//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString, YTIIcon, YTITabContentSupportedRenderers;

@interface YTISoftTabRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTITabContentSupportedRenderers *content; // @dynamic content;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasSelected; // @dynamic hasSelected;
@property(nonatomic) _Bool hasTabIdentifier; // @dynamic hasTabIdentifier;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(nonatomic) _Bool selected; // @dynamic selected;
@property(copy, nonatomic) NSString *tabIdentifier; // @dynamic tabIdentifier;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

