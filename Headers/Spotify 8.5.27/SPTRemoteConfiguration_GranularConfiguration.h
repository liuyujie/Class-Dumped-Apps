//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SPTRemoteConfiguration_GranularConfiguration : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *configurationAssignmentId; // @dynamic configurationAssignmentId;
@property(retain, nonatomic) NSMutableArray *propertiesArray; // @dynamic propertiesArray;
@property(readonly, nonatomic) unsigned long long propertiesArray_Count; // @dynamic propertiesArray_Count;
@property(nonatomic) long long rcsFetchTime; // @dynamic rcsFetchTime;

@end
