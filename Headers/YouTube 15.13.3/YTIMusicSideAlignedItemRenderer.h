//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray;

@interface YTIMusicSideAlignedItemRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *endItemsArray; // @dynamic endItemsArray;
@property(readonly, nonatomic) unsigned long long endItemsArray_Count; // @dynamic endItemsArray_Count;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) NSMutableArray *startItemsArray; // @dynamic startItemsArray;
@property(readonly, nonatomic) unsigned long long startItemsArray_Count; // @dynamic startItemsArray_Count;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

