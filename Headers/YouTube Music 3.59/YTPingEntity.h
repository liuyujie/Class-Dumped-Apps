//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import "YTRetryableTask-Protocol.h"

@class NSData, NSDate, NSString, YTRetryStateEntity;

@interface YTPingEntity : NSManagedObject <YTRetryableTask>
{
}

- (id)retryTimeSequence;
- (id)request;
- (id)ping;

// Remaining properties
@property(retain, nonatomic) NSDate *dateAdded; // @dynamic dateAdded;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool googDelayedDecoration; // @dynamic googDelayedDecoration;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSDate *maxAge; // @dynamic maxAge;
@property(nonatomic) int maxAgeHours; // @dynamic maxAgeHours;
@property(nonatomic) int maxRetryWindowMinutes; // @dynamic maxRetryWindowMinutes;
@property(copy, nonatomic) NSString *pageId; // @dynamic pageId;
@property(nonatomic) int priority; // @dynamic priority;
@property(retain, nonatomic) NSData *requestData; // @dynamic requestData;
@property(retain, nonatomic) YTRetryStateEntity *retryState; // @dynamic retryState;
@property(retain, nonatomic) NSData *retryTimeSequenceData; // @dynamic retryTimeSequenceData;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *tag; // @dynamic tag;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

