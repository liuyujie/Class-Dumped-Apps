//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, WHTSafeHtmlProto;

@interface ReportAbuseMiscString : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasStringHtml; // @dynamic hasStringHtml;
@property(nonatomic) _Bool hasStringTemplate; // @dynamic hasStringTemplate;
@property(nonatomic) _Bool hasStringText; // @dynamic hasStringText;
@property(retain, nonatomic) WHTSafeHtmlProto *stringHtml; // @dynamic stringHtml;
@property(nonatomic) int stringTemplate; // @dynamic stringTemplate;
@property(copy, nonatomic) NSString *stringText; // @dynamic stringText;

@end

