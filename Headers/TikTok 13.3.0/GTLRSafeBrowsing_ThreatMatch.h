//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRSafeBrowsing_ThreatEntry, GTLRSafeBrowsing_ThreatEntryMetadata, NSString;

@interface GTLRSafeBrowsing_ThreatMatch : GTLRObject
{
}


// Remaining properties
@property(copy, nonatomic) NSString *cacheDuration; // @dynamic cacheDuration;
@property(copy, nonatomic) NSString *platformType; // @dynamic platformType;
@property(retain, nonatomic) GTLRSafeBrowsing_ThreatEntry *threat; // @dynamic threat;
@property(retain, nonatomic) GTLRSafeBrowsing_ThreatEntryMetadata *threatEntryMetadata; // @dynamic threatEntryMetadata;
@property(copy, nonatomic) NSString *threatEntryType; // @dynamic threatEntryType;
@property(copy, nonatomic) NSString *threatType; // @dynamic threatType;
@end
