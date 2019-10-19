//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSURL, NSUUID, PEBeaconInfo, PEBeaconScanner;

@protocol PEBeaconScannerDelegate <NSObject>

@optional
- (void)beaconScanner:(PEBeaconScanner *)arg1 didLoseCustomBeacon:(NSUUID *)arg2 advertisementData:(NSDictionary *)arg3 RSSI:(NSNumber *)arg4;
- (void)beaconScanner:(PEBeaconScanner *)arg1 didFindCustomBeacon:(NSUUID *)arg2 advertisementData:(NSDictionary *)arg3 RSSI:(NSNumber *)arg4;
- (void)beaconScanner:(PEBeaconScanner *)arg1 didDiscoverURLBeacon:(id)arg2 withURL:(NSURL *)arg3 txPower:(NSNumber *)arg4 RSSI:(NSNumber *)arg5;
- (void)beaconScanner:(PEBeaconScanner *)arg1 didLoseBeacon:(PEBeaconInfo *)arg2;
- (void)beaconScanner:(PEBeaconScanner *)arg1 didFindBeacon:(PEBeaconInfo *)arg2;
- (void)beaconScanner:(PEBeaconScanner *)arg1 didCollectBeaconInfos:(NSArray *)arg2;
@end
