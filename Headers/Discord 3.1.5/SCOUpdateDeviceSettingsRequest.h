//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSDK_PBGeneratedMessage.h"

@class SCODeviceSettings, SCORequestHeader;

@interface SCOUpdateDeviceSettingsRequest : GSDK_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCODeviceSettings *deviceSettings; // @dynamic deviceSettings;
@property(nonatomic) _Bool hasDeviceSettings; // @dynamic hasDeviceSettings;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(retain, nonatomic) SCORequestHeader *header; // @dynamic header;

@end
