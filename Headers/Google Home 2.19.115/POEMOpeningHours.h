//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface POEMOpeningHours : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasOpenNow; // @dynamic hasOpenNow;
@property(nonatomic) _Bool openNow; // @dynamic openNow;
@property(retain, nonatomic) NSMutableArray *periodsArray; // @dynamic periodsArray;
@property(readonly, nonatomic) unsigned long long periodsArray_Count; // @dynamic periodsArray_Count;
@property(retain, nonatomic) NSMutableArray *weekdayTextsArray; // @dynamic weekdayTextsArray;
@property(readonly, nonatomic) unsigned long long weekdayTextsArray_Count; // @dynamic weekdayTextsArray_Count;

@end

