//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRWificonfig_GunsPlatformSpecificRegistration, GTLRWificonfig_GunsRegistrationData, NSString;

@interface GTLRWificonfig_GunsRegistrationRequest : GTLRObject
{
}


// Remaining properties
@property(copy, nonatomic) NSString *gunsAppVersion; // @dynamic gunsAppVersion;
@property(copy, nonatomic) NSString *gunsClientId; // @dynamic gunsClientId;
@property(retain, nonatomic) GTLRWificonfig_GunsRegistrationData *gunsRegistrationData; // @dynamic gunsRegistrationData;
@property(copy, nonatomic) NSString *gunsViewId; // @dynamic gunsViewId;
@property(retain, nonatomic) GTLRWificonfig_GunsPlatformSpecificRegistration *platformSpecificRegistrationData; // @dynamic platformSpecificRegistrationData;
@end

