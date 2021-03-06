//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PEGATTStateMachineBase.h"

@class CBUUID, NSDictionary;

@interface PEGATTSetValueFlow : PEGATTStateMachineBase
{
    CBUUID *_GATTCharacteristicID;
    unsigned char _scanningSlot;
    int _updatedSlots;
    NSDictionary *_GATTCapabilities;
}

- (void).cxx_destruct;
- (id)whatDoISet;
- (id)whatValueAmISetting;
- (id)valueToWriteSlot;
- (void)didSetValueForSlot;
- (void)didScanSlot:(id)arg1;
- (void)didSetSlotForScan;
- (void)finishedUnlockingBeacon;
- (id)stateMachineTransitionTable;
- (id)initWithPeripheral:(id)arg1 GATTCharacteristicID:(id)arg2 passKey:(id)arg3 userInfo:(id)arg4 logs:(id)arg5 callback:(CDUnknownBlockType)arg6 statusCallback:(CDUnknownBlockType)arg7 dispatchQueue:(id)arg8;

@end

