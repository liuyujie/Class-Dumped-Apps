//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface ASTLAutoSettingsEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int autoSettingsEventType; // @dynamic autoSettingsEventType;
@property(nonatomic) _Bool hasAutoSettingsEventType; // @dynamic hasAutoSettingsEventType;
@property(nonatomic) _Bool hasPhoneLocale; // @dynamic hasPhoneLocale;
@property(copy, nonatomic) NSString *phoneLocale; // @dynamic phoneLocale;

@end

