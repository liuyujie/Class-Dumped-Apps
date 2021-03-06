//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface ASTLHotwordSensitivityEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int centralizedPageEntrySource; // @dynamic centralizedPageEntrySource;
@property(nonatomic) int deviceLevelPageEntrySource; // @dynamic deviceLevelPageEntrySource;
@property(nonatomic) int deviceType; // @dynamic deviceType;
@property(nonatomic) _Bool hasCentralizedPageEntrySource; // @dynamic hasCentralizedPageEntrySource;
@property(nonatomic) _Bool hasDeviceLevelPageEntrySource; // @dynamic hasDeviceLevelPageEntrySource;
@property(nonatomic) _Bool hasDeviceType; // @dynamic hasDeviceType;
@property(nonatomic) _Bool hasHotwordModelLocale; // @dynamic hasHotwordModelLocale;
@property(nonatomic) _Bool hasHotwordSensitivityAfter; // @dynamic hasHotwordSensitivityAfter;
@property(nonatomic) _Bool hasHotwordSensitivityBefore; // @dynamic hasHotwordSensitivityBefore;
@property(nonatomic) _Bool hasHotwordSensitivityEventType; // @dynamic hasHotwordSensitivityEventType;
@property(nonatomic) _Bool hasIsFirstUser; // @dynamic hasIsFirstUser;
@property(nonatomic) _Bool hasIsSettingEnabled; // @dynamic hasIsSettingEnabled;
@property(nonatomic) _Bool hasNumberOfDeviceLevelPageEntriesFromCentralizedPage; // @dynamic hasNumberOfDeviceLevelPageEntriesFromCentralizedPage;
@property(nonatomic) _Bool hasNumberOfDevicesListedOnCentralizedPage; // @dynamic hasNumberOfDevicesListedOnCentralizedPage;
@property(copy, nonatomic) NSString *hotwordModelLocale; // @dynamic hotwordModelLocale;
@property(nonatomic) int hotwordSensitivityAfter; // @dynamic hotwordSensitivityAfter;
@property(nonatomic) int hotwordSensitivityBefore; // @dynamic hotwordSensitivityBefore;
@property(nonatomic) int hotwordSensitivityEventType; // @dynamic hotwordSensitivityEventType;
@property(nonatomic) _Bool isFirstUser; // @dynamic isFirstUser;
@property(nonatomic) _Bool isSettingEnabled; // @dynamic isSettingEnabled;
@property(nonatomic) int numberOfDeviceLevelPageEntriesFromCentralizedPage; // @dynamic numberOfDeviceLevelPageEntriesFromCentralizedPage;
@property(nonatomic) int numberOfDevicesListedOnCentralizedPage; // @dynamic numberOfDevicesListedOnCentralizedPage;

@end

