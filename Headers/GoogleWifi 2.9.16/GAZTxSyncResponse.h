//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBBoolArray, NSMutableArray;

@interface GAZTxSyncResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBBoolArray *activateServerTriggerArray; // @dynamic activateServerTriggerArray;
@property(readonly, nonatomic) unsigned long long activateServerTriggerArray_Count; // @dynamic activateServerTriggerArray_Count;
@property(nonatomic) long long currentTimeMillis; // @dynamic currentTimeMillis;
@property(nonatomic) _Bool hasCurrentTimeMillis; // @dynamic hasCurrentTimeMillis;
@property(retain, nonatomic) NSMutableArray *pendingTxRequestsArray; // @dynamic pendingTxRequestsArray;
@property(readonly, nonatomic) unsigned long long pendingTxRequestsArray_Count; // @dynamic pendingTxRequestsArray_Count;

@end

