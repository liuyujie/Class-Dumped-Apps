//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEWeaveSetupTaskCoordinator-Protocol.h"

@protocol HMEWeaveSetupTaskCoordinatorDelegate;

@interface HMEWeaveSetupTaskCoordinator : NSObject <HMEWeaveSetupTaskCoordinator>
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: device
    // Error parsing type: , name: structureID
    // Error parsing type: , name: structureData
    // Error parsing type: , name: deviceData
    // Error parsing type: , name: analyticsLogger
    // Error parsing type: , name: setupViewController
    // Error parsing type: , name: pairingManager
    // Error parsing type: , name: chooseWifiCoordinator
    // Error parsing type: , name: navigationController
    // Error parsing type: , name: navigationControllerCloseButtonWasShown
    // Error parsing type: , name: productDescriptor
    // Error parsing type: , name: pairingData
    // Error parsing type: , name: isThreadOnlyDevice
    // Error parsing type: , name: connectToJoiningDeviceTask
}

- (void).cxx_destruct;
- (id)init;
- (void)startWithNavigationController:(id)arg1 productDescriptor:(id)arg2;
- (id)initWithDevice:(id)arg1 structureID:(id)arg2 structureData:(id)arg3 deviceData:(id)arg4 isThreadOnlyDevice:(_Bool)arg5 chooseWifiCoordinatorFactory:(CDUnknownBlockType)arg6 analyticsLogger:(id)arg7;
@property(nonatomic) __weak id <HMEWeaveSetupTaskCoordinatorDelegate> delegate; // @synthesize delegate;

@end

