//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMEAddress, HMEAddressMismatchViewController, HMESetupNavigationController, NSString;
@protocol HMEAddressMismatchTaskCoordinatorDelegate, HMEStructureData;

@interface HMEAddressMismatchTaskCoordinator : NSObject
{
    id <HMEAddressMismatchTaskCoordinatorDelegate> _delegate;
    HMESetupNavigationController *_navigationController;
    id <HMEStructureData> _structureData;
    HMEAddressMismatchViewController *_addressMismatchViewController;
    NSString *_structureID;
    HMEAddress *_address;
}

@property(retain, nonatomic) HMEAddress *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *structureID; // @synthesize structureID=_structureID;
@property(retain, nonatomic) HMEAddressMismatchViewController *addressMismatchViewController; // @synthesize addressMismatchViewController=_addressMismatchViewController;
@property(readonly, nonatomic) id <HMEStructureData> structureData; // @synthesize structureData=_structureData;
@property(retain, nonatomic) HMESetupNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak id <HMEAddressMismatchTaskCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapSkipButton;
- (void)didCompleteAddressMismatchRequest;
- (void)showError:(id)arg1;
- (void)saveAddressWithCompletion:(CDUnknownBlockType)arg1;
- (void)confirmAddressMismatchRequest;
- (void)requestToSetAddressForStructureID:(id)arg1 address:(id)arg2 inNavigationController:(id)arg3;
- (id)initWithStructureData:(id)arg1;

@end

