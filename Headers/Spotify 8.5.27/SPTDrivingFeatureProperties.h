//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationProperties-Protocol.h"

@class NSString;

@interface SPTDrivingFeatureProperties : NSObject <SPTRemoteConfigurationProperties>
{
    _Bool _drivingCarViewScreenlockPrevention;
    _Bool _drivingCarViewSwipeToSkip;
}

@property(readonly, nonatomic) _Bool drivingCarViewSwipeToSkip; // @synthesize drivingCarViewSwipeToSkip=_drivingCarViewSwipeToSkip;
@property(readonly, nonatomic) _Bool drivingCarViewScreenlockPrevention; // @synthesize drivingCarViewScreenlockPrevention=_drivingCarViewScreenlockPrevention;
- (id)propertyModels;
- (id)initWithPropertyValuesDictionary:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
