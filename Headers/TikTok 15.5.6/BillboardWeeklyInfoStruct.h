//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface BillboardWeeklyInfoStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *endDate; // @dynamic endDate;
@property(nonatomic) _Bool hasEndDate; // @dynamic hasEndDate;
@property(nonatomic) _Bool hasIsCurrent; // @dynamic hasIsCurrent;
@property(nonatomic) _Bool hasLastUpdatedDate; // @dynamic hasLastUpdatedDate;
@property(nonatomic) _Bool hasSerial; // @dynamic hasSerial;
@property(nonatomic) _Bool hasStartDate; // @dynamic hasStartDate;
@property(nonatomic) _Bool isCurrent; // @dynamic isCurrent;
@property(copy, nonatomic) NSString *lastUpdatedDate; // @dynamic lastUpdatedDate;
@property(nonatomic) int serial; // @dynamic serial;
@property(copy, nonatomic) NSString *startDate; // @dynamic startDate;

@end

