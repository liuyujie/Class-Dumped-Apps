//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GUNSAnalyticsData, GUNSERenderInfo, GUNSMMonitorPayload, NSMutableArray, NSString;

@interface GUNSECoalescedNotification : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GUNSAnalyticsData *analyticsData; // @dynamic analyticsData;
@property(copy, nonatomic) NSString *appId; // @dynamic appId;
@property(copy, nonatomic) NSString *debugInfo; // @dynamic debugInfo;
@property(nonatomic) unsigned long long deleted4; // @dynamic deleted4;
@property(retain, nonatomic) NSMutableArray *entityReferenceArray; // @dynamic entityReferenceArray;
@property(readonly, nonatomic) unsigned long long entityReferenceArray_Count; // @dynamic entityReferenceArray_Count;
@property(nonatomic) _Bool hasAnalyticsData; // @dynamic hasAnalyticsData;
@property(nonatomic) _Bool hasAppId; // @dynamic hasAppId;
@property(nonatomic) _Bool hasDebugInfo; // @dynamic hasDebugInfo;
@property(nonatomic) _Bool hasDeleted4; // @dynamic hasDeleted4;
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(nonatomic) _Bool hasMonitorPayload; // @dynamic hasMonitorPayload;
@property(nonatomic) _Bool hasPriority; // @dynamic hasPriority;
@property(nonatomic) _Bool hasPushEnabled; // @dynamic hasPushEnabled;
@property(nonatomic) _Bool hasReadState; // @dynamic hasReadState;
@property(nonatomic) _Bool hasRenderInfo; // @dynamic hasRenderInfo;
@property(nonatomic) _Bool hasUpdatedVersion; // @dynamic hasUpdatedVersion;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(retain, nonatomic) GUNSMMonitorPayload *monitorPayload; // @dynamic monitorPayload;
@property(retain, nonatomic) NSMutableArray *notificationMetadataArray; // @dynamic notificationMetadataArray;
@property(readonly, nonatomic) unsigned long long notificationMetadataArray_Count; // @dynamic notificationMetadataArray_Count;
@property(retain, nonatomic) NSMutableArray *notificationTypeArray; // @dynamic notificationTypeArray;
@property(readonly, nonatomic) unsigned long long notificationTypeArray_Count; // @dynamic notificationTypeArray_Count;
@property(nonatomic) int priority; // @dynamic priority;
@property(nonatomic) _Bool pushEnabled; // @dynamic pushEnabled;
@property(nonatomic) int readState; // @dynamic readState;
@property(retain, nonatomic) GUNSERenderInfo *renderInfo; // @dynamic renderInfo;
@property(nonatomic) unsigned long long updatedVersion; // @dynamic updatedVersion;

@end

