//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString, PFMDeviceFingerprinting_Parsed;

@interface OrchNativeClientContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *accessPointName; // @dynamic accessPointName;
@property(nonatomic) long long androidId; // @dynamic androidId;
@property(nonatomic) int cameraPermissionState; // @dynamic cameraPermissionState;
@property(copy, nonatomic) NSString *device; // @dynamic device;
@property(nonatomic) long long deviceUptimeMillis; // @dynamic deviceUptimeMillis;
@property(copy, nonatomic) NSString *gid1; // @dynamic gid1;
@property(nonatomic) _Bool hasAccessPointName; // @dynamic hasAccessPointName;
@property(nonatomic) _Bool hasAndroidId; // @dynamic hasAndroidId;
@property(nonatomic) _Bool hasCameraPermissionState; // @dynamic hasCameraPermissionState;
@property(nonatomic) _Bool hasDevice; // @dynamic hasDevice;
@property(nonatomic) _Bool hasDeviceUptimeMillis; // @dynamic hasDeviceUptimeMillis;
@property(nonatomic) _Bool hasGid1; // @dynamic hasGid1;
@property(nonatomic) _Bool hasImsiHash; // @dynamic hasImsiHash;
@property(nonatomic) _Bool hasIntegratorPackageName; // @dynamic hasIntegratorPackageName;
@property(nonatomic) _Bool hasIntegratorPackageVersionCode; // @dynamic hasIntegratorPackageVersionCode;
@property(nonatomic) _Bool hasLogicalDpi; // @dynamic hasLogicalDpi;
@property(nonatomic) _Bool hasMarketClientId; // @dynamic hasMarketClientId;
@property(nonatomic) _Bool hasMccMnc; // @dynamic hasMccMnc;
@property(nonatomic) _Bool hasModuleVersion; // @dynamic hasModuleVersion;
@property(nonatomic) _Bool hasNetworkDownloadRateBps; // @dynamic hasNetworkDownloadRateBps;
@property(nonatomic) _Bool hasNetworkMetered; // @dynamic hasNetworkMetered;
@property(nonatomic) _Bool hasNetworkUploadRateBps; // @dynamic hasNetworkUploadRateBps;
@property(nonatomic) _Bool hasOsVersion; // @dynamic hasOsVersion;
@property(nonatomic) _Bool hasPackageName; // @dynamic hasPackageName;
@property(nonatomic) _Bool hasPackageVersionCode; // @dynamic hasPackageVersionCode;
@property(nonatomic) _Bool hasPackageVersionName; // @dynamic hasPackageVersionName;
@property(nonatomic) _Bool hasReadPhoneStatePermissionState; // @dynamic hasReadPhoneStatePermissionState;
@property(nonatomic) _Bool hasRiskData; // @dynamic hasRiskData;
@property(nonatomic) _Bool hasRoundedImsi; // @dynamic hasRoundedImsi;
@property(nonatomic) _Bool hasScreenHeightPx; // @dynamic hasScreenHeightPx;
@property(nonatomic) _Bool hasScreenWidthPx; // @dynamic hasScreenWidthPx;
@property(nonatomic) _Bool hasScreenXDpi; // @dynamic hasScreenXDpi;
@property(nonatomic) _Bool hasScreenYDpi; // @dynamic hasScreenYDpi;
@property(nonatomic) _Bool hasSimOperatorName; // @dynamic hasSimOperatorName;
@property(nonatomic) _Bool hasSubscriptionCount; // @dynamic hasSubscriptionCount;
@property(nonatomic) _Bool hasSubscriptionSupportsSmsTransmission; // @dynamic hasSubscriptionSupportsSmsTransmission;
@property(nonatomic) _Bool hasSupportsOcrModule; // @dynamic hasSupportsOcrModule;
@property(nonatomic) _Bool hasTimezoneName; // @dynamic hasTimezoneName;
@property(retain, nonatomic) NSMutableArray *heterodyneServerTokenArray; // @dynamic heterodyneServerTokenArray;
@property(readonly, nonatomic) unsigned long long heterodyneServerTokenArray_Count; // @dynamic heterodyneServerTokenArray_Count;
@property(copy, nonatomic) NSString *imsiHash; // @dynamic imsiHash;
@property(copy, nonatomic) NSString *integratorPackageName; // @dynamic integratorPackageName;
@property(copy, nonatomic) NSString *integratorPackageVersionCode; // @dynamic integratorPackageVersionCode;
@property(nonatomic) int logicalDpi; // @dynamic logicalDpi;
@property(copy, nonatomic) NSString *marketClientId; // @dynamic marketClientId;
@property(copy, nonatomic) NSString *mccMnc; // @dynamic mccMnc;
@property(nonatomic) long long moduleVersion; // @dynamic moduleVersion;
@property(nonatomic) long long networkDownloadRateBps; // @dynamic networkDownloadRateBps;
@property(nonatomic) _Bool networkMetered; // @dynamic networkMetered;
@property(nonatomic) long long networkUploadRateBps; // @dynamic networkUploadRateBps;
@property(copy, nonatomic) NSString *osVersion; // @dynamic osVersion;
@property(copy, nonatomic) NSString *packageName; // @dynamic packageName;
@property(copy, nonatomic) NSString *packageVersionCode; // @dynamic packageVersionCode;
@property(copy, nonatomic) NSString *packageVersionName; // @dynamic packageVersionName;
@property(nonatomic) int readPhoneStatePermissionState; // @dynamic readPhoneStatePermissionState;
@property(retain, nonatomic) PFMDeviceFingerprinting_Parsed *riskData; // @dynamic riskData;
@property(nonatomic) long long roundedImsi; // @dynamic roundedImsi;
@property(nonatomic) int screenHeightPx; // @dynamic screenHeightPx;
@property(nonatomic) int screenWidthPx; // @dynamic screenWidthPx;
@property(nonatomic) float screenXDpi; // @dynamic screenXDpi;
@property(nonatomic) float screenYDpi; // @dynamic screenYDpi;
@property(copy, nonatomic) NSString *simOperatorName; // @dynamic simOperatorName;
@property(nonatomic) int subscriptionCount; // @dynamic subscriptionCount;
@property(nonatomic) _Bool subscriptionSupportsSmsTransmission; // @dynamic subscriptionSupportsSmsTransmission;
@property(nonatomic) _Bool supportsOcrModule; // @dynamic supportsOcrModule;
@property(copy, nonatomic) NSString *timezoneName; // @dynamic timezoneName;

@end

