//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCPBUnlockablesOndemandHomeFilterAddress, SCPBUnlockablesOndemandHomeFilterTargeting;

@interface SCPBUnlockablesOndemandHomeFilterWireModel : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCPBUnlockablesOndemandHomeFilterAddress *address; // @dynamic address;
@property(nonatomic) _Bool hasAddress; // @dynamic hasAddress;
@property(nonatomic) _Bool hasTargeting; // @dynamic hasTargeting;
@property(retain, nonatomic) NSMutableArray *homeFilterAssetsArray; // @dynamic homeFilterAssetsArray;
@property(readonly, nonatomic) unsigned long long homeFilterAssetsArray_Count; // @dynamic homeFilterAssetsArray_Count;
@property(nonatomic) _Bool isEnabled; // @dynamic isEnabled;
@property(retain, nonatomic) SCPBUnlockablesOndemandHomeFilterTargeting *targeting; // @dynamic targeting;

@end
