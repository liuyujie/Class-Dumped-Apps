//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GDKAsyncOperation.h>

@class EKEventStore;

@interface GABExportEntitiesOperation : GDKAsyncOperation
{
    unsigned long long _entityType;
    id _entities;
    EKEventStore *_eventStore;
}

+ (id)removeDuplicateRecurringEvents:(id)arg1;
+ (id)getExportingCalendars:(id)arg1 withEntityType:(unsigned long long)arg2;
@property(retain, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property(retain) id entities; // @synthesize entities=_entities;
@property(nonatomic) unsigned long long entityType; // @synthesize entityType=_entityType;
- (void).cxx_destruct;
- (void)fetchReminders;
- (void)fetchEvents;
- (id)name;
- (void)main;
- (id)initWithEntityType:(unsigned long long)arg1;

@end

