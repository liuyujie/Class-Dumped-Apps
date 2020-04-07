//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDFeatureInfoSyncService-Protocol.h"

@class IDCDSClient, IDReachability, IDRhmiFeatureInfoDownloader, IDVehicleInfo, NSConditionLock, NSString, NSUserDefaults, UIApplication;

@interface IDRemoteFeatureInfoSyncService : NSObject <IDFeatureInfoSyncService>
{
    _Bool _didUpdateAppInfosAfterServiceWasStarted;
    IDVehicleInfo *_vehicleInfo;
    NSString *_VIN;
    double _startReachabilityNotifierDelay;
    NSUserDefaults *_userDefaults;
    IDRhmiFeatureInfoDownloader *_downloader;
    UIApplication *_application;
    IDReachability *_reachability;
    id _reachabilityDidChangeNotificationObserver;
    NSConditionLock *_downloadFeatureListLock;
    IDCDSClient *_CDSClient;
}

+ (id)new;
@property(retain) IDCDSClient *CDSClient; // @synthesize CDSClient=_CDSClient;
@property(readonly, nonatomic) NSConditionLock *downloadFeatureListLock; // @synthesize downloadFeatureListLock=_downloadFeatureListLock;
@property _Bool didUpdateAppInfosAfterServiceWasStarted; // @synthesize didUpdateAppInfosAfterServiceWasStarted=_didUpdateAppInfosAfterServiceWasStarted;
@property(retain, nonatomic) id reachabilityDidChangeNotificationObserver; // @synthesize reachabilityDidChangeNotificationObserver=_reachabilityDidChangeNotificationObserver;
@property(retain, nonatomic) IDReachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(retain, nonatomic) IDRhmiFeatureInfoDownloader *downloader; // @synthesize downloader=_downloader;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property double startReachabilityNotifierDelay; // @synthesize startReachabilityNotifierDelay=_startReachabilityNotifierDelay;
@property(retain, nonatomic) NSString *VIN; // @synthesize VIN=_VIN;
@property(retain, nonatomic) IDVehicleInfo *vehicleInfo; // @synthesize vehicleInfo=_vehicleInfo;
- (void).cxx_destruct;
- (id)hashedAndURLEscapedVIN:(id)arg1;
- (_Bool)featureInfoUpdateRequired:(id)arg1 remoteInfo:(id)arg2;
- (double)shortAppInfosUpdateTimeInterval;
- (_Bool)shouldUpdateShortAppInfoAfterEveryStart;
- (_Bool)doesCurrentVehicleInfoHashMatchVehicleOfLastSuccesfulUpdate;
- (void)storeCurrentVehicleInfoHash;
- (double)timeIntervalSinceLastSuccesfulShortAppInfosDownload;
- (void)storeNowAsLastSuccessfulShortAppInfosDownloadTimeInterval;
- (_Bool)shortAppInfosUpdateRequired;
- (void)didDownloadRhmiFeatureInfo:(id)arg1;
- (void)downloadUpdatedFeaturesFromList:(id)arg1;
- (void)didDownloadRhmiFeatureList:(id)arg1;
- (void)downloadRhmiFeatureList;
- (void)startReachabilityNotifier;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;
- (id)initWithVehicleInfo:(id)arg1 userDefaults:(id)arg2 downloader:(id)arg3 application:(id)arg4;
- (id)initWithVehicleInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
