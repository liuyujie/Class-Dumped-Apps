//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CBPeripheral, NLGBluetoothManager, NSDictionary, NSNumber;

@protocol NLGBluetoothManagerDelegate
- (void)bluetoothManager:(NLGBluetoothManager *)arg1 didDiscoverPeripheral:(CBPeripheral *)arg2 advertisementData:(NSDictionary *)arg3 RSSI:(NSNumber *)arg4;
- (void)bluetoothManagerDidChangeState:(NLGBluetoothManager *)arg1;
@end

