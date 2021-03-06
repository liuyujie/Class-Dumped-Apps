//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AsyncOperationDelegate-Protocol.h"
#import "HMEAvailableDeviceActionsProvider-Protocol.h"
#import "SetupDeviceScannerListener-Protocol.h"

@class NSHashTable, NSMutableDictionary, NSString, SetupDeviceScanner;
@protocol GCAOROrchestrationService, HMEAssistantSettingsMultiUserInfo;

@interface HMEAvailableDeviceActionsProvider : NSObject <SetupDeviceScannerListener, AsyncOperationDelegate, HMEAvailableDeviceActionsProvider>
{
    _Bool _serverUpdateInFlight;
    _Bool _linkedDevices;
    id <HMEAssistantSettingsMultiUserInfo> _assistantSettingsMultiUserInfo;
    NSString *_userID;
    NSMutableDictionary *_serverDeviceDetails;
    NSMutableDictionary *_localDeviceDetails;
    id <GCAOROrchestrationService> _orchestrationService;
    SetupDeviceScanner *_deviceScanner;
    NSHashTable *_observers;
}

@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic, getter=hasLinkedDevices) _Bool linkedDevices; // @synthesize linkedDevices=_linkedDevices;
@property(nonatomic, getter=isServerUpdateInFlight) _Bool serverUpdateInFlight; // @synthesize serverUpdateInFlight=_serverUpdateInFlight;
@property(readonly, nonatomic) SetupDeviceScanner *deviceScanner; // @synthesize deviceScanner=_deviceScanner;
@property(readonly, nonatomic) id <GCAOROrchestrationService> orchestrationService; // @synthesize orchestrationService=_orchestrationService;
@property(readonly, nonatomic) NSMutableDictionary *localDeviceDetails; // @synthesize localDeviceDetails=_localDeviceDetails;
@property(readonly, nonatomic) NSMutableDictionary *serverDeviceDetails; // @synthesize serverDeviceDetails=_serverDeviceDetails;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(readonly, nonatomic) id <HMEAssistantSettingsMultiUserInfo> assistantSettingsMultiUserInfo; // @synthesize assistantSettingsMultiUserInfo=_assistantSettingsMultiUserInfo;
- (void).cxx_destruct;
- (void)notifyChanged;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)setupDeviceWasUpdated:(id)arg1;
- (void)setupDeviceDidGoOffline:(id)arg1;
- (void)setupDeviceDidComeOnline:(id)arg1;
- (void)asyncOperation:(id)arg1 didFinishWithError:(id)arg2;
- (_Bool)deviceNeedsLinking:(id)arg1;
- (_Bool)hasEnoughDataToDetermineEnrollment:(id)arg1;
- (_Bool)deviceNeedsEnrollment:(id)arg1;
- (_Bool)deviceSupportsMultiUser:(id)arg1;
- (void)fetchServerDetailsForUserDevices;
- (void)fetchLocalDetailsForDevice:(id)arg1;
- (void)refetch;
- (void)update;
- (void)invalidateData;
- (void)dealloc;
- (id)initWithOrchestrationService:(id)arg1 deviceScanner:(id)arg2 assistantSettingsMultiUserInfo:(id)arg3 userID:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

