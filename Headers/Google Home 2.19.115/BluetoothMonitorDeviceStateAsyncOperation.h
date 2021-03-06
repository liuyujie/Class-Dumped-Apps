//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MonitorDeviceStateAsyncOperation.h"

#import "AsyncOperationDelegate-Protocol.h"
#import "SetupDeviceScannerListener-Protocol.h"

@class AsyncOperation, BluetoothNewDevice, NSString, SetupDeviceScanner;

@interface BluetoothMonitorDeviceStateAsyncOperation : MonitorDeviceStateAsyncOperation <AsyncOperationDelegate, SetupDeviceScannerListener>
{
    BluetoothNewDevice *_device;
    SetupDeviceScanner *_deviceScanner;
    long long _networkDeviceSetupState;
    AsyncOperation *_readCharacteristicOperation;
}

- (void).cxx_destruct;
- (void)setupDeviceWasUpdated:(id)arg1;
- (void)setupDeviceDidComeOnline:(id)arg1;
- (void)asyncOperation:(id)arg1 didFinishWithError:(id)arg2;
- (_Bool)startSetupStateRequest:(id *)arg1;
- (void)cancelSetupStateRequest;
- (long long)currentSetupState;
- (void)didFinishWithError:(id)arg1;
- (void)start;
- (id)initWithBluetoothDevice:(id)arg1 deviceScanner:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

