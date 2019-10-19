//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString;

@interface YTIFakeChannelEntity : GPBMessage
{
}

+ (id)descriptor;
+ (Class)entityClass;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *alternateChannel; // @dynamic alternateChannel;
@property(retain, nonatomic) NSMutableArray *alternateChannelListArray; // @dynamic alternateChannelListArray;
@property(readonly, nonatomic) unsigned long long alternateChannelListArray_Count; // @dynamic alternateChannelListArray_Count;
@property(copy, nonatomic) NSString *channelName; // @dynamic channelName;
@property(copy, nonatomic) NSData *channelVersion; // @dynamic channelVersion;
@property(nonatomic) _Bool hasAlternateChannel; // @dynamic hasAlternateChannel;
@property(nonatomic) _Bool hasChannelName; // @dynamic hasChannelName;
@property(nonatomic) _Bool hasChannelVersion; // @dynamic hasChannelVersion;
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(copy, nonatomic) NSString *oneofChannelEntity; // @dynamic oneofChannelEntity;
@property(copy, nonatomic) NSString *oneofStringValue; // @dynamic oneofStringValue;
@property(retain, nonatomic) NSMutableArray *repeatedStringValuesArray; // @dynamic repeatedStringValuesArray;
@property(readonly, nonatomic) unsigned long long repeatedStringValuesArray_Count; // @dynamic repeatedStringValuesArray_Count;
@property(readonly, nonatomic) int typeOneOfCase; // @dynamic typeOneOfCase;

@end
