//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSManagedObjectID, NSString;

@interface YTDelayedEvent : NSObject
{
    int _maxAgeHours;
    int _numberOfRetries;
    int _tier;
    NSData *_eventData;
    NSDate *_dateAdded;
    NSString *_identityID;
    NSString *_visitorData;
    NSString *_eventType;
    NSString *_dataSyncID;
    NSString *_eventBatchKey;
    NSManagedObjectID *_objectID;
}

+ (id)visitorDataFromEventBatchKey:(id)arg1;
+ (id)identityIDFromEventBatchKey:(id)arg1;
+ (id)createEventBatchKeyWithIdentityID:(id)arg1 visitorData:(id)arg2;
+ (id)delayedEventWithEventData:(id)arg1 identityID:(id)arg2 visitorData:(id)arg3 maxAgeHours:(int)arg4 eventType:(id)arg5;
@property(retain, nonatomic) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property(readonly, nonatomic) NSString *eventBatchKey; // @synthesize eventBatchKey=_eventBatchKey;
@property(readonly, nonatomic) NSString *dataSyncID; // @synthesize dataSyncID=_dataSyncID;
@property(nonatomic) int tier; // @synthesize tier=_tier;
@property(nonatomic) int numberOfRetries; // @synthesize numberOfRetries=_numberOfRetries;
@property(copy, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
@property(nonatomic) int maxAgeHours; // @synthesize maxAgeHours=_maxAgeHours;
@property(readonly, copy, nonatomic) NSString *visitorData; // @synthesize visitorData=_visitorData;
@property(readonly, copy, nonatomic) NSString *identityID; // @synthesize identityID=_identityID;
@property(retain, nonatomic) NSDate *dateAdded; // @synthesize dateAdded=_dateAdded;
@property(retain, nonatomic) NSData *eventData; // @synthesize eventData=_eventData;
- (void).cxx_destruct;
- (id)initWithObjectID:(id)arg1 eventData:(id)arg2 dataSyncID:(id)arg3 dateAdded:(id)arg4 maxAgeHours:(int)arg5 eventType:(id)arg6 numberOfRetries:(int)arg7 tier:(int)arg8;
- (id)initWithObjectID:(id)arg1 eventData:(id)arg2 identityID:(id)arg3 visitorData:(id)arg4 dateAdded:(id)arg5 maxAgeHours:(int)arg6 eventType:(id)arg7 numberOfRetries:(int)arg8 tier:(int)arg9;
- (id)eventProtoData;
- (void)deleteEntityInContext:(id)arg1;
- (void)writeStateToEntity:(id)arg1;
- (id)insertEntityInContext:(id)arg1;
- (id)loadEntityFromContext:(id)arg1 error:(id *)arg2;
- (_Bool)isPersisted;

@end

