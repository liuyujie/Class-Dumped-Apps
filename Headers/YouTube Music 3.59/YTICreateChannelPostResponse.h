//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICommand, YTIFeedEntryAlertSupportedRenderers, YTIResponseContext;

@interface YTICreateChannelPostResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFeedEntryAlertSupportedRenderers *alert; // @dynamic alert;
@property(nonatomic) _Bool hasAlert; // @dynamic hasAlert;
@property(nonatomic) _Bool hasRedirectEndpoint; // @dynamic hasRedirectEndpoint;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(retain, nonatomic) YTICommand *redirectEndpoint; // @dynamic redirectEndpoint;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;

@end

