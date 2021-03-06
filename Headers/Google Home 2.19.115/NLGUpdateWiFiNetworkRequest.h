//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NLGPairDeviceRequest.h"

@class NLGPairDeviceRequestUpdateWiFiNetworkParam, NSError, NSMutableArray, NSNumber;

@interface NLGUpdateWiFiNetworkRequest : NLGPairDeviceRequest
{
    NLGPairDeviceRequestUpdateWiFiNetworkParam *_requestParam;
    NSNumber *_addedNetworkID;
    NSError *_lastError;
    NSMutableArray *_existingNetworks;
    unsigned long long _currentNetworkIndex;
}

@property(nonatomic) unsigned long long currentNetworkIndex; // @synthesize currentNetworkIndex=_currentNetworkIndex;
@property(retain, nonatomic) NSMutableArray *existingNetworks; // @synthesize existingNetworks=_existingNetworks;
@property(copy, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(copy, nonatomic) NSNumber *addedNetworkID; // @synthesize addedNetworkID=_addedNetworkID;
@property(retain, nonatomic) NLGPairDeviceRequestUpdateWiFiNetworkParam *requestParam; // @synthesize requestParam=_requestParam;
- (void).cxx_destruct;
- (void)weaveResponseRemoveNetworkDidFinishWithError:(id)arg1;
- (void)weaveResponseRemoveNetworkDidFinish:(id)arg1;
- (void)beginRemoveNetwork:(long long)arg1;
- (void)removeFirstExistingNetworkIfPresent;
- (void)weaveResponseDisableConnectionMonitorDidFinishWithError:(id)arg1;
- (void)weaveResponseDisableConnectionMonitorSuccess:(id)arg1;
- (void)beginDisableConnectionMonitor;
- (void)weaveResponseTestNetworkConnectivityDidFinishWithError:(id)arg1;
- (void)weaveResponseTestNetworkConnectivityDidFinish:(id)arg1;
- (void)beginTestNetworkConnectivity;
- (void)weaveResponseEnableNetworkDidFinishWithError:(id)arg1;
- (void)weaveResponseEnableNetworkDidFinish:(id)arg1;
- (void)beginEnableNetwork;
- (void)weaveResponseDisableNetworkDidFinishWithError:(id)arg1;
- (void)weaveResponseDisableNetworkDidFinish:(id)arg1;
- (void)beginDisableNetwork:(long long)arg1;
- (void)disableFirstExistingNetworkIfPresent;
- (void)weaveResponseGetNetworksDidFinishWithError:(id)arg1;
- (void)weaveResponseGetNetworksDidFinish:(id)arg1;
- (void)beginGetNetworks;
- (void)weaveResponseAddNetworkDidFinishWithError:(id)arg1;
- (void)weaveResponseAddNetworkDidFinish:(id)arg1;
- (void)beginAddNetwork;
- (void)weaveResponseEnableConnectionMonitorDidFinishWithError:(id)arg1;
- (void)weaveResponseEnableConnectionMonitorSuccess:(id)arg1;
- (void)beginEnableConnectionMonitor;
- (void)execute;

@end

