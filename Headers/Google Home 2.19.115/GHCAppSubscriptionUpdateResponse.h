//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHCSubscriptionIdentifier, NSMutableArray;

@interface GHCAppSubscriptionUpdateResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSubscriptionId; // @dynamic hasSubscriptionId;
@property(retain, nonatomic) NSMutableArray *initialDeviceStatesArray; // @dynamic initialDeviceStatesArray;
@property(readonly, nonatomic) unsigned long long initialDeviceStatesArray_Count; // @dynamic initialDeviceStatesArray_Count;
@property(retain, nonatomic) GHCSubscriptionIdentifier *subscriptionId; // @dynamic subscriptionId;

@end

