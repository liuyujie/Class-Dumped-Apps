//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface GCKDBNetworkInfo : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(nonatomic) _Bool analyticsEnabled; // @dynamic analyticsEnabled;
@property(retain, nonatomic) NSSet *cloudDiscoveryInfos; // @dynamic cloudDiscoveryInfos;
@property(copy, nonatomic) NSDate *lastConnectedTime; // @dynamic lastConnectedTime;
@property(copy, nonatomic) NSDate *lastQueryTime; // @dynamic lastQueryTime;
@property(retain, nonatomic) NSSet *localConnections; // @dynamic localConnections;
@property(copy, nonatomic) NSString *networkID; // @dynamic networkID;
@property(retain, nonatomic) NSSet *probedBLEBeacons; // @dynamic probedBLEBeacons;
@property(nonatomic) int type; // @dynamic type;

@end

