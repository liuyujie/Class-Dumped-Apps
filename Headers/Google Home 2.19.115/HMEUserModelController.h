//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEUserData-Protocol.h"

@class HMEUserNetworkService, NSString;
@protocol GCAConfigurationFlags;

@interface HMEUserModelController : NSObject <HMEUserData>
{
    HMEUserNetworkService *_userNetworkService;
    id <GCAConfigurationFlags> _flags;
}

@property(readonly, nonatomic) id <GCAConfigurationFlags> flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) HMEUserNetworkService *userNetworkService; // @synthesize userNetworkService=_userNetworkService;
- (void).cxx_destruct;
- (void)setUserPreferenceWithStructureID:(id)arg1 deviceID:(id)arg2 preferenceSelector:(int)arg3 preferenceSettingsArray:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchDevicePreferencesWithStructureID:(id)arg1 ghcDeviceID:(id)arg2 preferenceSelectors:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchUserPreferencesWithStructureID:(id)arg1 preferenceSelectors:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendAppSubscriptionUpdateForStructureID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchDeviceArbitrationConsentRequirementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchWorksWithNestAccountLinkStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)createNestAccountForEnvironment:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchNestAccountLinkStateWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithUsersService:(id)arg1 flags:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

