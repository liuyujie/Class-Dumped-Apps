//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class IBGUserMO, NSString;

@interface IBGEventLog : NSManagedObject
{
}

+ (id)entityName;
+ (id)fetchRequest;
+ (id)eventlogsFetchRequestWithUserUUID:(id)arg1;
+ (id)eventlogsFetchRequestWithMaxCount:(long long)arg1 userUUID:(id)arg2;
+ (id)eventlogsFetchRequestWithMaxCount:(long long)arg1;
+ (id)eventlogFetchRequestWithName:(id)arg1 userUUID:(id)arg2;
+ (id)fetchRequest;
- (id)description;
- (id)toSurveyEventLog;

// Remaining properties
@property(nonatomic) int count; // @dynamic count;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) IBGUserMO *user; // @dynamic user;

@end

