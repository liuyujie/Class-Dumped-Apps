//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCSUPImpressionEntry;

@interface SCSUPImpressionStats : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSUPImpressionEntry *aggregatedStats7Days; // @dynamic aggregatedStats7Days;
@property(nonatomic) _Bool hasAggregatedStats7Days; // @dynamic hasAggregatedStats7Days;
@property(retain, nonatomic) NSMutableArray *last7DaysRecordsArray; // @dynamic last7DaysRecordsArray;
@property(readonly, nonatomic) unsigned long long last7DaysRecordsArray_Count; // @dynamic last7DaysRecordsArray_Count;
@property(nonatomic) long long lastTimestampMsec; // @dynamic lastTimestampMsec;
@property(nonatomic) long long numLongImpressionsLastWeek; // @dynamic numLongImpressionsLastWeek;
@property(nonatomic) long long totalNumLongImps; // @dynamic totalNumLongImps;

@end
