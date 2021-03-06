//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NLGPairDeviceRequestDelegate-Protocol.h"

@class NLGPairDeviceRequest, NLGWeaveCommandDispatcher, NLGWeaveDeviceManagerProxy, NSArray, NSData, NSOperationQueue, NSString;
@protocol NLGConnectionProfile, OS_dispatch_queue;

@interface NLGPairingManager : NSObject <NLGPairDeviceRequestDelegate>
{
    NSObject<OS_dispatch_queue> *_proxyCallbackQueue;
    NLGWeaveCommandDispatcher *_commandDispatcher;
    NSOperationQueue *_operationQueue;
    NLGPairDeviceRequest *_persistentRequest;
    unsigned long long _currentMode;
    unsigned long long _currentStep;
    NSData *_fabricConfigData;
    NSArray *_threadNetworks;
    NSArray *_wifiNetworks;
    NSObject<NLGConnectionProfile> *_connectionProfile;
    CDUnknownBlockType _connectionCompletionHandler;
    CDUnknownBlockType _deviceEnumerationCompletionBlock;
    CDUnknownBlockType _deviceEnumerationFailureBlock;
    NLGWeaveDeviceManagerProxy *_proxy;
}

+ (id)pairingManagerUsingCentralManager:(id)arg1 mock:(id)arg2;
+ (void)initialize;
@property(retain, nonatomic) NLGWeaveDeviceManagerProxy *proxy; // @synthesize proxy=_proxy;
@property(copy, nonatomic) CDUnknownBlockType deviceEnumerationFailureBlock; // @synthesize deviceEnumerationFailureBlock=_deviceEnumerationFailureBlock;
@property(copy, nonatomic) CDUnknownBlockType deviceEnumerationCompletionBlock; // @synthesize deviceEnumerationCompletionBlock=_deviceEnumerationCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType connectionCompletionHandler; // @synthesize connectionCompletionHandler=_connectionCompletionHandler;
@property(retain, nonatomic) NSObject<NLGConnectionProfile> *connectionProfile; // @synthesize connectionProfile=_connectionProfile;
@property(retain, nonatomic) NSArray *wifiNetworks; // @synthesize wifiNetworks=_wifiNetworks;
@property(retain, nonatomic) NSArray *threadNetworks; // @synthesize threadNetworks=_threadNetworks;
@property(retain, nonatomic) NSData *fabricConfigData; // @synthesize fabricConfigData=_fabricConfigData;
@property(nonatomic) unsigned long long currentStep; // @synthesize currentStep=_currentStep;
@property(nonatomic) unsigned long long currentMode; // @synthesize currentMode=_currentMode;
@property(retain, nonatomic) NLGPairDeviceRequest *persistentRequest; // @synthesize persistentRequest=_persistentRequest;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) NLGWeaveCommandDispatcher *commandDispatcher; // @synthesize commandDispatcher=_commandDispatcher;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *proxyCallbackQueue; // @synthesize proxyCallbackQueue=_proxyCallbackQueue;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getCameraAuthDataRequestUsingNonce:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)pairAuthTokenRequestForPairingToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createServiceInfoFromAccountInfo:(id)arg1;
- (id)remotePassiveRendezvousRequestForProfile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)connectRequestForProfile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isInRepeatScanMode;
- (void)clearRequestInfo;
- (void)weavePairDeviceRequestDidFinishWithError:(id)arg1 forRequestType:(unsigned long long)arg2 resumeRequestType:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)executeRequest:(id)arg1;
- (void)updateWiFiNetworkToNetwork:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3;
- (void)getCameraAuthDataUsingNonce:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)completeDevicePairingUsingAccountInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3;
- (void)provisionWiFiNetwork:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3;
- (void)stopEnumeratingDevices;
- (void)startEnumeratingDevicesMatching:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)stringDescribing:(id)arg1;
- (unsigned long long)fabricIdentifierWithHexString:(id)arg1;
- (void)stopScanningForNetworks;
- (void)scanNetworksWithRepeatScanning:(_Bool)arg1 interval:(double)arg2 completion:(CDUnknownBlockType)arg3 progress:(CDUnknownBlockType)arg4;
- (id)weaveNetworkDataFromResponse:(id)arg1;
- (void)copyConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enableThreadJoiningForConnectedDeviceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginDevicePairingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)connectToDeviceUsingProfile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)disconnectFromConnectedDeviceWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isConnectedToDevice) _Bool connectedToDevice;
- (id)init;
- (id)initWithCentralManager:(id)arg1 networkData:(id)arg2;
- (id)initWithCentralManager:(id)arg1;
- (id)initWithCentralManager:(id)arg1 commandLogger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

