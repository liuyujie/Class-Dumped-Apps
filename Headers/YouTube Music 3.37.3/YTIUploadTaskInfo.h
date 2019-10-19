//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, YTIUploadFlow, YTIUploadPreferences;

@interface YTIUploadTaskInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int connectionType; // @dynamic connectionType;
@property(retain, nonatomic) GPBEnumArray *featuresArray; // @dynamic featuresArray;
@property(readonly, nonatomic) unsigned long long featuresArray_Count; // @dynamic featuresArray_Count;
@property(retain, nonatomic) YTIUploadFlow *flow; // @dynamic flow;
@property(nonatomic) _Bool hasConnectionType; // @dynamic hasConnectionType;
@property(nonatomic) _Bool hasFlow; // @dynamic hasFlow;
@property(nonatomic) _Bool hasPreferences; // @dynamic hasPreferences;
@property(retain, nonatomic) YTIUploadPreferences *preferences; // @dynamic preferences;

@end
