//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HMEModel, NSString;

@protocol HMEUnifiedDeviceData <NSObject>
- (void)forceRefreshLocalDeviceAssociations;
- (HMEModel *)unifiedOfflineUnassignedDevices;
- (HMEModel *)unifiedSpacelessDevicesWithAgentID:(NSString *)arg1;
- (HMEModel *)multizoneDevicesNotInGroup:(NSString *)arg1;
- (HMEModel *)unifiedThirdPartyDevicesNotInAnyStructureOfCurrentUser;
- (HMEModel *)unifiedDeviceForDeviceID:(NSString *)arg1;
- (HMEModel *)unifiedDeviceForCloudDeviceID:(NSString *)arg1;
- (HMEModel *)unifiedCloudcastDevicesForImport;
- (HMEModel *)unifiedLocalStereoPairLeaderDeviceForGroupWithUUID:(NSString *)arg1;
- (HMEModel *)unifiedMultizoneGroupMembersForGroupWithUUID:(NSString *)arg1;
- (HMEModel *)unifiedMultizoneGroupForUUID:(NSString *)arg1;
- (HMEModel *)unifiedNonStereoPairMultizoneGroups;
- (HMEModel *)unifiedMultizoneGroups;
- (HMEModel *)unifiedLocalDeviceOrMultizoneGroupForDeviceID:(NSString *)arg1;
- (HMEModel *)unifiedLocalDeviceForDeviceID:(NSString *)arg1;
- (void)unifiedDeviceForHGSID:(NSString *)arg1 completion:(void (^)(HMEUnifiedDevice *))arg2;
- (HMEModel *)unifiedDeviceForHGSID:(NSString *)arg1;
- (HMEModel *)unifiedLocalDeviceForCloudDeviceID:(NSString *)arg1;
- (HMEModel *)stereoPairAndConnectedToNetworkFilteredLocalDevices;
- (HMEModel *)stereoPairAndSetupFilteredLocalDevicesWithMultizoneSupport;
- (HMEModel *)unifiedLocalDevices:(_Bool)arg1 filterUsingStereoPair:(_Bool)arg2;
- (HMEModel *)unifiedGraphDevices;
@end

