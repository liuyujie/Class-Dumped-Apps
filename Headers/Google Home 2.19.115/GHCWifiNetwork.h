//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHCNetworkCapabilities, GHCWifiNetwork_Settings, NSMutableArray, NSString;

@interface GHCWifiNetwork : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GHCNetworkCapabilities *capabilities; // @dynamic capabilities;
@property(retain, nonatomic) NSMutableArray *deviceIdsArray; // @dynamic deviceIdsArray;
@property(readonly, nonatomic) unsigned long long deviceIdsArray_Count; // @dynamic deviceIdsArray_Count;
@property(copy, nonatomic) NSString *groupId; // @dynamic groupId;
@property(nonatomic) _Bool hasCapabilities; // @dynamic hasCapabilities;
@property(nonatomic) _Bool hasGroupId; // @dynamic hasGroupId;
@property(nonatomic) _Bool hasHgsStructureId; // @dynamic hasHgsStructureId;
@property(nonatomic) _Bool hasRootDeviceId; // @dynamic hasRootDeviceId;
@property(nonatomic) _Bool hasSettings; // @dynamic hasSettings;
@property(copy, nonatomic) NSString *hgsStructureId; // @dynamic hgsStructureId;
@property(copy, nonatomic) NSString *rootDeviceId; // @dynamic rootDeviceId;
@property(retain, nonatomic) GHCWifiNetwork_Settings *settings; // @dynamic settings;

@end

