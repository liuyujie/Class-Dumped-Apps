//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class MAJLocalResultCandidateList, NSMutableArray;

@interface MAJLocationTrigger : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) MAJLocalResultCandidateList *defaultLocations; // @dynamic defaultLocations;
@property(nonatomic) _Bool hasDefaultLocations; // @dynamic hasDefaultLocations;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(retain, nonatomic) NSMutableArray *localResultCandidateListArray; // @dynamic localResultCandidateListArray;
@property(readonly, nonatomic) unsigned long long localResultCandidateListArray_Count; // @dynamic localResultCandidateListArray_Count;
@property(nonatomic) int type; // @dynamic type;

@end

